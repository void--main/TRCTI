#define TRN_RATIO (safezoneW / safezoneH)


class RscActiveText
{
	idc = -1;
	type = 11;
	style = 2;

	x = 0;
	y = 0;
	w = 0.035;
	h = 0.035;

	shadow = 2;
	default = 0;
	color[] = {0,0,0,0};
	colorActive[] = {1,1,1,1};
	colorText[] = {1,1,1,1};

	soundClick[] = {"",0.1,1};
	soundEnter[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	
	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) /25) * 1)";
	text = "";
};


class RscButton
{
	idc = -1;
	type = 1;
	style = 2;

	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;

	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;

	borderSize = 0;
	shadow = 2;
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.7};
	colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackgroundDisabled[] = {0.95,0.95,0.95,1};
	colorBorder[] = {0,0,0,1};
	colorDisabled[] = {0.4,0.4,0.4,1};
	colorFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorShadow[] = {0,0,0,1};
	colorText[] = {1,1,1,1};

	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};

	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
};


class RscCheckbox
{
	idc = -1;
	type = 7;
	style = 0;

	x = "LINE_X(XVAL)";
	y = "LINE_Y";
	w = "LINE_W(WVAL)";
	h = 0.029412;

	color[] = {0,0,0,0};
	colorBackground[] = {0,0,1,1};
	colorDisable[] = {0.4,0.4,0.4,1};
	colorSelect[] = {0,0,0,1};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorText[] = {1,1,1,1};
	colorTextDisable[] = {0.4,0.4,0.4,1};
	colorTextSelect[] = {0,0.8,0,1};

	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};

	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	checked_strings[] = {"CHECKED"};
	strings[] = {"UNCHECKED"};
};


class RscCombo
{
	idc = -1;
	type = 4;
	style = "0x10 + 0x200";

	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;

	maxHistoryDelay = 1;
	shadow = 0;
	wholeHeight = 0.45;
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	color[] = {1,1,1,1};
	colorActive[] = {1,0,0,1};
	colorBackground[] = {0,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,1};
	colorSelect[] = {0,0,0,1};
	colorSelectBackground[] = {1,1,1,0.7};
	colorText[] = {1,1,1,1};

	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};

	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";

	class Scrollbar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	};
};


class RscControlsGroup
{
	idc = -1;
	type = 15;
	style = 16;

	x = 0;
	y = 0;
	w = 1;
	h = 1;

	class Controls
	{

	};

	class HScrollbar
	{
		color[] = {1,1,1,1};
		height = 0.028;
		shadow = 0;
	};

	class Scrollbar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	};

	class VScrollbar
	{
		autoScrollDelay = 5;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		color[] = {1,1,1,1};
		shadow = 0;
		width = 0.021;
	};
};


class RscEdit
{
	idc = -1;
	type = 2;
	style = "0x00 + 0x40";
	
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.04;

	autocomplete = "";
	canModify = 1;
	shadow = 2;
	colorBackground[] = {0,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorText[] = {0.95,0.95,0.95,1};

	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
};


class RscFrame
{
	idc = -1;
	type = 0;
	style = 64;

	x = 0;
	y = 0;
	w = 1;
	h = 1;

	shadow = 2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};

	font = "PuristaMedium";
	sizeEx = 0.02;
	text = "";
};


class RscHTML
{
	idc = -1;
	type = 9;
	style = 0;

	x = 0;
	y = 0;
	w = 1;
	h = 1;

	shadow = 2;
	filename = "";
	nextPage = "\A3\ui_f\data\gui\rsccommon\rschtml\arrow_right_ca.paa";
	prevPage = "\A3\ui_f\data\gui\rsccommon\rschtml\arrow_left_ca.paa";
	colorBackground[] = {0,0,0,0};
	colorBold[] = {1,1,1,1};
	colorLink[] = {1,1,1,0.75};
	colorLinkActive[] = {1,1,1,1};
	colorPicture[] = {1,1,1,1};
	colorPictureBorder[] = {0,0,0,0};
	colorPictureLink[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorText[] = {1,1,1,1};
	tooltipColorBox[] = {0,0,0,0.5};
	tooltipColorShade[] = {1,1,0.7,1};
	tooltipColorText[] = {0,0,0,1};

	text = "";

	class H1
	{
		align = "left";
		font = "PuristaMedium";
		fontBold = "PuristaSemibold";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};

	class H2
	{
		align = "right";
		font = "PuristaMedium";
		fontBold = "PuristaSemibold";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};

	class H3
	{
		align = "left";
		font = "PuristaMedium";
		fontBold = "PuristaSemibold";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};

	class H4
	{
		align = "left";
		font = "PuristaMedium";
		fontBold = "PuristaSemibold";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};

	class H5
	{
		align = "left";
		font = "PuristaMedium";
		fontBold = "PuristaSemibold";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};

	class H6
	{
		align = "left";
		font = "PuristaMedium";
		fontBold = "PuristaSemibold";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};

	class P
	{
		align = "left";
		font = "PuristaMedium";
		fontBold = "PuristaSemibold";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};
};


class RscLineBreak
{
	idc = -1;
	style = 98;
		
