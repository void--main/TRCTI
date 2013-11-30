/*
    Author:
    -[EUTW]- trnapster

    Description:
    Initialises serverside Scripts and FSMs and sets Eventhandlers

    Parameter(s):
    NONE

    Returns:
    NONE
*/

//Compile functions
TRN_server_baseInit = compilefinal preprocessFileLineNumbers "server\base\fn_server_baseInit.sqf";
TRN_server_onPlayerConnected = compilefinal preprocessFileLineNumbers "server\events\fn_server_onPlayerConnected.sqf";
TRN_server_onPlayerDisconnected = compilefinal preprocessFileLineNumbers "server\events\fn_server_onPlayerDisconnected.sqf";
TRN_server_errectFOB = compilefinal preprocessFileLineNumbers "server\fob\fn_server_errectFOB.sqf";
TRN_server_mobiliseFOB = compilefinal preprocessFileLineNumbers "server\fob\fn_server_mobiliseFOB.sqf";
TRN_server_townInit = compilefinal preprocessFileLineNumbers "server\towns\fn_server_townInit.sqf";
TRN_server_setTownSide = compilefinal preprocessFileLineNumbers "server\towns\fn_server_setTownSide.sqf";
TRN_server_refreshTownValue = compilefinal preprocessFileLineNumbers "server\towns\fn_server_refreshTownValue.sqf";

//Start Town FSM
{
    _x execFSM "server\fsm\TRN_server_towns.fsm";

    _x setVariable ["side", TR_townSides select _forEachIndex, true];
    _x setVariable ["name", TR_townNames select _forEachIndex, true];

}forEach TR_towns;

//Start FOB West FSM
{
    [_x, west, _forEachIndex] execFSM "server\fsm\TRN_server_fob.fsm";

}forEach TR_fobWest;

//Start FOB East FSM
{
    [_x, east, _forEachIndex] execFSM "server\fsm\TRN_server_fob.fsm";

}forEach TR_fobEast;


["TRN_id", "onPlayerConnected", "[] spawn TRN_server_onPlayerConnected"] call BIS_fnc_addStackedEventhandler;
["TRN_id", "onPlayerDisconnected", "[] spawn TRN_server_onPlayerDisconnected"] call BIS_fnc_addStackedEventhandler;