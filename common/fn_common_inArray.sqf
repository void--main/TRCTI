/*
    Author:
    -[EUTW]- trnapster

    Description:
    Checks if Array contains given item

    Parameter(s):
    _this select 0: ANY - Item
    _this select 1: ARRAY

    Returns:
    BOOLEAN
*/

TRN_common_inArray = {
    private ["_item", "_array", "_return"];

    _item = _this select 0;
    _array = _this select 1;
    _return = false;


    {
        if ([_item, _x] call BIS_fnc_areEqual) then
        {
            _return = true;
        };

    }forEach _array;

    _return
};