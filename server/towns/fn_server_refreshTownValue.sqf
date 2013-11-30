/*
    Author:
    -[EUTW]- trnapster

    Description:
    Refreshes Town Value

    Parameter(s):
    _this select 0: OBJECT - Flagpole
    _this select 1: BOOLEAN - TRUE if original value is > 0

    Returns:
    NONE
*/

private ["_town", "_positive", "_value", "_count", "_countWest", "_countEast", "_countResist"];

_town = _this select 0;
_positive = _this select 1;

_value = _town getVariable "value";

_countWest = count list (_town getVariable "trigger_west");
_countEast = count list (_town getVariable "trigger_east");
_countResist = count list (_town getVariable "trigger_resist"); 

_count = _countWest - _countEast;

if (_count > 0) then
{
    if (_count > _countResist) then
    {
        _count = _count - _countResist;
    }
    else
    {
        _count = 0;
    };
}
else
{
    if (_count < 0) then
    {
        if (_count < _countResist) then
        {
            _count = _count + _countResist;
        }
        else
        {
            _count = 0;
        };
    };
};          

_value = _value + _count;

if (_positive && (_value < 0)) then
{
    _value = 0;
}
else
{
    if (!(_positive) && (_value > 0)) then
    {
        _value = 0;
    }
    else
    {
        if (_value > 1000) then
        {
            _value = 1000;
        }
        else
        {
            if (_value < -1000) then
            {
                _value = -1000;
            };
        };
    };
};

_town setVariable ["value", _value, true];