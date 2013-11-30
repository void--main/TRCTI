/*
    Author:
    -[EUTW]- trnapster

    Description:
    Initialises clientside Scripts and FSMs and sets Eventhandlers and Actions

    Parameter(s):
    NONE

    Returns:
    NONE
*/

//Compile functions
TRN_client_onFired = compilefinal preprocessFileLineNumbers "client\events\fn_client_onFired.sqf";
TRN_client_onFired = compilefinal preprocessFileLineNumbers "client\events\fn_client_onKilled.sqf";
TRN_client_onPut = compilefinal preprocessFileLineNumbers "client\events\fn_client_onPut.sqf";
TRN_client_onTake = compilefinal preprocessFileLineNumbers "client\events\fn_client_onTake.sqf";
TRN_client_errectActionFOB = compilefinal preprocessFileLineNumbers "client\fob\fn_client_errectActionFOB.sqf";
TRN_client_mobiliseActionFOB = compilefinal preprocessFileLineNumbers "client\fob\fn_client_mobiliseActionFOB.sqf";
TRN_client_saveGear = compilefinal preprocessFileLineNumbers "client\player\fn_client_gear.sqf";
TRN_client_setTownMarker = compilefinal preprocessFileLineNumbers "client\towns\fn_client_setTownMarker.sqf";
TRN_client_townCapture = compilefinal preprocessFileLineNumbers "client\towns\fn_client_townCapture.sqf";
TRN_client_townInit = compilefinal preprocessFileLineNumbers "client\towns\fn_client_townInit.sqf";
TRN_client_townWarn = compilefinal preprocessFileLineNumbers "client\towns\fn_client_townWarn.sqf";

//Set Eventhandler
player addEventhandler ["KILLED", {_this call TRN_client_onKilled}];
player addEventhandler ["FIRED", {_this call TRN_client_onFired}];
player addEventhandler ["TAKE", {_this spawn TRN_client_onTake}];
player addEventhandler ["PUT", {_this spawn TRN_client_onPut}];

//Start Town FSM
{
    _x execFSM "client\fsm\TRN_client_towns.fsm";
    
}forEach TR_towns;

//Set player
TR_money = TR_startMoney;

[1] call TRN_client_saveGear;

player addAction ["<t color='#ff0000'>Main Menu</t>", {[] call TRN_client_createGearShopDLG}, [], 5, false, true, "", "true"];

if (side player == west) then
{
    player setPos ((getPos TR_baseWest))
}
else
{	
    player setPos ((getPos TR_baseEast))
};