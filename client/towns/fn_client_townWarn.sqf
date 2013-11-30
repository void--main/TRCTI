/*
    Author:
    -[EUTW]- trnapster

    Description:
    Creates Townwarning

    Parameter(s):
    _this: OBJECT - Flagpole

    Returns:
    NONE
*/

private ["_name"];

_name = _this getVariable "name";

["townWarn",[_name]] call bis_fnc_showNotification;