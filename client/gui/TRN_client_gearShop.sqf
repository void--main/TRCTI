TR_gearShop_default = [                                                     //default pictures  
    "",                                                                     //empty                 0
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_uniform_gs.paa",          //uniform               1
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_vest_gs.paa",             //vest                  2
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_backpack_gs.paa",         //backpack              3
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_helmet_gs.paa",           //helmet                4
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_glasses_gs.paa",          //glasses               5
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_nvg_gs.paa",              //nv                    6
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_binocular_gs.paa",        //binoculars            7
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_map_gs.paa",              //map                   8
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_gps_gs.paa",              //gps                   9
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_radio_gs.paa",            //radio                 10
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_compass_gs.paa",          //compass               11
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_watch_gs.paa",            //Watch                 12
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_primary_gs.paa",          //Primary Weapon        13
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_muzzle_gs.paa",           //Primary Muzzle        14
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_side_gs.paa",             //Primary Side          15
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_top_gs.paa",              //Primary Top           16
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_magazine_gs.paa",         //Primary Magazine      17
    "",                                                                     //Primary Grenade       18
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_secondary_gs.paa",        //Secondary Weapon      19
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_muzzle_gs.paa",           //Secondary Muzzle      20
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_side_gs.paa",             //Secondary Side        21
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_top_gs.paa",              //Secondary Top         22
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_magazine_gs.paa",         //Secondary Magazine    23
    "",                                                                     //Secondary Grenade     24
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_hgun_gs.paa",             //Handgun Weapon        25
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_muzzle_gs.paa",           //Handgun Muzzle        26
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_side_gs.paa",             //Handgun Side          27
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_top_gs.paa",              //Handgun Top           28
    "\a3\ui_f\data\gui\Rsc\RscDisplayGear\ui_gear_magazine_gs.paa",         //Handgun Magazine      29
    ""                                                                      //Handgun Grenade       30
];


TRN_client_createGearShopDLG = {
    disableSerialization;

    [1] call TRN_client_saveGear;

    createDialog "TRN_dlg_gearShop";

    [] spawn TRN_client_loadGearShop;
};


TRN_client_loadGearShop = {
    disableSerialization;

    TR_gearShop_Container = TR_gear_Container;
    TR_gearShop_assignedItems = TR_gear_assignedItems;
    TR_gearShop_binoculars = TR_gear_binoculars;
    TR_gearShop_primaryWeapon = TR_gear_primaryWeapon;
    TR_gearShop_secondaryWeapon = TR_gear_secondaryWeapon;
    TR_gearShop_handgunWeapon = TR_gear_handgunWeapon;
    TR_gearShop_uniformItems = TR_gear_uniformItems;
    TR_gearShop_vestItems = TR_gear_vestItems;
    TR_gearShop_backpackItems = TR_gear_backpackItems;
    TR_gearShop_uniformMagazines = TR_gear_uniformMagazines;
    TR_gearShop_vestMagazines = TR_gear_vestMagazines;
    TR_gearShop_backpackMagazines = TR_gear_backpackMagazines;
    TR_gearShop_currentItems = ["", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "" , ["", 0], ["", 0], "", "", "", "", ["", 0], ["", 0], "", "", "", "", ["", 0], ["", 0]];

    0 spawn TRN_client_refreshGearShopInvPic;
    0 spawn TRN_client_refreshGearShopInvLNB;
    [0, 0] spawn TRN_client_refreshGearShopInvBar;
    [] spawn TRN_client_setGearShopFilter;
};


TRN_client_setGearShopFilter = {
    disableSerialization;
    private ["_ctrl", "_children", "_config", "_path", "_i", "_name", "_index", "_count", "_id"];

    _ctrl = (findDisplay 10000) displayCtrl 16001;

    _children = [(missionConfigFile >> "GearShop"), 2, true] call BIS_fnc_returnChildren;

    {
        _config = [_x] call BIS_fnc_configPath;

        if (!("Contents" in _config)) then
        {
            _name = getText (_x >> "name");

            _index = (count _config) -4;

            _path = [];
            _i = 0;

            while {_i <= _index} do
            {
                _count = (_ctrl tvCount _path) -1;

                _path set [_i, _count];

                _i = _i +1; 
            };

            _id = _ctrl tvAdd [_path, _name];

            _path set [(count _path), _id];

            _ctrl tvSetData [_path, str _config];
        };

    }forEach _children;
};


