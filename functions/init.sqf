
disableSerialization;

["BC_TPW_set", "CHECKBOX", ["Scoll menu on/off(need restart)","on/off"], "BC Two Primary Weapons",false] call CBA_fnc_addSetting;
["BC_TPW_action", "CHECKBOX", ["Swap action","on/off"], "BC Two Primary Weapons",false] call CBA_fnc_addSetting;
["BC_TPW_com_mess", "CHECKBOX", ["Compatible Mode message","on/off"], "BC Two Primary Weapons",true] call CBA_fnc_addSetting;
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

if (isClass (configfile >> "CfgPatches" >> "ace_main")) then {
	bc_tpw_ace_action = ['BC_TPW_Action','SWAP weapon BC','\a3\ui_f\data\IGUI\cfg\Actions\gear_ca.paa',{execVM "\BC_TPW\functions\tpw.sqf";},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], bc_tpw_ace_action] call ace_interact_menu_fnc_addActionToObject;
};