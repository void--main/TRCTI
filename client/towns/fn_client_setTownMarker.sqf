/*
    Author:
    -[EUTW]- trnapster

    Description:
    Change color of Townmarker

    Parameter(s):
    _this: OBJECT - Flagpole

    Returns:
    NONE
*/

private ["_marker", "_side"];

_marker = _this getVariable "marker";
_side = _this getVariable "side";

switch (_side) do
{
    case west: {_marker setMarkerColorLocal "ColorBlue";};

    case east: {_marker setMarkerColorLocal "ColorRed";};

    case resistance: {_marker setMarkerColorLocal "ColorGreen";};
};