TRN_client_refreshGearShopInvPic = {
    disableSerialization;
    private ["_ctrl", "_config", "_text"];

    _ctrl = (findDisplay 10000) displayCtrl (_this + 12000);
    _text = "";

    switch (_this) do
    {
        case 0: //All
        {
            1 spawn TRN_client_refreshGearShopInvPic;
            2 spawn TRN_client_refreshGearShopInvPic;
            3 spawn TRN_client_refreshGearShopInvPic;
            4 spawn TRN_client_refreshGearShopInvPic;
            5 spawn TRN_client_refreshGearShopInvPic;
            6 spawn TRN_client_refreshGearShopInvPic;
            7 spawn TRN_client_refreshGearShopInvPic;
            8 spawn TRN_client_refreshGearShopInvPic;
            9 spawn TRN_client_refreshGearShopInvPic;
            10 spawn TRN_client_refreshGearShopInvPic;
            11 spawn TRN_client_refreshGearShopInvPic;
            12 spawn TRN_client_refreshGearShopInvPic;
            13 spawn TRN_client_refreshGearShopInvPic;
            19 spawn TRN_client_refreshGearShopInvPic;
            25 spawn TRN_client_refreshGearShopInvPic;
        };

        case 1: //Uniform
        {
            _config = (TR_gearShop_Container select 0) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_Container select 0)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_Container select 0) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 2: //Vest
        {
            _config = (TR_gearShop_Container select 1) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_Container select 1)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_Container select 1) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 3: //Backpack
        {
            _config = (TR_gearShop_Container select 2) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_Container select 2)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_Container select 2) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 4: //Helmet
        {
            _config = (TR_gearShop_assignedItems select 5) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_assignedItems select 5)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_assignedItems select 5) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 5: //Goggles
        {
            _config = (TR_gearShop_assignedItems select 6) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_assignedItems select 6)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_assignedItems select 6) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 6: //NV
        {
            _config = (TR_gearShop_assignedItems select 7) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_assignedItems select 7)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_assignedItems select 7) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 7: //Binoculars
        {
            _config = TR_gearShop_binoculars call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, TR_gearShop_binoculars];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> TR_gearShop_binoculars >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 8: //Map
        {
            _config = (TR_gearShop_assignedItems select 0) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_assignedItems select 0)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_assignedItems select 0) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 9: //GPS
        {
            _config = (TR_gearShop_assignedItems select 1) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_assignedItems select 1)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_assignedItems select 1) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 10: //Radio
        {
            _config = (TR_gearShop_assignedItems select 2) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_assignedItems select 2)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_assignedItems select 2) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 11: //Compass
        {
            _config = (TR_gearShop_assignedItems select 3) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_assignedItems select 3)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_assignedItems select 3) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 12: //Watch
        {
            _config = (TR_gearShop_assignedItems select 4) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_assignedItems select 4)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_assignedItems select 4) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 13: //Primary Weapon
        {
            14 spawn TRN_client_refreshGearShopInvPic;
            15 spawn TRN_client_refreshGearShopInvPic;
            16 spawn TRN_client_refreshGearShopInvPic;
            17 spawn TRN_client_refreshGearShopInvPic;
            18 spawn TRN_client_refreshGearShopInvPic;

            _config = (TR_gearShop_primaryWeapon select 0) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_primaryWeapon select 0)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_primaryWeapon select 0) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 14: //Primary Muzzle
        {
            _config = (TR_gearShop_primaryWeapon select 1) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_primaryWeapon select 1)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_primaryWeapon select 1) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 15: //Primary Side
        {
            _config = (TR_gearShop_primaryWeapon select 2) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_primaryWeapon select 2)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_primaryWeapon select 2) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 16: //Primary Top
        {
            _config = (TR_gearShop_primaryWeapon select 3) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_primaryWeapon select 3)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_primaryWeapon select 3) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 17: //Primary Magazine
        {
            _config = ((TR_gearShop_primaryWeapon select 4) select 0) call TRN_common_getConfig;

            (TR_gearShop_currentItems select _this) set [0, ((TR_gearShop_primaryWeapon select 4) select 0)];
            (TR_gearShop_currentItems select _this) set [1, ((TR_gearShop_primaryWeapon select 4) select 1)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> ((TR_gearShop_primaryWeapon select 4) select 0) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 18: //Primary Grenade
        {
            _config = ((TR_gearShop_primaryWeapon select 5) select 0) call TRN_common_getConfig;

            (TR_gearShop_currentItems select _this) set [0, ((TR_gearShop_primaryWeapon select 5) select 0)];
            (TR_gearShop_currentItems select _this) set [1, ((TR_gearShop_primaryWeapon select 5) select 1)];


            if (_config != "") then
            {
                _text = getText (configfile >> _config >> ((TR_gearShop_primaryWeapon select 5) select 0) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 19: //Secondary Weapon
        {
            20 spawn TRN_client_refreshGearShopInvPic;
            21 spawn TRN_client_refreshGearShopInvPic;
            22 spawn TRN_client_refreshGearShopInvPic;
            23 spawn TRN_client_refreshGearShopInvPic;
            24 spawn TRN_client_refreshGearShopInvPic;

            _config = (TR_gearShop_secondaryWeapon select 0) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_secondaryWeapon select 0)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_secondaryWeapon select 0) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 20: //Secondary Muzzle
        {
            _config = (TR_gearShop_secondaryWeapon select 1) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_secondaryWeapon select 1)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_secondaryWeapon select 1) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 21: //Secondary Side
        {
            _config = (TR_gearShop_secondaryWeapon select 2) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_secondaryWeapon select 2)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_secondaryWeapon select 2) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 22: //Secondary Top
        {
            _config = (TR_gearShop_secondaryWeapon select 3) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_secondaryWeapon select 3)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_secondaryWeapon select 3) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 23: //Secondary Magazine
        {
            _config = ((TR_gearShop_secondaryWeapon select 4) select 0) call TRN_common_getConfig;

            (TR_gearShop_currentItems select _this) set [0, ((TR_gearShop_secondaryWeapon select 4) select 0)];
            (TR_gearShop_currentItems select _this) set [1, ((TR_gearShop_secondaryWeapon select 4) select 1)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> ((TR_gearShop_secondaryWeapon select 4) select 0) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 24: //Secondary Grenade
        {
            _config = ((TR_gearShop_secondaryWeapon select 5) select 0) call TRN_common_getConfig;

            (TR_gearShop_currentItems select _this) set [0, ((TR_gearShop_secondaryWeapon select 5) select 0)];
            (TR_gearShop_currentItems select _this) set [1, ((TR_gearShop_secondaryWeapon select 5) select 1)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> ((TR_gearShop_secondaryWeapon select 5) select 0) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 25: //Handgun Weapon
        {
            26 spawn TRN_client_refreshGearShopInvPic;
            27 spawn TRN_client_refreshGearShopInvPic;
            28 spawn TRN_client_refreshGearShopInvPic;
            29 spawn TRN_client_refreshGearShopInvPic;
            30 spawn TRN_client_refreshGearShopInvPic;


            _config = (TR_gearShop_handgunWeapon select 0) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_handgunWeapon select 0)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_handgunWeapon select 0) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 26: //Handgun Muzzle
        {
            _config = (TR_gearShop_handgunWeapon select 1) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_handgunWeapon select 1)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_handgunWeapon select 1) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 27: //Handgun Side
        {
            _config = (TR_gearShop_handgunWeapon select 2) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_handgunWeapon select 2)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_handgunWeapon select 2) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 28: //Handgun Top
        {
            _config = (TR_gearShop_handgunWeapon select 3) call TRN_common_getConfig;

            TR_gearShop_currentItems set [_this, (TR_gearShop_handgunWeapon select 3)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> (TR_gearShop_handgunWeapon select 3) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 29: //Handgun Magazine
        {
            _config = ((TR_gearShop_handgunWeapon select 4) select 0) call TRN_common_getConfig;

            (TR_gearShop_currentItems select _this) set [0, ((TR_gearShop_handgunWeapon select 4) select 0)];
            (TR_gearShop_currentItems select _this) set [1, ((TR_gearShop_handgunWeapon select 4) select 1)];

            if (_config != "") then
            {
                _text = getText (configfile >> _config >> ((TR_gearShop_handgunWeapon select 4) select 0) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };

        case 30: //Handgun Grenade
        {
            _config = ((TR_gearShop_handgunWeapon select 5) select 0) call TRN_common_getConfig;

            (TR_gearShop_currentItems select _this) set [0, ((TR_gearShop_handgunWeapon select 5) select 0)];
            (TR_gearShop_currentItems select _this) set [1, ((TR_gearShop_handgunWeapon select 5) select 1)];


            if (_config != "") then
            {
                _text = getText (configfile >> _config >> ((TR_gearShop_handgunWeapon select 5) select 0) >> "picture");
            }
            else
            {
                _text = TR_gearShop_default select _this;
            };
        };
    };


    if (_this != 0) then
    {
        _ctrl ctrlSetText _text;
    };
};


TRN_client_refreshGearShopInvBar = {
    disableSerialization;
    private ["_ctrl", "_load"];

    switch (_this select 0) do
    {
        case 0:
        {
            [1, _this select 1] spawn TRN_client_refreshGearShopInvBar;
            [2, _this select 1] spawn TRN_client_refreshGearShopInvBar;
            [3, _this select 1] spawn TRN_client_refreshGearShopInvBar;
        };

        case 1: //Uniform
        {
            _ctrl = (findDisplay 10000) displayCtrl 15001;
            _load = (loadUniform player) + (_this select 1);
        };

        case 2: //Vest
        {
            _ctrl = (findDisplay 10000) displayCtrl 15002;
            _load = (loadVest player) + (_this select 1);
        };

        case 3: //Backpack
        {
            _ctrl = (findDisplay 10000) displayCtrl 15003;
            _load = (loadBackpack player) + (_this select 1);
        };
    };

    if ((_this select 0) != 0) then
    {
        _ctrl progressSetPosition _load;
    };
};


TRN_client_gearShopEventhandler = {
    disableSerialization;
    private ["_ctrl", "_idc", "_path", "_data"];

    _ctrl = (_this select 1) select 0;
    _idc = ctrlIDC _ctrl;

    switch (_this select 0) do
    {
        case 0: //Inventory Button clicked
        {
            switch ((_this select 1) select 1) do
            {
                case 0: //Left Mousebutton
                {
                    if ((_idc >= 10001) && (_idc <= 10003)) then
                    {
                        (_idc - 10000) spawn TRN_client_refreshGearShopInvLNB;
                    };

                    [0, (_idc - 10000)] spawn TRN_client_refreshGearShopDescription;
                };

                case 1: //Right Mousebutton
                {

                };
            };
        };

        case 1: //LB Left MouseButton clicked
        {
            [1, (_this select 1)] spawn TRN_client_refreshGearShopDescription;
        };

        case 2: //Filter Selection Changed
        {
            _path = tvCurSel _idc;

            _data = call compile (_ctrl tvData _path);

            _data call TRN_client_refreshGearShopLNB
        };
    };
};


TRN_client_refreshGearShopLNB = {
    disableSerialization;
    private ["_ctrlMain", "_ctrlMag", "_data", "_config", "_children", "_end", "_index", "_hub", "_text", "_price", "_pic"];

    _ctrlMain = (findDisplay 10000) displayCtrl 13002;
    _ctrlMag = (findDisplay 10000) displayCtrl 13003;

    lnbClear _ctrlMain;
    lnbClear _ctrlMag;

    {
        if (_x == "missionConfigFile") then
        {
            _data = missionConfigFile;
        }
        else
        {
            _data = _data >> _x;
        };

    }forEach _this;

    _children = [_data, 4, true] call BIS_fnc_returnChildren;

    {
        _config = [_x] call BIS_fnc_configPath;

        _end = _config select ((count _config) -1);

        if (("Contents" in _config) && {_end != "Contents"}) then
        {
            _hub = _end call TRN_common_getConfig;

            _text = getText (configfile >> _hub >> _end >> "displayName");
            _price = "$" + (str (getNumber (_x >> "buyprice")));
            _pic = getText (configfile >> _hub >> _end >> "picture");

            _index = _ctrlMain lnbAddRow ["", _text, _price];
            _ctrlMain lnbSetPicture [[_index, 0], _pic];
        };

    }forEach _children;
};


TRN_client_refreshGearShopInvLNB = {
    disableSerialization;
    private ["_ctrlUniform", "_ctrlVest", "_ctrlBackpack", "_ctrlLNB", "_index", "_text", "_count", "_pic", "_return"];

    _ctrlUniform = (findDisplay 10000) displayCtrl 11001;
    _ctrlVest = (findDisplay 10000) displayCtrl 11002;
    _ctrlBackpack = (findDisplay 10000) displayCtrl 11003;
    _ctrlLNB = (findDisplay 10000) displayCtrl 13001;
    _return = false;

    switch (_this) do
    {
        case 0: //check avaiable
        {
            if (!(1 call TRN_client_refreshGearShopInvLNB)) then
            {
                if (!(2 call TRN_client_refreshGearShopInvLNB)) then
                {
                    if (!(3 call TRN_client_refreshGearShopInvLNB)) then
                    {
                        _ctrlUniform ctrlSetBackgroundColor [0.1, 0.1, 0.1, 0.5];
                        _ctrlVest ctrlSetBackgroundColor [0.1, 0.1, 0.1, 0.5];
                        _ctrlBackpack ctrlSetBackgroundColor [0.1, 0.1, 0.1, 0.5];
                        _return = false;
                    };
                };
            };
        };

        case 1:
        {
            if ((TR_gearShop_container) select 0 != "") then
            {
                _ctrlUniform ctrlSetBackgroundColor [0.8, 0.8, 0.8, 0.5];
                _ctrlVest ctrlSetBackgroundColor [0.1, 0.1, 0.1, 0.5];
                _ctrlBackpack ctrlSetBackgroundColor [0.1, 0.1, 0.1, 0.5];

                lnbClear _ctrlLNB;

                {
                    _text = getText (configfile >> "CfgWeapons" >> (_x select 0) >> "displayName");
                    _count = str (_x select 1);
                    _pic = getText (configfile >> "CfgWeapons" >> (_x select 0) >> "picture");

                    _index = _ctrlLNB lnbAddRow ["", _text, _count];
                    _ctrlLNB lnbSetPicture [[_index, 0], _pic];
                    _ctrlLNB lnbSetData [[_index, 1], (_x select 0)];
                    lnbSetValue [13001, [_index, 2], (_x select 1)];
                    
                }forEach TR_gearShop_uniformItems;

                {
                    _text = getText (configfile >> "CfgMagazines" >> ((_x select 0) select 0) >> "displayName");
                    _count = str (_x select 1);
                    _pic = getText (configfile >> "CfgMagazines" >> ((_x select 0) select 0) >> "picture");

                    _index = _ctrlLNB lnbAddRow ["", _text, _count];
                    _ctrlLNB lnbSetPicture [[_index, 0], _pic];
                    _ctrlLNB lnbSetData [[_index, 1], ((_x select 0) select 0)];
                    lnbSetValue [13001, [_index, 1], ((_x select 0) select 1)];
                    lnbSetValue [13001, [_index, 2], (_x select 1)];
                    
                }forEach TR_gearShop_uniformMagazines;

                _return = true;
            }
            else
            {
                _return = false;
            };
        };

        case 2:
        {
            if ((TR_gearShop_container) select 1 != "") then
            {
                _ctrlUniform ctrlSetBackgroundColor [0.1, 0.1, 0.1, 0.5];
                _ctrlVest ctrlSetBackgroundColor [0.8, 0.8, 0.8, 0.5];
                _ctrlBackpack ctrlSetBackgroundColor [0.1, 0.1, 0.1, 0.5];

                lnbClear _ctrlLNB;

                {
                    _text = getText (configfile >> "CfgWeapons" >> (_x select 0) >> "displayName");
                    _count = str (_x select 1);
                    _pic = getText (configfile >> "CfgWeapons" >> (_x select 0) >> "picture");

                    _index = _ctrlLNB lnbAddRow ["", _text, _count];
                    _ctrlLNB lnbSetPicture [[_index, 0], _pic];
                    _ctrlLNB lnbSetData [[_index, 1], (_x select 0)];
                    lnbSetValue [13001, [_index, 2], (_x select 1)];
                    
                }forEach TR_gearShop_vestItems;

                {
                    _text = getText (configfile >> "CfgMagazines" >> ((_x select 0) select 0) >> "displayName");
                    _count = str (_x select 1);
                    _pic = getText (configfile >> "CfgMagazines" >> ((_x select 0) select 0) >> "picture");

                    _index = _ctrlLNB lnbAddRow ["", _text, _count];
                    _ctrlLNB lnbSetPicture [[_index, 0], _pic];
                    _ctrlLNB lnbSetData [[_index, 1], ((_x select 0) select 0)];
                    lnbSetValue [13001, [_index, 1], ((_x select 0) select 1)];
                    lnbSetValue [13001, [_index, 2], (_x select 1)];
                    
                }forEach TR_gearShop_vestMagazines;

                _return = true;
            }
            else
            {
                _return = false;
            };
        };

        case 3:
        {
            if ((TR_gearShop_container) select 2 != "") then
            {
                _ctrlUniform ctrlSetBackgroundColor [0.1, 0.1, 0.1, 0.5];
                _ctrlVest ctrlSetBackgroundColor [0.1, 0.1, 0.1, 0.5];
                _ctrlBackpack ctrlSetBackgroundColor [0.8, 0.8, 0.8, 0.5];

                lnbClear _ctrlLNB;

                {
                    _text = getText (configfile >> "CfgWeapons" >> (_x select 0) >> "displayName");
                    _count = str (_x select 1);
                    _pic = getText (configfile >> "CfgWeapons" >> (_x select 0) >> "picture");

                    _index = _ctrlLNB lnbAddRow ["", _text, _count];
                    _ctrlLNB lnbSetPicture [[_index, 0], _pic];
                    _ctrlLNB lnbSetData [[_index, 1], (_x select 0)];
                    lnbSetValue [13001, [_index, 2], (_x select 1)];
                    
                }forEach TR_gearShop_backpackItems;

                {
                    _text = getText (configfile >> "CfgMagazines" >> ((_x select 0) select 0) >> "displayName");
                    _count = str (_x select 1);
                    _pic = getText (configfile >> "CfgMagazines" >> ((_x select 0) select 0) >> "picture");

                    _index = _ctrlLNB lnbAddRow ["", _text, _count];
                    _ctrlLNB lnbSetPicture [[_index, 0], _pic];
                    _ctrlLNB lnbSetData [[_index, 1], ((_x select 0) select 0)];
                    lnbSetValue [13001, [_index, 1], ((_x select 0) select 1)];
                    lnbSetValue [13001, [_index, 2], (_x select 1)];
                    
                }forEach TR_gearShop_backpackMagazines;

                _return = true
            }
            else
            {
                _return = false;
            };
        };
    };

    _return
};


TRN_client_refreshGearShopDescription = {
    disableSerialization;
    private ["_class", "_parents", "_config", "_count", "_header", "_text"];

    switch (_this select 0) do
    {
        case 0:
        {
            _class = TR_gearShop_currentItems select (_this select 1);

            if ((typeName _class) == "ARRAY") then
            {
                _count = str (_class select 1);
                _class = _class select 0;
            };
        };

        case 1:
        {
            _class = ((_this select 1) select 0) lnbData [((_this select 1) select 1), 1];
            _count = str (lnbValue [13001, [((_this select 1) select 1), 1]]);
        };

        default
        {
            _class = "";
        };
    };

    _config = _class call TRN_common_getConfig;
    _path= (configfile >> _config >> _class);

    _parents = [_path, true] call BIS_fnc_returnParents;

    _header = getText(_path >> "displayname");
    _picture = getText(_path >> "picture");

    switch true do
    {
        case ("ItemCore" in _parents):
        {
            _text = getText(_path >> "descriptionShort");
        };

        case ("Binocular" in _parents):
        {
            _text = getText(_path >> "Library" >> "libTextDesc");
        };

        case (("Pistol_Base_F" in _parents) || ("Rifle_Base_F" in _parents) || ("Launcher_Base_F" in _parents)):
        {
            _text = getText(_path >> "Library" >> "libTextDesc");
        };

        case (_config == "CfgMagazines"):
        {
            _text = (getText(_path >> "descriptionShort")) + "<br/><br/>Remaining Rounds: " + _count;
        };

        default
        {
            _text = "";
        };
    };

    ((findDisplay 10000) displayCtrl 14002) ctrlSetText _header;
    ((findDisplay 10000) displayCtrl 14001) ctrlSetStructuredText (parseText _text);
    ((findDisplay 10000) displayCtrl 12031) ctrlSetText _picture;
};