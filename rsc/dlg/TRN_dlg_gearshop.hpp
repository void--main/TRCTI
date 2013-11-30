#define TRN_GEAR_COLOR_BG_TRANSPARENT {0,0,0,0}
#define TRN_GEAR_COLOR_TEXT {1,1,1,1}
#define TRN_GEAR_COLOR_BG {0.1,0.1,0.1,0.5}
#define TRN_GEAR_COLOR_BG_MAIN {0.1,0.1,0.1,0.2}
#define TRN_GEAR_COLOR_BG_ACTIVE {1,0,1,0.5}
#define TRN_GEAR_COLOR_BG_HOVER {1,1,1,0.5}
#define TRN_GEAR_COLOR_BG_HEADER {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"}
#define TRN_GEAR_SPACE_X 0.005
#define TRN_GEAR_SPACE_Y (0.005 * TRN_RATIO)
#define TRN_GEAR_SIZE_LB 0.45

class RscInvText : RscText
{
	colorBackground[] = TRN_GEAR_COLOR_BG;	
};

class RscInvListNBox : RscListNBox
{
	period = 0;
	columns[] = {0,0.18,0.86};
	rowHeight = 0.05;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.70)";

	colorSelect2[] = TRN_GEAR_COLOR_TEXT;
	colorSelect[] = TRN_GEAR_COLOR_TEXT;
	colorSelectBackground2[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorSelectBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	color[] = TRN_GEAR_COLOR_BG_TRANSPARENT;

	onLBSelChanged = "[1, _this] call TRN_client_gearShopEventhandler";
	onLBDblClick = "hint str _this";
	onLBListSelChanged = "hint str _this";
};

