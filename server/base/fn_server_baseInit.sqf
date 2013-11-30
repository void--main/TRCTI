/*
Author:
-[EUTW]- trnapster

Description:
Set up Bases

Parameter(s):
NONE

Returns:
NONE
*/

private ["_random", "_index0", "_index1", "_marker"];

_random = floor(random 2);
_index0 = (TR_bases select 0) call BIS_fnc_randomIndex;
_index1 = (TR_bases select 1) call BIS_fnc_randomIndex;

if (_random == 0) then
{
    TR_baseWest = (TR_bases select 0) select _index0;
    TR_baseEast = (TR_bases select 1) select _index1;

    TR_fobWest = (TR_fobMarker select 0) select _index0;
    TR_fobEast = (TR_fobMarker select 1) select _index1;
}
else
{
    TR_baseWest = (TR_bases select 1) select _index1;
    TR_baseEast = (TR_bases select 0) select _index0;

    TR_fobWest = (TR_fobMarker select 1) select _index1;
    TR_fobEast = (TR_fobMarker select 0) select _index0;
};

publicVariable "TR_baseWest";
publicVariable "TR_baseEast";

TR_baseWest setFlagTexture "\A3\data_f\flags\flag_nato_co.paa";
TR_baseEast setFlagTexture "\A3\data_f\flags\flag_csat_co.paa";

_marker = createMarker ["baseWest", getPos TR_baseWest];
_marker setMarkerShape "ELLIPSE";
_marker setMarkerBrush "Grid";
_marker setMarkerSize [500, 500];
_marker setMarkerColor "ColorBlue";
_marker setMarkerAlpha 0.5;

_marker = createMarker ["baseEast", getPos TR_baseEast];
_marker setMarkerShape "ELLIPSE";
_marker setMarkerBrush "Grid";
_marker setMarkerSize [500, 500];
_marker setMarkerColor "ColorRed";
_marker setMarkerAlpha 0.5;