	x = 0;
	y = 0;
	w = 1;
	h = 1;

	shadow = 0;
};


class RscListBox
{
	idc = -1;
	type = 5;
	style = 16;

	x = 0;
	y = 0;
	w = 0.4;
	h = 0.4;

	autoScrollDelay = 5;
	autoScrollRewind = 0;
	autoScrollSpeed = -1;
	period = 1.2;
	maxHistoryDelay = 1;
	shadow = 0;
	color[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.3};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,0};
	colorSelect2[] = {0,0,0,1};
	colorSelect[] = {0,0,0,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};

	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";

	class Scrollbar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	};
};


class RscListNBox
{
	idc = -1;
	type = 102;
	style = 16;

	x = 0;
	y = 0;
	w = 0.4;
	h = 0.4;

	drawSideArrows = 0;
	idcLeft = -1;
	idcRight = -1;

	autoScrollDelay = 5;
	autoScrollRewind = 0;
	autoScrollSpeed = -1;
	period = 1.2;
	maxHistoryDelay = 1;
	shadow = 0;
	color[] = {0.95,0.95,0.95,1};
	colorBackground[] = {0,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0,0,0,1};
	colorSelect[] = {0,0,0,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorText[] = {1,1,1,1};

	soundSelect[] = {"",0.1,1};
	
	columns[] = {0,0.1,0.3};
	rowHeight = 0.1;

	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";

	class Scrollbar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	};
};

class RscMapControl
{
	idc = -1;
	type = 101;
	style = 48;

	x = "SafeZoneXAbs";
	y = "SafeZoneY + 1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	w = "SafeZoneWAbs";
	h = "SafeZoneH - 1.5 * 	((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

	alphaFadeEndScale = 2;
	alphaFadeStartScale = 2;
	colorBackground[] = {0.969,0.957,0.949,1};
	colorCountlines[] = {0.572,0.354,0.188,0.25};
	colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
	colorForest[] = {0.624,0.78,0.388,0.5};
	colorForestBorder[] = {0,0,0,0};
	colorGrid[] = {0.1,0.1,0.1,0.6};
	colorGridMap[] = {0.1,0.1,0.1,0.6};
	colorInactive[] = {1,1,1,0.5};
	colorLevels[] = {0.286,0.177,0.094,0.5};
	colorMainCountlines[] = {0.572,0.354,0.188,0.5};
	colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
	colorMainRoads[] = {0.9,0.5,0.3,1};
	colorMainRoadsFill[] = {1,0.6,0.4,1};
	colorNames[] = {0.1,0.1,0.1,0.9};
	colorOutside[] = {0,0,0,1};
	colorPowerLines[] = {0.1,0.1,0.1,1};
	colorRailWay[] = {0.8,0.2,0,1};
	colorRoads[] = {0.7,0.7,0.7,1};
	colorRoadsFill[] = {1,1,1,1};
	colorRocks[] = {0,0,0,0.3};
	colorRocksBorder[] = {0,0,0,0};
	colorSea[] = {0.467,0.631,0.851,0.5};
	colorText[] = {0,0,0,1};
	colorTracks[] = {0.84,0.76,0.65,0.15};
	colorTracksFill[] = {0.84,0.76,0.65,1};
	font = "TahomaB";
	fontGrid = "TahomaB";
	fontInfo = "PuristaMedium";
	fontLabel = "PuristaMedium";
	fontLevel = "TahomaB";
	fontNames = "EtelkaNarrowMediumPro";
	fontUnits = "TahomaB";
	maxSatelliteAlpha = 0.85;
	moveOnEdges = 1;
	ptsPerSquareCLn = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareObj = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 20;
	scaleDefault = 0.16;
	scaleMax = 1;
	scaleMin = 0.001;
	shadow = 0;
	showCountourInterval = 0;
	sizeEx = 0.04;
	sizeExGrid = 0.02;
	sizeExInfo = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeExLabel = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeExLevel = 0.02;
	sizeExNames = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
	sizeExUnits = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	stickX[] = {0.2,["Gamma",1,1.5]};
	stickY[] = {0.2,["Gamma",1,1.5]};
	text = "#(argb,8,8,3)color(1,1,1,1)";
	
