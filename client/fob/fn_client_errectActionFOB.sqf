/*
    Author:
    -[EUTW]- trnapster

    Description:
    Creates Action to errect the FOB

    Parameter(s):
    _this: OBJECT - FOB vehicle

    Returns:
    NONE
*/

_this addAction ["Errect FOB", {[_this select 0, "TRN_server_actionErrectFOB", false, false] call BIS_fnc_MP}, [], 10, false, true];