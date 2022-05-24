
disableSerialization;

["BC_TPW_set", "CHECKBOX", ["Scoll menu on/off(need restart)","on/off"], "BC Two Primary Weapons",true] call CBA_fnc_addSetting;
if (BC_TPW_set) then 
	{
	_bc_tpw_id = player addAction ["Swap weapon BC", "\BC_TPW\functions\tpw.sqf"]; 
	};
	
if (BC_TPW_set) then 
	{
player addEventHandler ["Respawn", {
        _bc_tpw_id = player addAction ["Swap weapon BC", "\BC_TPW\functions\tpw.sqf"];       
       }
		];
};