	class ActiveMarker
	{
		color[] = {0.3,0.1,0.9,1};
		size = 50;
	};

	class Bunker
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = "1.5 * 14 * 0.05";
		size = 14;
	};

	class Bush
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.2 * 14 * 0.05 * 0.05";
		size = "14/2";
	};

	class BusStop
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
		importance = 1;
		size = 24;
	};

	class Chapel
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		importance = 1;
		size = 24;
	};

	class Church
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
		importance = 1;
		size = 24;
	};

	class Command
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 18;
	};

	class Cross
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		importance = 1;
		size = 24;
	};

	class CustomMark
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
		importance = 1;
		size = 24;
	};

	class Fortress
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = "2 * 16 * 0.05";
		size = 16;
	};

	class Fountain
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		importance = "1 * 12 * 0.05";
		size = 11;
	};

	class Fuelstation
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
		importance = 1;
		size = 24;
	};

	class Hospital
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
		importance = 1;
		size = 24;
	};

	class Legend
	{
		color[] = {0,0,0,1};
		colorBackground[] = {1,1,1,0.5};
		font = "PuristaMedium";
		h = "3.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
		x = "SafeZoneX + (((safezoneW / safezoneH) min 1.2) / 40)";
		y = "SafeZoneY + safezoneH - 4.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};

	class Lighthouse
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
		importance = 1;
		size = 24;
	};

	class power
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		importance = 1;
		size = 24;
	};

	class powersolar
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
		importance = 1;
		size = 24;
	};

	class powerwave
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
		importance = 1;
		size = 24;
	};

	class powerwind
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
		importance = 1;
		size = 24;
	};

	class Quay
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		importance = 1;
		size = 24;
	};

	class Rock
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.1,0.1,0.1,0.8};
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		importance = "0.5 * 12 * 0.05";
		size = 12;
	};

	class Ruin
	{
		coefMax = 4;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		importance = "1.2 * 16 * 0.05";
		size = 16;
	};

	class Shipwreck
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\shipwreck_CA.paa";
		importance = 1;
		size = 24;
	};

	class SmallTree
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.6 * 12 * 0.05";
		size = 12;
	};

	class Stack
	{
		coefMax = 4;
		coefMin = 0.9;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		importance = "2 * 16 * 0.05";
		size = 20;
	};

	class Task
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorCanceled[] = {0.7,0.7,0.7,1};
		colorCreated[] = {1,1,1,1};
		colorDone[] = {0.7,1,0.3,1};
		colorFailed[] = {1,0.3,0.2,1};
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		importance = 1;
		size = 27;
	};

	class Tourism
	{
		coefMax = 4;
		coefMin = 0.7;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		importance = "1 * 16 * 0.05";
		size = 16;
	};

	class Transmitter
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
		importance = 1;
		size = 24;
	};

	class Tree
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.9 * 16 * 0.05";
		size = 12;
	};

	class ViewTower
	{
		coefMax = 4;
		coefMin = 0.5;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		importance = "2.5 * 16 * 0.05";
		size = 16;
	};

	class Watertower
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
		importance = 1;
		size = 24;
	};

	class Waypoint
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 24;
	};

	class WaypointCompleted
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
		importance = 1;
		size = 24;
	};
};


class RscObject
{
	idc = -1;
	type = 81;

	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;

	model = "";

	direction[] = {0,0.5,0.5};
	position[] = {0.026,0.047,0.2};
	positionBack[] = {0,-0.02,0.075};
	scale = "0.47 * 0.875 * (SafeZoneW Min SafeZoneH)";
	selectionArrow = "arrow";
	up[] = {0,1,0};

	enableZoom = 0;
	inBack = 0;
	shadow = 0;
	zoomDuration = 0.5;
};




class RscPicture
{
	idc = -1;
	type = 0;
	style = 48;

	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;

	fixedWidth = 0;
	lineSpacing = 0;
	shadow = 0;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};

	font = "TahomaB";
	sizeEx = 0;
	text = "";
};


