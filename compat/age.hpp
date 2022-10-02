	class AGE_MP9;
	class AGE_AKM;
	class AGE_AKMS;
	class AGE_AKM_S_Quadrail;
	class AGE_AKM_S_Halfrail;
	class AGE_AKM_V_Halfrail;
	class AGE_AKM_V_Quadrail;
	class AGE_AK74M;
	class AGE_AK74M_Camo;
	class AGE_AK74M_C;
	class AGE_AK74M_C_Camo;
	class AGE_AK74M_C_Q;
	class AGE_AK74M_V;
	class AGE_AK74M_V_Camo;
	class AGE_AK74M_V_Q;
	class AGE_AK105;
	class AGE_AK105_Camo;
	class AGE_AK105_C;
	class AGE_AK105_C_Cover;
	class AGE_AK105_V;
	class AGE_AK105_V_Camo;
	class AGE_AK105_C_R;
	class AGE_AK105_V_R;
	class AGE_Glock17;
	class AGE_AK103;
	class AGE_103_V_Camo;
	class AGE_AK104_C_Cover;
	class AGE_AK104_V_Camo;
	class AGE_Vityaz;
	class AGE_Vityaz_C;
	class AGE_Vityaz_V;
	class AGE_Vityaz_V_Grip;
	class AGE_Vityaz_C_Grip;
	class AGE_OrsisT5000;
	class AGE_OrsisT5000_Camo;
	class AGE_OrsisT5000_Snow;
	
 	
	class AGE_MP9_bcsewpn: AGE_MP9
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]  = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\mp9\textures\mp9_co.paa","AGE_Weapons\data\mp9\textures\mp9_co.paa"};
		hiddenSelectionsMaterials[] = {"","AGE_Weapons\data\mp9\textures\mp9.rvmat","AGE_Weapons\data\mp9\textures\mp9_plastic.rvmat"};
	}; 		 	
	class AGE_AKM_bcsewpn: AGE_AKM
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\akm\textures\akm_co.paa"};
	}; 		 	
	class AGE_AKMS_bcsewpn: AGE_AKMS
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\akm\textures\akm_co.paa","AGE_Weapons\data\akm\textures\stock\AKMS_Stock_co.paa"};
	}; 		 	
	class AGE_AKM_S_Quadrail_bcsewpn: AGE_AKM_S_Quadrail
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1","camo2","camo_handguard","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\akm\textures\akm_co.paa","AGE_Weapons\data\akm\textures\stock\AKMS_Stock_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AKM_S_Halfrail_bcsewpn: AGE_AKM_S_Halfrail
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1","camo2","camo_handguard","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\akm\textures\akm_co.paa","AGE_Weapons\data\akm\textures\stock\AKMS_Stock_co.paa","AGE_Weapons\data\pp19\textures\handguard\camo_handguard_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AKM_V_Halfrail_bcsewpn: AGE_AKM_V_Halfrail
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1","camo2","camo_handguard","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\akm\textures\akm_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_co.paa","AGE_Weapons\data\pp19\textures\handguard\camo_handguard_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AKM_V_Quadrail_bcsewpn: AGE_AKM_V_Quadrail
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1","camo2","camo_handguard","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\akm\textures\akm_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AK74M_bcsewpn: AGE_AK74M
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak74\textures\body\body_co.paa","AGE_Weapons\data\ak74\textures\handguard\handguard_co.paa","AGE_Weapons\data\ak74\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak74\textures\stock\stock_co.paa"};
	}; 		 	
	class AGE_AK74M_Camo_bcsewpn: AGE_AK74M_Camo
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak74\textures\body\body_camo_co.paa","AGE_Weapons\data\ak105\textures\handguard\handguard_camo_co.paa","AGE_Weapons\data\ak74\textures\muzzle\muzzle_camo_co.paa","AGE_Weapons\data\ak105\textures\stock\stock_camo_co.paa"};
	}; 		 	
	class AGE_AK74M_C_bcsewpn: AGE_AK74M_C
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_rail"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak74\textures\body\body_co.paa","AGE_Weapons\data\ak74\textures\handguard_rail\handguard_rail_co.paa","AGE_Weapons\data\ak74\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak105\textures\stock\aks_stock_co.paa","Age_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AK74M_C_Camo_bcsewpn: AGE_AK74M_C_Camo
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_rail"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak74\textures\body\body_camo_co.paa","AGE_Weapons\data\ak74\textures\handguard_rail\handguard_rail_camo_co.paa","AGE_Weapons\data\ak74\textures\muzzle\muzzle_camo_co.paa","AGE_Weapons\data\ak105\textures\stock\aks_stock_camo_co.paa","Age_Weapons\data\ak105\textures\mods\mods_camo_co.paa"};
	}; 		 	
	class AGE_AK74M_C_Q_bcsewpn: AGE_AK74M_C_Q
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_rail"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak74\textures\body\body_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_co.paa","AGE_Weapons\data\ak74\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak105\textures\stock\aks_stock_co.paa","Age_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AK74M_V_bcsewpn: AGE_AK74M_V
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_rail"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak74\textures\body\body_co.paa","AGE_Weapons\data\ak74\textures\handguard_rail\handguard_rail_co.paa","AGE_Weapons\data\ak74\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_co.paa","Age_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AK74M_V_Camo_bcsewpn: AGE_AK74M_V_Camo
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_rail"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak74\textures\body\body_camo_co.paa","AGE_Weapons\data\ak74\textures\handguard_rail\handguard_rail_camo_co.paa","AGE_Weapons\data\ak74\textures\muzzle\muzzle_camo_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_camo_co.paa","Age_Weapons\data\ak105\textures\mods\mods_camo_co.paa"};
	}; 		 	
	class AGE_AK74M_V_Q_bcsewpn: AGE_AK74M_V_Q
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_rail"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak74\textures\body\body_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_co.paa","AGE_Weapons\data\ak74\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_co.paa","Age_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AK105_bcsewpn: AGE_AK105
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak105\textures\body\body_co.paa","AGE_Weapons\data\ak74\textures\handguard\handguard_co.paa","AGE_Weapons\data\ak105\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak74\textures\stock\stock_co.paa"};
	}; 		 	
	class AGE_AK105_Camo_bcsewpn: AGE_AK105_Camo
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak105\textures\body\body_camo_co.paa","AGE_Weapons\data\ak105\textures\handguard\handguard_camo_co.paa","AGE_Weapons\data\ak105\textures\muzzle\muzzle_camo_co.paa","AGE_Weapons\data\ak105\textures\stock\stock_camo_co.paa"};
	}; 		 	
	class AGE_AK105_C_bcsewpn: AGE_AK105_C
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak105\textures\body\body_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_co.paa","AGE_Weapons\data\ak105\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak105\textures\stock\aks_stock_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AK105_C_Cover_bcsewpn: AGE_AK105_C_Cover
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_cover","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak105\textures\body\body_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_tan_co.paa","AGE_Weapons\data\ak105\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak105\textures\stock\aks_stock_co.paa","AGE_Weapons\data\ak105\textures\cover\cover_tan_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AK105_V_bcsewpn: AGE_AK105_V
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak105\textures\body\body_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_co.paa","AGE_Weapons\data\ak105\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AK105_V_Camo_bcsewpn: AGE_AK105_V_Camo
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak105\textures\body\body_camo_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_camo_co.paa","AGE_Weapons\data\ak105\textures\muzzle\muzzle_camo_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_camo_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_camo_co.paa"};
	}; 		 	
	class AGE_AK105_C_R_bcsewpn: AGE_AK105_C_R
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_handguard_2","camo_muzzle","camo_stock","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak105\textures\body\body_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_co.paa","AGE_Weapons\data\ak74\textures\handguard\handguard_co.paa","AGE_Weapons\data\ak105\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak105\textures\stock\aks_stock_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AK105_V_R_bcsewpn: AGE_AK105_V_R
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_handguard_2","camo_muzzle","camo_stock","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak105\textures\body\body_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_co.paa","AGE_Weapons\data\ak74\textures\handguard\handguard_co.paa","AGE_Weapons\data\ak105\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AK103_bcsewpn: AGE_AK103
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_rail"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak74\textures\body\body_co.paa","AGE_Weapons\data\ak74\textures\handguard\handguard_co.paa","AGE_Weapons\data\ak74\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak74\textures\stock\stock_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_103_V_Camo_bcsewpn: AGE_103_V_Camo
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_rail"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak74\textures\body\body_camo_co.paa","AGE_Weapons\data\ak74\textures\handguard_rail\handguard_rail_camo_co.paa","AGE_Weapons\data\ak74\textures\muzzle\muzzle_camo_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_camo_co.paa","Age_Weapons\data\ak105\textures\mods\mods_camo_co.paa"};
	}; 		 	
	class AGE_AK104_C_Cover_bcsewpn: AGE_AK104_C_Cover
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_cover","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak105\textures\body\body_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_tan_co.paa","AGE_Weapons\data\ak105\textures\muzzle\muzzle_co.paa","AGE_Weapons\data\ak105\textures\stock\aks_stock_co.paa","AGE_Weapons\data\ak105\textures\cover\cover_tan_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_co.paa"};
	}; 		 	
	class AGE_AK104_V_Camo_bcsewpn: AGE_AK104_V_Camo
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo_body","camo_handguard","camo_muzzle","camo_stock","camo_mods"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\ak105\textures\body\body_camo_co.paa","AGE_Weapons\data\ak105\textures\handguard\quadrail_camo_co.paa","AGE_Weapons\data\ak105\textures\muzzle\muzzle_camo_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_camo_co.paa","AGE_Weapons\data\ak105\textures\mods\mods_camo_co.paa"};
	}; 		 	
	class AGE_Vityaz_bcsewpn: AGE_Vityaz
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\pp19\textures\camo1_co.paa","AGE_Weapons\data\pp19\textures\camo2_co.paa"};
	}; 		 	
	class AGE_Vityaz_C_bcsewpn: AGE_Vityaz_C
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1","camo2","camo_handguard"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\pp19\textures\camo1_co.paa","AGE_Weapons\data\pp19\textures\camo2_co.paa","AGE_Weapons\data\pp19\textures\handguard\camo_handguard_co.paa"};
	}; 		 	
	class AGE_Vityaz_V_bcsewpn: AGE_Vityaz_V
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1","camo2","camo_handguard","camo_stock"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\pp19\textures\camo1_co.paa","AGE_Weapons\data\pp19\textures\camo2_co.paa","AGE_Weapons\data\pp19\textures\handguard\camo_handguard_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_co.paa"};
	}; 		 	
	class AGE_Vityaz_V_Grip_bcsewpn: AGE_Vityaz_V_Grip
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1","camo2","camo_handguard","camo_stock"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\pp19\textures\camo1_co.paa","AGE_Weapons\data\pp19\textures\camo2_co.paa","AGE_Weapons\data\pp19\textures\handguard\camo_handguard_co.paa","AGE_Weapons\data\ak105\textures\stock\m4_stock_co.paa"};
	}; 		 	
	class AGE_Vityaz_C_Grip_bcsewpn: AGE_Vityaz_C_Grip
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1","camo2","camo_handguard"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\pp19\textures\camo1_co.paa","AGE_Weapons\data\pp19\textures\camo2_co.paa","AGE_Weapons\data\pp19\textures\handguard\camo_handguard_co.paa"};
	}; 		 	
	class AGE_OrsisT5000_bcsewpn: AGE_OrsisT5000
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\orsis\textures\camo1_co.paa"};
	}; 		 	
	class AGE_OrsisT5000_Camo_bcsewpn: AGE_OrsisT5000_Camo
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\orsis\textures\camo1_camo_co.paa"};
	}; 		 	
	class AGE_OrsisT5000_Snow_bcsewpn: AGE_OrsisT5000_Snow
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[]   = {"zasleh","camo1"};
		hiddenSelectionsTextures[] = {"","AGE_Weapons\data\orsis\textures\camo1_snow_co.paa"};
	};
