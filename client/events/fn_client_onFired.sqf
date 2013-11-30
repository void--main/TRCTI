/*
    Author:
    -[EUTW]- trnapster

    Description:
    Called by FIRED Eventhandler

    Parameter(s):
    _this select 0: OBJECT - Object that fired
    _this select 1: STRING - Classname of fired weapon
    _this select 2: STRING - Classname of fired muzzle
    _this select 3: STRING - Firemode
    _this select 4: STRING - Classname of fired ammo
    _this select 5: STRING - Classname of fired magazine
    _this select 6: OBJECT - Fired projectile

    Returns:
    NONE
*/

[0, _this select 1] spawn TRN_client_saveGear;