class RscPictureKeepAspect
{
	idc = -1;
	type = 0;
	style = "0x30 + 0x800";

	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;

	fixedWidth = 0;
	lineSpacing = 0;
	shadow = 0;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};

	font = "TahomaB";
	sizeEx = 0;
	text = "";
};


class RscProgress
{
	idc = -1;
	type = 8;
	style = 0;

	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;

	texture = "\A3\ui_f\data\GUI\RscCommon\RscProgress\progressbar_ca.paa";
	shadow = 2;
	colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
	colorFrame[] = {0,0,0,0};
};


class RscProgressNotFreeze
{
	idc = -1;
	type = 45;
	style = 0;

	x = 0;
	y = 0;
	w = 0.5;
	h = 0.1;

	shadow = 0;
	texture = "#(argb,8,8,3)color(0,0,0,0)";
};


class RscShortcutButton
{
	idc = -1;
	type = 16;
	style = 0;

	x = 0.1;
	y = 0.1;
	w = 0.183825;
	h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";

	action = "";
	shortcuts[] = {};

	default = 0;
	period = 0.4;
	periodFocus = 1.2;
	periodOver = 0.8;
	shadow = 1;
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\focus_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\over_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\down_ca.paa";
	color2[] = {0.95,0.95,0.95,1};
	color[] = {1,1,1,1};
	colorBackground2[] = {1,1,1,1};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorDisabled[] = {1,1,1,0.25};
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";

	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};

	font = "PuristaMedium";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";

	class Attributes
	{
		align = "left";
		color = "#E5E5E5";
		font = "PuristaMedium";
		shadow = "true";
	};

	class AttributesImage
	{
		align = "left";
		color = "#E5E5E5";
		font = "PuristaMedium";
	};

	class Hitzone
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = 0;
	};

	class ShortcutPos
	{
		h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		left = 0;
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
	};

	class TextPos
	{
		bottom = 0;
		left = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		right = 0.005;
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
	};
};


class RscSlider
{
	idc = -1;
	type = 3;
	style = 1024;

	x = 0;
	y = 0;
	w = 0.3;
	h = 0.025;

	shadow = 0;
	color[] = {1,1,1,0.8};
	colorActive[] = {1,1,1,1};
};


class RscStructuredText
{
	idc = -1;
	type = 13;
	style = 0;

	x = 0;
	y = 0;
	w = 0.1;
	h = 0.035;

	shadow = 1;
	colorText[] = {1,1,1,1};

	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";

	class Attributes
	{
		align = "left";
		color = "#ffffff";
		font = "PuristaMedium";
		shadow = 1;
	};
};


class RscText
{
	idc = -1;
	type = 0;
	style = 0;

	x = 0;
	y = 0;
	w = 0.3;
	h = 0.037;

	fixedWidth = 0;
	linespacing = 1;
	shadow = 1;
	colorBackground[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};

	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
};


class RscToolbox
{
	idc = -1;
	type = 6;
	style = 2;

	x = 0;
	y = 0;
	w = 0.3;
	h = 0.037;

	shadow = 0;
	color[] = {0.95,0.95,0.95,1};
	colorDisable[] = {0.4,0.4,0.4,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.5};
	colorText[] = {0.95,0.95,0.95,1};
	colorTextDisable[] = {0.4,0.4,0.4,1};
	colorTextSelect[] = {0.95,0.95,0.95,1};

	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};


class RscTree
{
	idc = -1;
	type = 12;
	style = 0;

	x = 0;
	y = 0;
	w = 0.4;
	h = 0.4;

	maxHistoryDelay = 1;
	multiselectEnabled = 0;
	shadow = 0;
	colorArrow[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	colorDisabled[] = {1,1,1,0.25};
	colorMarked[] = {0.2,0.3,0.7,1};
	colorMarkedSelected[] = {0,0.5,0.5,1};
	colorMarkedText[] = {0,0,0,1};
	colorSelect[] = {1,1,1,0.7};
	colorSelectBackground[] = {0,0,0,0.5};
	colorSelectText[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	hiddenTexture = "A3\ui_f\data\gui\rsccommon\rsctree\hiddenTexture_ca.paa";
	expandedTexture = "A3\ui_f\data\gui\rsccommon\rsctree\expandedTexture_ca.paa";
	
	rowHeight = 0.0439091;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";

	class Scrollbar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	};
};