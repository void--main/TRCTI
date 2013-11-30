/*
    Author:
    -[EUTW]- trnapster

    Description:
    Saves Gear to global array

    Parameter(s):
    _this select 0 - callin mode (0 for fired, 1 for complete)
    _this select 1 - fired weapon (if mode = 0)

    Returns:
    NONE
*/

private ["_weapon", "_magArray", "_configArray", "_containerArray", "_array", "_array1", "_array2", "_array3", "_index", "_y"];

switch (_this select 0) do
{
	case 0:
	{
		_weapon = _this select 1;

		_array = magazinesAmmoFull player;

		if (_weapon == primaryWeapon player) then
		{
			_magArray = [["", 0], ["", 0]];

			{
				if ((_x select 3) == 1) then
				{

					if ((_x select 4) == (primaryWeapon player)) then
					{
						TR_gear_primaryWeapon set [4, [_x select 0, _x select 1]];
					}
					else
					{
						_configArray = getArray (configFile >> "CfgWeapons" >> (primaryWeapon player) >> "muzzles");

						if ((_x select 4) == (_configArray select 1)) then
						{
							TR_gear_primaryWeapon set [5, [_x select 0, _x select 1]];
						};
					};
				};

			}forEach (magazinesAmmoFull player);
		}
		else
		{
			if (_weapon == secondaryWeapon player) then
			{
				_magArray = [["", 0], ["", 0]];

				{
					if ((_x select 3) == 4) then
					{

						if ((_x select 4) == (secondaryWeapon player)) then
						{
							TR_gear_secondaryWeapon set [4, [_x select 0, _x select 1]];
						}
						else
						{
							_configArray = getArray (configFile >> "CfgWeapons" >> (secondaryWeapon player) >> "muzzles");

							if ((_x select 4) == (_configArray select 1)) then
							{
								TR_gear_secondaryWeapon set [5, [_x select 0, _x select 1]];
							};
						};
					};

				}forEach (magazinesAmmoFull player);
			}
			else
			{
				if (_weapon == handgunWeapon player) then
				{
					_magArray = [["", 0], ["", 0]];
                    
					{
						if ((_x select 3) == 2) then
						{

							if ((_x select 4) == (handgunWeapon player)) then
							{
								TR_gear_handgunWeapon set [4, [_x select 0, _x select 1]];
							}
							else
							{
								_configArray = getArray (configFile >> "CfgWeapons" >> (handgunWeapon player) >> "muzzles");

								if ((_x select 4) == (_configArray select 1)) then
								{
									TR_gear_handgunWeapon set [5, [_x select 0, _x select 1]];
								};
							};
						};
                        
					}forEach (magazinesAmmoFull player);
				}
				else
				{
					[1] spawn TRN_client_saveGear;
				};
			};
		};
	};
    
	case 1:
	{
		//Container
		TR_gear_Container = [uniform player, vest player, backpack player];


		//Assigned Items
		TR_gear_assignedItems = ["", "", "", "", "", "", "", ""];

		{
			switch (_x) do
			{
				case "ItemMap":
				{
					TR_gear_assignedItems set [0, _x];
				};

				case "ItemGPS":
				{
					TR_gear_assignedItems set [1, _x];
				};

				case "B_UavTerminal":
				{
					TR_gear_assignedItems set [1, _x];
				};

				case "O_UavTerminal":
				{
					TR_gear_assignedItems set [1, _x];
				};

				case "I_UavTerminal":
				{
					TR_gear_assignedItems set [1, _x];
				};

				case "ItemRadio":
				{
					TR_gear_assignedItems set [2, _x];
				};

				case "ItemCompass":
				{
					TR_gear_assignedItems set [3, _x];
				};

				case "ItemWatch":
				{
					TR_gear_assignedItems set [4, _x];
				};

				case "NVGoggles":
				{
					TR_gear_assignedItems set [7, _x];
				};

				case "NVGoggles_OPFOR":
				{
					TR_gear_assignedItems set [7, _x];
				};

				case "NVGoggles_INDEP":
				{
					TR_gear_assignedItems set [7, _x];
				};
			};

		}forEach (assignedItems player);

		TR_gear_assignedItems set [5, headgear player];
		TR_gear_assignedItems set [6, goggles player];


		//Binoculars
		if ("Binocular" in (assignedItems player)) then
		{
			TR_gear_binoculars = "Binocular";
		}
		else
		{
			if ("Rangefinder" in (assignedItems player)) then
			{
				TR_gear_binoculars = "Rangefinder";
			}
			else
			{
				if ("Laserdesignator" in (assignedItems player)) then
				{
					TR_gear_binoculars = "Laserdesignator";
				}
				else
				{
					TR_gear_binoculars = "";
    			};
			};
		};


		//Primary Weapon
		if ((primaryWeapon player) != "") then
		{
			_magArray = [["", 0], ["", 0]];
            
			{
				if ((_x select 3) == 1) then
				{
	
					if ((_x select 4) == (primaryWeapon player)) then
					{
						_magArray set [0, [_x select 0, _x select 1]];
					}
					else
					{
						_configArray = getArray (configFile >> "CfgWeapons" >> (primaryWeapon player) >> "muzzles");
                        
						if ((_x select 4) == (_configArray select 1)) then
						{
							_magArray set [1, [_x select 0, _x select 1]];
						};
					};
				};

			}forEach (magazinesAmmoFull player);
            
			TR_gear_primaryWeapon = [primaryWeapon player] + (primaryWeaponItems player) + _magArray;
		}
		else
		{
			TR_gear_primaryWeapon = ["", "", "", "", ["", 0], ["", 0]];
		};


		//Secondary Weapon
		if ((secondaryWeapon player) != "") then
		{
			_magArray = [["", 0], ["", 0]];

			{
				if ((_x select 3) == 4) then
				{

					if ((_x select 4) == (secondaryWeapon player)) then
					{
						_magArray set [0, [_x select 0, _x select 1]];
					}
					else
					{
						_configArray = getArray (configFile >> "CfgWeapons" >> (secondaryWeapon player) >> "muzzles");

						if ((_x select 4) == (_configArray select 1)) then
						{
							_magArray set [1, [_x select 0, _x select 1]];
						};
					};
				};

			}forEach (magazinesAmmoFull player);

			TR_gear_secondaryWeapon = [secondaryWeapon player] + (secondaryWeaponItems player) + _magArray;
		}
		else
		{
			TR_gear_secondaryWeapon = ["", "", "", "", ["", 0], ["", 0]];
		};


		//Handgun Weapon
		if ((handgunWeapon player) != "") then
		{
			_magArray = [["", 0], ["", 0]];

			{
				if ((_x select 3) == 2) then
				{

					if ((_x select 4) == (handgunWeapon player)) then
					{
						_magArray set [0, [_x select 0, _x select 1]];
					}
					else
					{
						_configArray = getArray (configFile >> "CfgWeapons" >> (handgunWeapon player) >> "muzzles");

						if ((_x select 4) == (_configArray select 1)) then
						{
							_magArray set [1, [_x select 0, _x select 1]];
						};
					};
				};

			}forEach (magazinesAmmoFull player);

			TR_gear_handgunWeapon = [handgunWeapon player] + (handgunItems player) + _magArray;
		}
		else
		{
			TR_gear_handgunWeapon = ["", "", "", "", ["", 0], ["", 0]];
		};


		//Uniform Items
		TR_gear_uniformItems = [];
		_array = [];

		if ((uniform player) != "") then
		{
			_containerArray = uniformItems player;

			{
				if (!(isClass (configFile >> "CfgMagazines" >> _x))) then
				{
					if (!(_x in _array)) then
					{
						TR_gear_uniformItems = TR_gear_uniformItems + [[_x, 1]];
						_array = _array + [_x];
					}
					else
					{
						_y = _x;

						{
							if (_y in _x) then
							{
								_index = _forEachIndex;
							};

						}forEach TR_gear_uniformItems;

						(TR_gear_uniformItems select _index) set [1, ((TR_gear_uniformItems select _index) select 1) + 1];
					};
				};
                
			}forEach _containerArray;
		};


		//Vest Items
		TR_gear_vestItems = [];
		_array = [];

		if ((vest player) != "") then
		{
			_containerArray = vestItems player;

			{
				if (!(isClass (configFile >> "CfgMagazines" >> _x))) then
				{
					if (!(_x in _array)) then
					{
						TR_gear_vestItems = TR_gear_vestItems + [[_x, 1]];
						_array = _array + [_x];
					}
					else
					{
						_y = _x;

						{
							if (_y in _x) then
							{
								_index = _forEachIndex;
							};

						}forEach TR_gear_vestItems;

						(TR_gear_vestItems select _index) set [1, ((TR_gear_vestItems select _index) select 1) + 1];
					};
				};

			}forEach _containerArray;
		};


		//Backpack Items
		TR_gear_backpackItems = [];
		_array = [];

		if ((backpack player) != "") then
		{
			_containerArray = backpackItems player;

			{
				if (!(isClass (configFile >> "CfgMagazines" >> _x))) then
				{
					if (!(_x in _array)) then
					{
						TR_gear_backpackItems = TR_gear_backpackItems + [[_x, 1]];
						_array = _array + [_x];
					}
					else
					{
						_y = _x;
                        
						{
							if (_y in _x) then
							{
								_index = _forEachIndex;
							};

						}forEach TR_gear_backpackItems;

						(TR_gear_backpackItems select _index) set [1, ((TR_gear_backpackItems select _index) select 1) + 1];
					};
				};

			}forEach _containerArray;
		};


		//Magazines
		TR_gear_uniformMagazines = [];
		TR_gear_vestMagazines = [];
		TR_gear_backpackMagazines = [];
		_array1 = [];
		_array2 = [];
		_array3 = [];

		{
			if ((_x select 4) == "Uniform" && (!([_x select 0, "HandGrenade", "CfgMagazines"] call TRN_common_isKindOf))) then
			{
				if (!([[_x select 0, _x select 1], _array1] call TRN_common_inArray)) then
				{
					TR_gear_uniformMagazines = TR_gear_uniformMagazines + [[[_x select 0, _x select 1], 1]];
					_array1 = _array1 + [[_x select 0, _x select 1]];
				}
				else
				{
					_y = [_x select 0, _x select 1];

					{
						if ([_y, _x select 0] call BIS_fnc_areEqual) then
						{
							_index = _forEachIndex;
						};

					}forEach TR_gear_uniformMagazines;

					(TR_gear_uniformMagazines select _index) set [1, ((TR_gear_uniformMagazines select _index) select 1) + 1];
				};
			}
			else
			{

				if ((_x select 4) == "Vest" && (!([_x select 0, "HandGrenade", "CfgMagazines"] call TRN_common_isKindOf))) then
				{
					if (!([[_x select 0, _x select 1], _array2] call TRN_common_inArray)) then
					{
						TR_gear_vestMagazines = TR_gear_vestMagazines + [[[_x select 0, _x select 1], 1]];
						_array2 = _array2 + [[_x select 0, _x select 1]];
					}
					else
					{
						_y = [_x select 0, _x select 1];

						{
							if ([_y, _x select 0] call BIS_fnc_areEqual) then
							{
								_index = _forEachIndex;
							};

						}forEach TR_gear_vestMagazines;

						(TR_gear_vestMagazines select _index) set [1, ((TR_gear_vestMagazines select _index) select 1) + 1];
					};
				}
				else
				{
					if ((_x select 4) == "Backpack" && (!([_x select 0, "HandGrenade", "CfgMagazines"] call TRN_common_isKindOf))) then
					{
						if (!([[_x select 0, _x select 1], _array3] call TRN_common_inArray)) then
						{
							TR_gear_backpackMagazines = TR_gear_backpackMagazines + [[[_x select 0, _x select 1], 1]];
							_array3 = _array3 + [[_x select 0, _x select 1]];
						}
						else
						{
							_y = [_x select 0, _x select 1];

							{
								if ([_y, _x select 0] call BIS_fnc_areEqual) then
								{
									_index = _forEachIndex;
								};

							}forEach TR_gear_backpackMagazines;

							(TR_gear_backpackMagazines select _index) set [1, ((TR_gear_backpackMagazines select _index) select 1) + 1];
						};
					};
				};
			};

		}forEach (magazinesAmmoFull player);


		{
			if ([_x, "HandGrenade", "CfgMagazines"] call TRN_common_isKindOf) then
    		{
				TR_gear_uniformMagazines = TR_gear_uniformMagazines + [[[_x, 1], ((getMagazineCargo (uniformContainer player) select 1) select _forEachIndex)]];
			};

		}forEach ((getMagazineCargo (uniformContainer player)) select 0);

		{
			if ([_x, "HandGrenade", "CfgMagazines"] call TRN_common_isKindOf) then
			{
				TR_gear_vestMagazines = TR_gear_vestMagazines + [[[_x, 1], ((getMagazineCargo (vestContainer player) select 1) select _forEachIndex)]];
			};

		}forEach ((getMagazineCargo (vestContainer player)) select 0);

		{
			if ([_x, "HandGrenade", "CfgMagazines"] call TRN_common_isKindOf) then
			{
				TR_gear_backpackMagazines = TR_gear_backpackMagazines + [[[_x, 1], ((getMagazineCargo (backpackContainer player) select 1) select _forEachIndex)]];
			};

		}forEach ((getMagazineCargo (backpackContainer player)) select 0);
	};
};