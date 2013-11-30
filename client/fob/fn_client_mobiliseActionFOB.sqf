/*
    Author:
    -[EUTW]- trnapster

    Description:
    Creates Action to mobilise the FOB

    Parameter(s):
    _this: OBJECT - FOB vehicle

    Returns:
    NONE
*/

_this addAction ["Mobilise FOB", {[_this select 0, "TRN_server_actionMobiliseFOB", false, false] call BIS_fnc_MP}, [], 10, false, true];