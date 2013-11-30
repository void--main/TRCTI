/*
Author:
    -[EUTW]- trnapster

    Description:
    Set up towns and create their triggers and markers

    Parameter(s):
    _this: OBJECT - Flagpole

    Returns:
    NONE
*/

private ["_trigger", "_triggerAct", "_marker"];

_name = _this getVariable "name";

//Create Towntrigger
_triggerAct = format["[%1] spawn TRN_client_createTownHUD;", _this];
_trigger = createTrigger ["EmptyDetector", getPos _this];
_trigger setTriggerArea [TR_FlagRange, TR_FlagRange, 0, false];
_trigger setTriggerActivation ["ANY", "PRESENT", true];
_trigger setTriggerStatements ["(player in thislist) OR (vehicle player in thislist)", _triggerAct, ""];

_this setVariable ["trigger", _trigger, false];

//Create Warntrigger West
_trigger = createTrigger ["EmptyDetector", getPos _this];
_trigger setTriggerArea [TR_WarnRange, TR_WarnRange, 0, false];
_trigger setTriggerActivation ["WEST", "PRESENT", true];
_trigger setTriggerStatements ["this", "", ""];

_this setVariable ["trigger_warn_west", _trigger, false];

//Create Warntrigger East
_trigger = createTrigger ["EmptyDetector", getPos _this];
_trigger setTriggerArea [TR_WarnRange, TR_WarnRange, 0, false];
_trigger setTriggerActivation ["EAST", "PRESENT", true];
_trigger setTriggerStatements ["this", "", ""];

_this setVariable ["trigger_warn_east", _trigger, false];

//Create Townmarker
_marker = createMarkerLocal [_name, getPos _this];
_marker setMarkerShapeLocal "ICON";
_marker setMarkerTypeLocal "mil_circle";
_marker setMarkerColorLocal "ColorBlack";
_marker setMarkerTextLocal _name;

_this setVariable ["marker", _marker, false];