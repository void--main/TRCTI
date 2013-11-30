/*
    Author:
    -[EUTW]- trnapster

    Description:
    Checks configfile for classname and returns parentclassname

    Parameter(s):
    _this: STRING - Classname

    Returns:
    STRING - CLassname
*/

private ["_return"];

switch true do
{
    case (isClass (configFile >> "CfgWeapons" >> _this)):
    {
        _return = "CfgWeapons";
    };

    case (isClass (configFile >> "CfgVehicles" >> _this)):
    {
        _return = "CfgVehicles";
    };
    
    case (isClass (configFile >> "CfgMagazines" >> _this)):
    {
        _return = "CfgMagazines";
    };  

    case (isClass (configFile >> "CfgGlasses" >> _this)):
    {
        _return = "CfgGlasses";
    };

    default
    {
        _return = "";
    };
};

_return