class RscInvButton : RscButton
{
	colorBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorBackgroundActive[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorBackgroundDisabled[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorBorder[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorDisabled[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorFocused[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorShadow[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorText[] = TRN_GEAR_COLOR_BG_TRANSPARENT;

	onMouseButtonClick = "[0, _this] call TRN_client_gearShopEventhandler";
	onMouseButtonDblClick  = "hint str _this";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
//	onMouseEnter = "";	
};

class RscSymButton : RscButton
{
	colorBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorBackgroundActive[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorBackgroundDisabled[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorBorder[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorDisabled[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorFocused[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorShadow[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
	colorText[] = TRN_GEAR_COLOR_BG_TRANSPARENT;	
};


class TRN_dlg_gearshop 
{

	idd = 10000;

	class controls 
	{
		/////ACTIVE Buttons/////

		class BUT_INV_Uniform : RscInvButton
		{	
			idc = 10001;
	
			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2;
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BUT_INV_Vest : RscInvButton
		{
			idc = 10002;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 1 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BUT_INV_Backpack : RscInvButton
		{
			idc = 10003;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 2 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BUT_INV_Helmet : RscInvButton
		{
			idc = 10004;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BUT_INV_Goggles : RscInvButton
		{
			idc = 10005;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 4 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BUT_INV_NV : RscInvButton
		{
			idc = 10006;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 5 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BUT_INV_Binoculars : RscInvButton
		{
			idc = 10007;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 6 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BUT_INV_Map : RscInvButton
		{
			idc = 10008;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 7 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BUT_INV_GPS : RscInvButton
		{
			idc = 10009;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BUT_INV_Radio : RscInvButton
		{
			idc = 10010;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 9 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BUT_INV_Compass : RscInvButton
		{
			idc = 10011;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 10 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BUT_INV_Watch : RscInvButton
		{
			idc = 10012;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 11 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};
		
		class BUT_INV_Primary : RscInvButton
		{
			idc = 10013;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2;
			w = TRN_GEAR_SIZE_LB;
			h = (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3);
		};

		class BUT_INV_Primary_Muzzle : RscInvButton
		{
			idc = 10014;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Primary_Side : RscInvButton
		{
			idc = 10015;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (6 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (1 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Primary_Top : RscInvButton
		{
			idc = 10016;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (7 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Primary_Magazine : RscInvButton
		{
			idc = 10017;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (8 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (3 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Primary_Grenade : RscInvButton
		{
			idc = 10018;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (9 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (4 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Secondary : RscInvButton
		{
			idc = 10019;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (2 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = TRN_GEAR_SIZE_LB;
			h = (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3);
		};

		class BUT_INV_Secondary_Muzzle : RscInvButton
		{
			idc = 10020;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Secondary_Side : RscInvButton
		{
			idc = 10021;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (6 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (1 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Secondary_Top : RscInvButton
		{
			idc = 10022;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (7 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Secondary_Magazine : RscInvButton
		{
			idc = 10023;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (8 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (3 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Secondary_Grenade : RscInvButton
		{
			idc = 10024;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (9 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (4 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Handgun : RscInvButton
		{
			idc = 10025;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (4 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = TRN_GEAR_SIZE_LB;
			h = (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3);
		};

		class BUT_INV_Handgun_Muzzle : RscInvButton
		{
			idc = 10026;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Handgun_Side : RscInvButton
		{
			idc = 10027;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (6 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (1 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Handgun_Top : RscInvButton
		{
			idc = 10028;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (7 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Handgun_Magazine : RscInvButton
		{
			idc = 10029;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (8 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (3 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_INV_Handgun_Grenade : RscInvButton
		{
			idc = 10030;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (9 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (4 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BUT_MAIN_Close : RscSymButton
		{
			idc = 10050;

			x = (-0.30 + (2 * 0.07) + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X)) + ((((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * TRN_GEAR_SIZE_LB) + (2 * TRN_GEAR_SPACE_X)) - 1 * (0.04 / TRN_RATIO);
			y = -0.2 - 0.04 - TRN_GEAR_SPACE_Y;
			w = (0.04 / TRN_RATIO);
			h = 0.04;

			action = "hint 'CLOSE'";

			onMouseEnter = "((findDisplay 10000) displayCtrl 12050) ctrlSetBackgroundColor [1,1,1,0.5];"
			onMouseExit = "((findDisplay 10000) displayCtrl 12050) ctrlSetBackgroundColor [1,1,1,0];"
		};

		class BUT_MAIN_Back : RscSymButton
		{
			idc = 10051;

			x = (-0.30 + (2 * 0.07) + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X)) + ((((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * TRN_GEAR_SIZE_LB) + (2 * TRN_GEAR_SPACE_X)) - 2 * (0.04 / TRN_RATIO);
			y = -0.2 - 0.04 - TRN_GEAR_SPACE_Y;
			w = (0.04 / TRN_RATIO);
			h = 0.04;

			action = "hint 'BACK'";

			onMouseEnter = "((findDisplay 10000) displayCtrl 12051) ctrlSetBackgroundColor [1,1,1,0.5];"
			onMouseExit = "((findDisplay 10000) displayCtrl 12051) ctrlSetBackgroundColor [1,1,1,0];"
		};

		class BUT_MAIN_Help : RscSymButton
		{
			idc = 10052;

			x = (-0.30 + (2 * 0.07) + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X)) + ((((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * TRN_GEAR_SIZE_LB) + (2 * TRN_GEAR_SPACE_X)) - 3 * (0.04 / TRN_RATIO);
			y = -0.2 - 0.04 - TRN_GEAR_SPACE_Y;
			w = (0.04 / TRN_RATIO);
			h = 0.04;

			action = "hint 'HELP'";

			onMouseEnter = "((findDisplay 10000) displayCtrl 12052) ctrlSetBackgroundColor [1,1,1,0.5];"
			onMouseExit = "((findDisplay 10000) displayCtrl 12052) ctrlSetBackgroundColor [1,1,1,0];"
		};


		/////ACTIVE Backgrounds/////

		class BG_INV_Uniform : RscInvText
		{	
			idc = 11001;
	
			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2;
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BG_INV_Vest : RscInvText
		{
			idc = 11002;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 1 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BG_INV_Backpack : RscInvText
		{
			idc = 11003;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 2 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BG_INV_Helmet : RscInvText
		{
			idc = 11004;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BG_INV_Goggles : RscInvText
		{
			idc = 11005;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 4 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BG_INV_NV : RscInvText
		{
			idc = 11006;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 5 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BG_INV_Binoculars : RscInvText
		{
			idc = 11007;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 6 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BG_INV_Map : RscInvText
		{
			idc = 11008;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 7 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BG_INV_GPS : RscInvText
		{
			idc = 11009;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BG_INV_Radio : RscInvText
		{
			idc = 11010;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 9 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BG_INV_Compass : RscInvText
		{
			idc = 11011;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 10 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};

		class BG_INV_Watch : RscInvText
		{
			idc = 11012;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 11 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);
		};
		
		class BG_INV_Primary : RscInvText
		{
			idc = 11013;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2;
			w = TRN_GEAR_SIZE_LB;
			h = (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3);
		};

		class BG_INV_Primary_Muzzle : RscInvText
		{
			idc = 11014;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Primary_Side : RscInvText
		{
			idc = 11015;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (6 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (1 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Primary_Top : RscInvText
		{
			idc = 11016;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (7 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Primary_Magazine : RscInvText
		{
			idc = 11017;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (8 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (3 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Primary_Grenade : RscInvText
		{
			idc = 11018;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (9 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (4 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Secondary : RscInvText
		{
			idc = 11019;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (2 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = TRN_GEAR_SIZE_LB;
			h = (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3);
		};

		class BG_INV_Secondary_Muzzle : RscInvText
		{
			idc = 11020;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Secondary_Side : RscInvText
		{
			idc = 11021;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (6 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (1 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Secondary_Top : RscInvText
		{
			idc = 11022;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (7 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Secondary_Magazine : RscInvText
		{
			idc = 11023;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (8 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (3 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Secondary_Grenade : RscInvText
		{
			idc = 11024;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (9 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (4 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Handgun : RscInvText
		{
			idc = 11025;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (4 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = TRN_GEAR_SIZE_LB;
			h = (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3);
		};

		class BG_INV_Handgun_Muzzle : RscInvText
		{
			idc = 11026;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Handgun_Side : RscInvText
		{
			idc = 11027;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (6 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (1 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Handgun_Top : RscInvText
		{
			idc = 11028;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (7 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Handgun_Magazine : RscInvText
		{
			idc = 11029;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (8 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (3 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Handgun_Grenade : RscInvText
		{
			idc = 11030;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (9 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (4 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;
		};

		class BG_INV_Main :RscInvText
		{
			idc = 11031;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (4 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2;
			w = TRN_GEAR_SIZE_LB;
			h = (8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);
		};

		class BG_GEAR_Filter1_1 : RscText
		{
			idc = 11032;

			x = -0.30;
			y = -0.2;
			w = 0.07;
			h = 0.07 * TRN_RATIO;

			colorBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
		};


		class BG_GEAR_Filter1_2 : RscText
		{
			idc = 11033;

			x = -0.30;
			y = -0.2 + 1 * (0.07 + 0.025);
			w = 0.07;
			h = 0.07 * TRN_RATIO;

			colorBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
		};


		class BG_GEAR_Filter1_3 : RscText
		{
			idc = 11034;

			x = -0.30;
			y = -0.2 + 2 * (0.07 + 0.025) + 0.005;
			w = 0.07;
			h = 0.07 * TRN_RATIO;

			colorBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
		};


		class BG_GEAR_Filter1_4 : RscText
		{
			idc = 11035;

			x = -0.30;
			y = -0.2 + 3 * (0.07 + 0.025) + 0.005;
			w = 0.07;
			h = 0.07 * TRN_RATIO;

			colorBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
		};

		class BG_GEAR_Filter2_1 : RscText
		{
			idc = 11036;

			x = -0.30;
			y = -0.2;
			w = 0.07;
			h = 0.07 * TRN_RATIO;

			colorBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
		};


		class BG_GEAR_Filter2_2 : RscText
		{
			idc = 11037;

			x = -0.30;
			y = -0.2 + 1 * (0.07 + 0.025);
			w = 0.07;
			h = 0.07 * TRN_RATIO;

			colorBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
		};


		class BG_GEAR_Filter2_3 : RscText
		{
			idc = 11038;

			x = -0.30;
			y = -0.2 + 2 * (0.07 + 0.025) + 0.005;
			w = 0.07;
			h = 0.07 * TRN_RATIO;

			colorBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
		};


		class BG_GEAR_Filter2_4 : RscText
		{
			idc = 11039;

			x = -0.30;
			y = -0.2 + 3 * (0.07 + 0.025) + 0.005;
			w = 0.07;
			h = 0.07 * TRN_RATIO;

			colorBackground[] = TRN_GEAR_COLOR_BG_TRANSPARENT;
		};


		/////ACTIVE PICTURES/////

		class PIC_INV_Uniform : RscPictureKeepAspect
		{
			idc = 12001;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2;
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_uniform_gs.paa";
		};

		class PIC_INV_Vest : RscPictureKeepAspect
		{
			idc = 12002;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 1 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_vest_gs.paa";
		};

		class PIC_INV_Backpack : RscPictureKeepAspect
		{
			idc = 12003;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 2 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_backpack_gs.paa";
		};

		class PIC_INV_Helmet : RscPictureKeepAspect
		{
			idc = 12004;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_helmet_gs.paa";
		};

		class PIC_INV_Goggles : RscPictureKeepAspect
		{
			idc = 12005;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 4 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_glasses_gs.paa";
		};

		class PIC_INV_NV : RscPictureKeepAspect
		{
			idc = 12006;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 5 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_nvg_gs.paa";
		};

		class PIC_INV_Binoculars : RscPictureKeepAspect
		{
			idc = 12007;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 6 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_binocular_gs.paa";
		};

		class PIC_INV_Map : RscPictureKeepAspect
		{
			idc = 12008;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 7 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_Map_gs.paa";
		};

		class PIC_INV_GPS : RscPictureKeepAspect
		{
			idc = 12009;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_gps_gs.paa";
		};

		class PIC_INV_Radio : RscPictureKeepAspect
		{
			idc = 12010;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 9 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_radio_gs.paa";
		};

		class PIC_INV_Compass : RscPictureKeepAspect
		{
			idc = 12011;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 10 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_compass_gs.paa";
		};

		class PIC_INV_Watch : RscPictureKeepAspect
		{
			idc = 12012;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 11 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y);
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = ((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_watch_gs.paa";
		};

		class PIC_INV_Primary : RscPictureKeepAspect
		{
			idc = 12013;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2;
			w = TRN_GEAR_SIZE_LB;
			h = (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_primary_gs.paa";
		};

		class PIC_INV_Primary_Muzzle : RscPictureKeepAspect
		{
			idc = 12014;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_muzzle_gs.paa";
		};

		class PIC_INV_Primary_Side : RscPictureKeepAspect
		{
			idc = 12015;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (6 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (1 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_side_gs.paa";
		};

		class PIC_INV_Primary_Top : RscPictureKeepAspect
		{
			idc = 12016;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (7 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_top_gs.paa";
		};

		class PIC_INV_Primary_Magazine : RscPictureKeepAspect
		{
			idc = 12017;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (8 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (3 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_magazine_gs.paa";
		};

		class PIC_INV_Primary_Grenade : RscPictureKeepAspect
		{
			idc = 12018;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (9 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (4 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "";
		};

		class PIC_INV_Secondary : RscPictureKeepAspect
		{
			idc = 12019;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (2 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (1 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = TRN_GEAR_SIZE_LB;
			h = (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_secondary_gs.paa";
		};

		class PIC_INV_Secondary_Muzzle : RscPictureKeepAspect
		{
			idc = 12020;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_muzzle_gs.paa";
		};

		class PIC_INV_Secondary_Side : RscPictureKeepAspect
		{
			idc = 12021;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (6 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (1 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_side_gs.paa";
		};

		class PIC_INV_Secondary_Top : RscPictureKeepAspect
		{
			idc = 12022;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (7 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_top_gs.paa";
		};

		class PIC_INV_Secondary_Magazine : RscPictureKeepAspect
		{
			idc = 12023;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (8 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (3 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_magazine_gs.paa";
		};

		class PIC_INV_Secondary_Grenade : RscPictureKeepAspect
		{
			idc = 12024;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (9 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (4 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (3 * TRN_GEAR_SPACE_Y) + (1 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "";
		};

		class PIC_INV_Handgun : RscPictureKeepAspect
		{
			idc = 12025;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (4 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (2 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = TRN_GEAR_SIZE_LB;
			h = (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3);

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_hgun_gs.paa";
		};

		class PIC_INV_Handgun_Muzzle : RscPictureKeepAspect
		{
			idc = 12026;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_muzzle_gs.paa";
		};

		class PIC_INV_Handgun_Side : RscPictureKeepAspect
		{
			idc = 12027;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (6 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (1 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_side_gs.paa";
		};

		class PIC_INV_Handgun_Top : RscPictureKeepAspect
		{
			idc = 12028;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (7 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_top_gs.paa";
		};

		class PIC_INV_Handgun_Magazine : RscPictureKeepAspect
		{
			idc = 12029;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (8 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (3 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_magazine_gs.paa";
		};

		class PIC_INV_Handgun_Grenade : RscPictureKeepAspect
		{
			idc = 12030;

			x = -0.30 + 0.07 + 0.07 + 2 * TRN_GEAR_SIZE_LB + (9 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (4 * ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5));
			y = -0.2 + (5 * TRN_GEAR_SPACE_Y) + (2 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) + (3 * (((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) - (3 * (((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO)) - (5 * TRN_GEAR_SPACE_Y)) / 3));
			w = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5);
			h = ((TRN_GEAR_SIZE_LB - (4 * TRN_GEAR_SPACE_X))/ 5) * TRN_RATIO;

			text = "";
		};

		class PIC_INV_Description_Picture : RscPictureKeepAspect
		{
			idc = 12031;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (4 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);
			w = ((3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) / TRN_RATIO;
			h = ((3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);

			text = "";
		};


		/////BUTTON BACKGROUNDS/////

		class SYM_MAIN_Close : RscText
		{
			idc = 12050;

			x = (-0.30 + (2 * 0.07) + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X)) + ((((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * TRN_GEAR_SIZE_LB) + (2 * TRN_GEAR_SPACE_X)) - 1 * (0.04 / TRN_RATIO);
			y = -0.2 - 0.04 - TRN_GEAR_SPACE_Y;
			w = (0.04 / TRN_RATIO);
			h = 0.04;

			text = "X";
		};

		class SYM_MAIN_Back : RscText
		{
			idc = 12051;

			x = (-0.30 + (2 * 0.07) + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X)) + ((((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * TRN_GEAR_SIZE_LB) + (2 * TRN_GEAR_SPACE_X)) - 2 * (0.04 / TRN_RATIO);
			y = -0.2 - 0.04 - TRN_GEAR_SPACE_Y;
			w = (0.04 / TRN_RATIO);
			h = 0.04;

			text = "<";
		};

		class SYM_MAIN_Help : RscText
		{
			idc = 12052;

			x = (-0.30 + (2 * 0.07) + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X)) + ((((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * TRN_GEAR_SIZE_LB) + (2 * TRN_GEAR_SPACE_X)) - 3 * (0.04 / TRN_RATIO);
			y = -0.2 - 0.04 - TRN_GEAR_SPACE_Y;
			w = (0.04 / TRN_RATIO);
			h = 0.04;

			text = "?";
		};




		/////ACTIVE LISTBOX/////

		class LNB_INV_Main : RscInvListNBox
		{
			idc = 13001;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (4 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2;
			w = TRN_GEAR_SIZE_LB;
			h = (8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);
		};

		class LNB_Shop : RscInvListNBox
		{
			idc = 13002;

			x = -0.30 + 0.07 + 0.07 + (2 * TRN_GEAR_SPACE_X);
			y = -0.2;
			w = TRN_GEAR_SIZE_LB;
			h = (8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);
		};

		class LNB_Shop_Magazine : RscInvListNBox
		{
			idc = 13003;

			x = -0.30 + 0.07 + 0.07 + (2 * TRN_GEAR_SPACE_X);
			y = -0.2 + TRN_GEAR_SPACE_Y + ((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);
			w = TRN_GEAR_SIZE_LB;
			h = ((4 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);
		};


		/////ACTIVE TEXTFIELDS/////

		class TXT_INV_Description : RscStructuredText
		{
			idc = 14001;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (((3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) / TRN_RATIO);
			y = -0.2 + 0.04 + (1 * TRN_GEAR_SPACE_Y) + (8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);
			w = (2 * TRN_GEAR_SIZE_LB) - (((3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) / TRN_RATIO);
			h = -0.04 + ((3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);

			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.77)";

			colorBackground[] = TRN_GEAR_COLOR_BG;
		};

		class TXT_INV_Description_Header : RscText
		{
			idc = 14002;
			style = 16;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (5 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (((3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) / TRN_RATIO);
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);
			w = (2 * TRN_GEAR_SIZE_LB) - (((3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) / TRN_RATIO);
			h = 0.04;

			colorBackground[] = TRN_GEAR_COLOR_BG_HEADER;
		};


		/////ACTIVE PROGRESSBARS/////

		class BAR_INV_Load_Uniform : RscProgress
		{
			idc = 15001;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 1 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y) - TRN_GEAR_SPACE_Y;
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = TRN_GEAR_SPACE_Y;

			colorBar[] = TRN_GEAR_COLOR_BG_HEADER;
			texture = rsc\images\white.paa;
		};

		class BAR_INV_Load_Vest : RscProgress
		{
			idc = 15002;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 2 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y) - TRN_GEAR_SPACE_Y;
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = TRN_GEAR_SPACE_Y;

			colorBar[] = TRN_GEAR_COLOR_BG_HEADER;
			texture = rsc\images\white.paa;
		};

		class BAR_INV_Load_Backpack : RscProgress
		{
			idc = 15003;

			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 + 3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y) - TRN_GEAR_SPACE_Y;
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			h = TRN_GEAR_SPACE_Y;

			colorBar[] = TRN_GEAR_COLOR_BG_HEADER;
			texture = rsc\images\white.paa;
		};

		/////ACTIVE TREES/////

		class TR_FILTER_Tree : RscTree
		{
			idc = 16001;

			x = -0.35;
			y = -0.2;
			w = 0.07 + 0.07 + (1 * TRN_GEAR_SPACE_X) + 0.07;
			h = 1.4;

			rowHeight = 0.04;

			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.77);

			onTreeSelChanged  = "[2, _this] call TRN_client_gearShopEventhandler";
		};
	};


	class controlsBackground 
	{
		class BG_Main : RscText
		{
			x = safezoneX;
			y = safezoneY;
			w = safezoneW;
			h = safezoneH;

			colorBackground[] = TRN_GEAR_COLOR_BG_MAIN;
		};

		class BG_Shop : RscText
		{
			x = -0.30 + 0.07 + 0.07 + (2 * TRN_GEAR_SPACE_X);
			y = -0.2;
			w = TRN_GEAR_SIZE_LB;
			h = (8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);

			colorBackground[] = TRN_GEAR_COLOR_BG;
		};

		class BG_Shop_Magazine : RscText
		{
			x = -0.30 + 0.07 + 0.07 + (2 * TRN_GEAR_SPACE_X);
			y = -0.2 + TRN_GEAR_SPACE_Y + ((8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);
			w = TRN_GEAR_SIZE_LB;
			h = ((4 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);

			colorBackground[] = TRN_GEAR_COLOR_BG;
		};

		class BG_Filter : RscText
		{
			x = -0.35;
			y = -0.2;
			w = 0.07 + 0.07 + (1 * TRN_GEAR_SPACE_X) + 0.05;
			h = 1.4;

			colorBackground[] = TRN_GEAR_COLOR_BG;
		};

		class BG_INV_Description_Picture : RscText
		{
			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (4 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (1 * TRN_GEAR_SPACE_Y) + (8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);
			w = ((3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) / TRN_RATIO;
			h = ((3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);

			colorBackground[] = TRN_GEAR_COLOR_BG;
		};

		class BG_INV_Buttons : RscText
		{
			x = -0.30 + 0.07 + 0.07 + TRN_GEAR_SIZE_LB + (4 * TRN_GEAR_SPACE_X) + (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO);
			y = -0.2 + (2 * TRN_GEAR_SPACE_Y) + ((3 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y) + (8 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);
			w = 2 * TRN_GEAR_SIZE_LB + TRN_GEAR_SPACE_X;
			h = ((1 * (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) + TRN_GEAR_SPACE_Y)) - TRN_GEAR_SPACE_Y);

			colorBackground[] = TRN_GEAR_COLOR_BG;
		};

		class BG_Shop_Header : RscText
		{
			style = 2;

			x = -0.35;
			y = -0.2 - 0.04 - TRN_GEAR_SPACE_Y;
			w = (2 * 0.07) + TRN_GEAR_SIZE_LB + (2 * TRN_GEAR_SPACE_X) + 0.05;
			h = 0.04;

			text = "GEAR SHOP";

			colorBackground[] = TRN_GEAR_COLOR_BG_HEADER;
		};

		class BG_INV_Header : RscText
		{
			style = 2;

			x = -0.30 + (2 * 0.07) + TRN_GEAR_SIZE_LB + (3 * TRN_GEAR_SPACE_X);
			y = -0.2 - 0.04 - TRN_GEAR_SPACE_Y;
			w = (((1.4 - (11 * TRN_GEAR_SPACE_Y)) / 12) / TRN_RATIO) + (2 * TRN_GEAR_SIZE_LB) + (2 * TRN_GEAR_SPACE_X);
			h = 0.04;

			text = "INVENTORY";

			colorBackground[] = TRN_GEAR_COLOR_BG_HEADER;
		};
	};
};