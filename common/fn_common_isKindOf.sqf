/*
    Author:
    -[EUTW]- trnapster

    Description:
    Checks if child is kind of given class

    Parameter(s):
    _this select 0: STRING - classname of child
    _this select 1: STRING - classname of parent
    _this select 2: STRING - classname of hub

    Returns:
    BOOLEAN
*/

TRN_common_isKindOf = {
	private ["_child", "_parent", "_config", "_array"];


	_child = _this select 0;
	_parent = _this select 1;
	_config = _this select 2;

	_array = [(configfile >> _config >> _child), true] call BIS_fnc_returnParents;

	if (_parent in _array) then
	{
		true
	}
	else
	{
		false
	}
};