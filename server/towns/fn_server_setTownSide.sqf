/*
Author:
    -[EUTW]- trnapster

    Description:
    Set town to new site

    Parameter(s):
    _this select 0: OBJECT - Flagpole
    _this select 1: SIDE - new side that owns the town

    Returns:
    NONE
*/

(_this select 0) setVariable ["side", (_this select 1), true];