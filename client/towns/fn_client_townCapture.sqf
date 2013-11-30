/*
    Author:
    -[EUTW]- trnapster

    Description:
    Refresh townside and create Notifications

    Parameter(s):
    _this: OBJECT - Flagpole

    Returns:
    NONE
*/

private ["_town", "_friendly"];

_town = _this select 0;
_friendly = _this select 1;
_name = _town getVariable "name";

TR_newTown = true;

if (_friendly) then
{
    ["townCaptured",[_name]] call bis_fnc_showNotification;
}
else
{
    ["townLost",[_name]] call bis_fnc_showNotification;
};