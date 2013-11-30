//Notifications
//created by -[EUTW]- trnapster
//
//Ressources for bis_fnc_showNotification


class CfgNotifications
{
	class townCaptured
	{
		title = "TOWN CAPTURED";
		iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIcondone_ca.paa";
		description = "We have taken %1";
		color[] = {0,1,0,1};
		duration = 5;
	};


	class townLost
	{
		title = "TOWN LOST";
		iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIconfailed_ca.paa";
		description = "We have lost %1";
		color[] = {1,0,0,1};
		duration = 5;
	};


	class townWarn
	{
		title = "TOWN UNDER ATTACK";
		iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIconcreated_ca.paa";
		description = "%1 is under attack";
		color[] = {1,1,0,1};
		duration = 5;
	};
};