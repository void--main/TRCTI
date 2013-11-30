/*
Author:
    -[EUTW]- trnapster

    Description:
    Set up towns and create their triggers

    Parameter(s):
    _this: OBJECT - Flagpole

    Returns:
    NONE
*/

private ["_trigger"];

_this setVariable ["discoveredWest", false, true];
_this setVariable ["discoveredEast", false, true];

//Create Towntrigger West
_trigger = createTrigger ["EmptyDetector", getPos _this];
_trigger setTriggerArea [TR_FlagRange, TR_FlagRange, 0, false];
_trigger setTriggerActivation ["WEST", "PRESENT", true];
_trigger setTriggerStatements ["this", "", ""];

_this setVariable ["trigger_west", _trigger, false];

//Create Towntrigger East
_trigger = createTrigger ["EmptyDetector", getPos _this];
_trigger setTriggerArea [TR_FlagRange, TR_FlagRange, 0, false];
_trigger setTriggerActivation ["EAST", "PRESENT", true];
_trigger setTriggerStatements ["this", "", ""];

_this setVariable ["trigger_east", _trigger, false];

//Create Towntrigger Resistance
_trigger = createTrigger ["EmptyDetector", getPos _this];
_trigger setTriggerArea [TR_FlagRange, TR_FlagRange, 0, false];
_trigger setTriggerActivation ["GUER", "PRESENT", true];
_trigger setTriggerStatements ["this", "", ""];

_this setVariable ["trigger_resist", _trigger, false];

//Create Warntrigger West
_trigger = createTrigger ["EmptyDetector", getPos _this];
_trigger setTriggerArea [TR_DiscoverRange, TR_DiscoverRange, 0, false];
_trigger setTriggerActivation ["WEST", "PRESENT", true];
_trigger setTriggerStatements ["this", "", ""];

_this setVariable ["trigger_discovered_west", _trigger, false];

//Create Warntrigger East
_trigger = createTrigger ["EmptyDetector", getPos _this];
_trigger setTriggerArea [TR_DiscoverRange, TR_DiscoverRange, 0, false];
_trigger setTriggerActivation ["EAST", "PRESENT", true];
_trigger setTriggerStatements ["this", "", ""];

_this setVariable ["trigger_discovered_east", _trigger, false];