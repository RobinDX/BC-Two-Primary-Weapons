	class HK416D10_LMT_SNOW;
	class HK416D10_CTR_SNOW;
	class HK416D10_SMR_LMT_SNOW;
	class HK416D10_SMR_CTR_BlackSnow_SNOW;
	class HK416D10_SMR_CTR_SNOW;
	class HK416D10_SMR_CTR_SNOW_2;
	class HK416D10_SMR_IMOD_BlackSnow;
	class HK416D145_CTR_SNOW;
	class HK416D10_SMR_IMOD_SNOW;
	class HK416D10_SMR_IMOD_SNOW_2;
	class HK416D145_LMT_SNOW;
	class HK416D145_SMR_CTR_BLACKSNOW;
	class HK416D145_SMR_CTR_SNOW;
	class HK416D145_SMR_CTR_SNOW_2;
	class HK416D145_SMR_LMT_BLACKSNOW;
	class HK416D145_SMR_LMT_SNOW;
	class SR25_SNOW;
	class SR25_EC_SNOW;
	class MK46_MOD0_SNOW;
	class MK46_MOD0_PARA_SNOW;
	class MK46_MOD1_SNOW;
	class MK46_MOD1_SAVIT_SNOW;
	class MK48_MOD0_SNOW;
	class MK48_MOD0_PARA_SNOW;
	class MK48_MOD1_SNOW;
	class SR16_CQB_Mod2_CTR_Snow;
	class SR16_CQB_Mod2_LMT_Snow;
	class SR16_CQB_Mod2_IMOD_Snow;
	class SR16_CQB_Mod2_MFT_Snow;
	class SR16_Carabine_Mod2_CTR_Snow;
	class SR16_Carabine_Mod2_LMT_Snow;
	class SR16_Carabine_Mod2_IMOD_Snow;
	class SR16_Carabine_Mod2_MFT_Snow;
	class M40A5_snow;
	class M110K1_SNOW;
	class M110K1_CTR_SNOW;
	class SIG_MCX_115_Virtus_Snow;
	class SIG_MCX_115_Virtus_FDE_Snow;
	class SIG_MCX_115_Virtus_300BLK_Snow;
	class SIG_MCX_115_Virtus_300BLK_FDE_Snow;



	class HK416D10_LMT_SNOW_bcsewpn: HK416D10_LMT_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","Stock","Gunfuightmod3"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper.rvmat","Tier1_Weapons\HK416s\data\416_lower.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common.rvmat","Tier1_Weapons\HK416s\data\sopmod.rvmat","Tier1_Weapons\HK416s\data\gunfighter.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_co_snow.paa","Winterretextures\data\416_lower_co_snow.paa","Winterretextures\data\416_barrel_co_snow.paa","Winterretextures\data\416_common_co_snow.paa","Winterretextures\data\sopmod_co_snow.paa","Winterretextures\data\gunfighter_co_snow.paa"};
	};
	class HK416D10_LMT_SNOW_grip_bcsewpn: HK416D10_LMT_SNOW_bcsewpn{};
	class HK416D10_LMT_SNOW_grip2_bcsewpn: HK416D10_LMT_SNOW_bcsewpn{};
	class HK416D10_LMT_SNOW_grip3_bcsewpn: HK416D10_LMT_SNOW_bcsewpn{};
	class HK416D10_CTR_SNOW_bcsewpn: HK416D10_CTR_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","CTR"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper.rvmat","Tier1_Weapons\HK416s\data\416_lower.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common.rvmat","Tier1_Weapons\HK416s\data\magpul_ctr.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_co_snow.paa","Winterretextures\data\416_lower_co_snow.paa","Winterretextures\data\416_barrel_co_snow.paa","Winterretextures\data\416_common_co_snow.paa","Winterretextures\data\magpul_ctr_co_snow.paa"};
	};
	class HK416D10_CTR_SNOW_grip_bcsewpn: HK416D10_CTR_SNOW_bcsewpn{};
	class HK416D10_CTR_SNOW_grip2_bcsewpn: HK416D10_CTR_SNOW_bcsewpn{};
	class HK416D10_CTR_SNOW_grip3_bcsewpn: HK416D10_CTR_SNOW_bcsewpn{};
	class HK416D10_SMR_LMT_SNOW_bcsewpn: HK416D10_SMR_LMT_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","Stock","Gunfuightmod3","SMR_105","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper.rvmat","Tier1_Weapons\HK416s\data\416_lower.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\sopmod.rvmat","Tier1_Weapons\HK416s\data\gunfighter.rvmat","Tier1_Weapons\HK416s\data\SMR_105.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_tano_co_snow.paa","Winterretextures\data\416_lower_tano_co_snow.paa","Winterretextures\data\416_barrel_tano_co_snow.paa","Winterretextures\data\416_common_tano_co_snow.paa","Winterretextures\data\416_stocks_fde_co_snow.paa","Winterretextures\data\sopmod_fde_co_snow.paa","Winterretextures\data\gunfighter_co_snow.paa","Winterretextures\data\SMR_105_co_snow.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class HK416D10_SMR_LMT_SNOW_grip_bcsewpn: HK416D10_SMR_LMT_SNOW_bcsewpn{};
	class HK416D10_SMR_LMT_SNOW_grip2_bcsewpn: HK416D10_SMR_LMT_SNOW_bcsewpn{};
	class HK416D10_SMR_LMT_SNOW_grip3_bcsewpn: HK416D10_SMR_LMT_SNOW_bcsewpn{};
	class HK416D10_SMR_CTR_BlackSnow_SNOW_bcsewpn: HK416D10_SMR_CTR_BlackSnow_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","CTR","SMR_105","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper_camo.rvmat","Tier1_Weapons\HK416s\data\416_lower.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common_camo.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\magpul_ctr.rvmat","Tier1_Weapons\HK416s\data\SMR_105.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_co_snow.paa","Tier1_Weapons\HK416s\data\416_lower_co.paa","Tier1_Weapons\HK416s\data\416_barrel_co.paa","Winterretextures\data\416_common_co_snow.paa","Winterretextures\data\416_stocks_co_snow.paa","Winterretextures\data\magpul_ctr_co_snow.paa","Winterretextures\data\SMR_105_co_snow.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class HK416D10_SMR_CTR_BlackSnow_SNOW_grip_bcsewpn: HK416D10_SMR_CTR_BlackSnow_SNOW_bcsewpn{};
	class HK416D10_SMR_CTR_BlackSnow_SNOW_grip2_bcsewpn: HK416D10_SMR_CTR_BlackSnow_SNOW_bcsewpn{};
	class HK416D10_SMR_CTR_BlackSnow_SNOW_grip3_bcsewpn: HK416D10_SMR_CTR_BlackSnow_SNOW_bcsewpn{};
	class HK416D10_SMR_CTR_SNOW_bcsewpn: HK416D10_SMR_CTR_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","CTR","SMR_105","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper.rvmat","Tier1_Weapons\HK416s\data\416_lower.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\magpul_ctr.rvmat","Tier1_Weapons\HK416s\data\SMR_105.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_tano_co_snow.paa","Winterretextures\data\416_lower_tano_co_snow.paa","Winterretextures\data\416_barrel_tano_co_snow.paa","Winterretextures\data\416_common_tano_co_snow.paa","Winterretextures\data\416_stocks_fde_co_snow.paa","Winterretextures\data\magpul_ctr_co_snow.paa","Winterretextures\data\SMR_105_co_snow.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class HK416D10_SMR_CTR_SNOW_grip_bcsewpn: HK416D10_SMR_CTR_SNOW_bcsewpn{};
	class HK416D10_SMR_CTR_SNOW_grip2_bcsewpn: HK416D10_SMR_CTR_SNOW_bcsewpn{};
	class HK416D10_SMR_CTR_SNOW_grip3_bcsewpn: HK416D10_SMR_CTR_SNOW_bcsewpn{};
	class HK416D10_SMR_CTR_SNOW_2_bcsewpn: HK416D10_SMR_CTR_SNOW_2
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","CTR","Gunfuightmod3","SMR_105","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper_camo.rvmat","Tier1_Weapons\HK416s\data\416_lower_camo.rvmat","Tier1_Weapons\HK416s\data\416_barrel_camo.rvmat","Tier1_Weapons\HK416s\data\416_common_camo.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\magpul_ctr.rvmat","Tier1_Weapons\HK416s\data\gunfighter.rvmat","Tier1_Weapons\HK416s\data\SMR_105.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_co_snow.paa","Winterretextures\data\416_lower_co_snow.paa","Winterretextures\data\416_barrel_co_snow.paa","Winterretextures\data\416_common_co_snow.paa","Winterretextures\data\416_stocks_co_snow.paa","Winterretextures\data\magpul_ctr_co_snow.paa","Winterretextures\data\gunfighter_co_snow.paa","Winterretextures\data\SMR_105_co_snow.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class HK416D10_SMR_CTR_SNOW_2_grip_bcsewpn: HK416D10_SMR_CTR_SNOW_2{};
	class HK416D10_SMR_CTR_SNOW_2_grip2_bcsewpn: HK416D10_SMR_CTR_SNOW_2{};
	class HK416D10_SMR_CTR_SNOW_2_grip3_bcsewpn: HK416D10_SMR_CTR_SNOW_2{};
	class HK416D10_SMR_IMOD_BlackSnow_bcsewpn: HK416D10_SMR_IMOD_BlackSnow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","VLTR_IMOD","Gunfuightmod3","SMR_105","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper.rvmat","Tier1_Weapons\HK416s\data\416_lower.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\vltor_imod.rvmat","Tier1_Weapons\HK416s\data\gunfighter.rvmat","Tier1_Weapons\HK416s\data\SMR_105.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Tier1_Weapons\HK416s\data\416_upper_co.paa","Tier1_Weapons\HK416s\data\416_lower_co.paa","Tier1_Weapons\HK416s\data\416_barrel_co.paa","Tier1_Weapons\HK416s\data\416_common_co.paa","Tier1_Weapons\HK416s\data\416_stocks_co.paa","Winterretextures\data\vltor_imod_co_snow.paa","Winterretextures\data\gunfighter_co_snow.paa","Winterretextures\data\SMR_105_co_snow.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class HK416D10_SMR_IMOD_BlackSnow_grip_bcsewpn: HK416D10_SMR_IMOD_BlackSnow{};
	class HK416D10_SMR_IMOD_BlackSnow_grip2_bcsewpn: HK416D10_SMR_IMOD_BlackSnow{};
	class HK416D10_SMR_IMOD_BlackSnow_grip3_bcsewpn: HK416D10_SMR_IMOD_BlackSnow{};
	class HK416D145_CTR_SNOW_bcsewpn: HK416D145_CTR_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","CTR","Gunfuightmod3"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper.rvmat","Tier1_Weapons\HK416s\data\416_lower.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\magpul_ctr.rvmat","Tier1_Weapons\HK416s\data\gunfighter.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_co_snow.paa","Winterretextures\data\416_lower_co_snow.paa","Winterretextures\data\416_barrel_co_snow.paa","Winterretextures\data\416_common_co_snow.paa","Winterretextures\data\416_stocks_co_snow.paa","Winterretextures\data\magpul_ctr_co_snow.paa","Winterretextures\data\gunfighter_co_snow.paa"};
	};
	class HK416D145_CTR_SNOW_grip_bcsewpn: HK416D145_CTR_SNOW_bcsewpn{};
	class HK416D145_CTR_SNOW_grip2_bcsewpn: HK416D145_CTR_SNOW_bcsewpn{};
	class HK416D145_CTR_SNOW_grip3_bcsewpn: HK416D145_CTR_SNOW_bcsewpn{};
	class HK416D10_SMR_IMOD_SNOW_bcsewpn: HK416D10_SMR_IMOD_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","VLTR_IMOD","SMR_105","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper.rvmat","Tier1_Weapons\HK416s\data\416_lower.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\vltor_imod.rvmat","Tier1_Weapons\HK416s\data\SMR_105.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_tano_co_snow.paa","Winterretextures\data\416_lower_tano_co_snow.paa","Winterretextures\data\416_barrel_tano_co_snow.paa","Winterretextures\data\416_common_tano_co_snow.paa","Winterretextures\data\416_stocks_fde_co_snow.paa","Winterretextures\data\vltor_imod_co_snow.paa","Winterretextures\data\smr_105_co_snow.paa","Winterretextures\data\smr_rail_co_snow.paa"};
	};
	class HK416D10_SMR_IMOD_SNOW_grip_bcsewpn: HK416D10_SMR_IMOD_SNOW_bcsewpn{};
	class HK416D10_SMR_IMOD_SNOW_grip2_bcsewpn: HK416D10_SMR_IMOD_SNOW_bcsewpn{};
	class HK416D10_SMR_IMOD_SNOW_grip3_bcsewpn: HK416D10_SMR_IMOD_SNOW_bcsewpn{};
	class HK416D10_SMR_IMOD_SNOW_2_bcsewpn: HK416D10_SMR_IMOD_SNOW_2
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","VLTR_IMOD","Gunfuightmod3","SMR_105","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper_camo.rvmat","Tier1_Weapons\HK416s\data\416_lower_camo.rvmat","Tier1_Weapons\HK416s\data\416_barrel_camo.rvmat","Tier1_Weapons\HK416s\data\416_common_camo.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\vltor_imod.rvmat","Tier1_Weapons\HK416s\data\gunfighter.rvmat","Tier1_Weapons\HK416s\data\SMR_105.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_co_snow.paa","Winterretextures\data\416_lower_co_snow.paa","Winterretextures\data\416_barrel_co_snow.paa","Winterretextures\data\416_common_co_snow.paa","Winterretextures\data\416_stocks_co_snow.paa","Winterretextures\data\vltor_imod_co_snow.paa","Winterretextures\data\gunfighter_co_snow.paa","Winterretextures\data\smr_105_co_snow.paa","Winterretextures\data\smr_rail_co_snow.paa"};
	};
	class HK416D10_SMR_IMOD_SNOW_2_grip_bcsewpn: HK416D10_SMR_IMOD_SNOW_2{};
	class HK416D10_SMR_IMOD_SNOW_2_grip2_bcsewpn: HK416D10_SMR_IMOD_SNOW_2{};
	class HK416D10_SMR_IMOD_SNOW_2_grip3_bcsewpn: HK416D10_SMR_IMOD_SNOW_2{};
	class HK416D145_LMT_SNOW_bcsewpn: HK416D145_LMT_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","Stock","Gunfuightmod3"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper_camo.rvmat","Tier1_Weapons\HK416s\data\416_lower_camo.rvmat","Tier1_Weapons\HK416s\data\416_barrel_camo.rvmat","Tier1_Weapons\HK416s\data\416_common_camo.rvmat","Tier1_Weapons\HK416s\data\sopmod.rvmat","Tier1_Weapons\HK416s\data\gunfighter.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_co_snow.paa","Winterretextures\data\416_lower_co_snow.paa","Winterretextures\data\416_barrel_co_snow.paa","Winterretextures\data\416_common_co_snow.paa","Winterretextures\data\sopmod_fde_co_snow.paa","Winterretextures\data\gunfighter_co_snow.paa"};
	};
	class HK416D145_LMT_SNOW_grip_bcsewpn: HK416D145_LMT_SNOW_bcsewpn{};
	class HK416D145_LMT_SNOW_grip2_bcsewpn: HK416D145_LMT_SNOW_bcsewpn{};
	class HK416D145_LMT_SNOW_grip3_bcsewpn: HK416D145_LMT_SNOW_bcsewpn{};
	class HK416D145_SMR_CTR_BLACKSNOW_bcsewpn: HK416D145_SMR_CTR_BLACKSNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","CTR","Gunfuightmod3","SMR_145","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper.rvmat","Tier1_Weapons\HK416s\data\416_lower_camo.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\magpul_ctr.rvmat","Tier1_Weapons\HK416s\data\gunfighter.rvmat","Tier1_Weapons\HK416s\data\SMR_145.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Tier1_Weapons\HK416s\data\416_upper_co.paa","Winterretextures\data\416_lower_blackdesert_co_snow.paa","Tier1_Weapons\HK416s\data\416_barrel_co.paa","Tier1_Weapons\HK416s\data\416_common_co.paa","Tier1_Weapons\HK416s\data\416_stocks_co.paa","Winterretextures\data\magpul_ctr_co_snow.paa","Winterretextures\data\gunfighter_co_snow.paa","Winterretextures\data\smr_145_co_snow.paa","Winterretextures\data\smr_rail_co_snow.paa"};
	};
	class HK416D145_SMR_CTR_BLACKSNOW_grip_bcsewpn: HK416D145_SMR_CTR_BLACKSNOW{};
	class HK416D145_SMR_CTR_BLACKSNOW_grip2_bcsewpn: HK416D145_SMR_CTR_BLACKSNOW{};
	class HK416D145_SMR_CTR_BLACKSNOW_grip3_bcsewpn: HK416D145_SMR_CTR_BLACKSNOW{};
	class HK416D145_SMR_CTR_SNOW_bcsewpn: HK416D145_SMR_CTR_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","CTR","Gunfuightmod3","SMR_145","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper.rvmat","Tier1_Weapons\HK416s\data\416_lower.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\magpul_ctr.rvmat","Tier1_Weapons\HK416s\data\gunfighter.rvmat","Tier1_Weapons\HK416s\data\SMR_145.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_tano_co_snow.paa","Winterretextures\data\416_lower_tano_co_snow.paa","Winterretextures\data\416_barrel_tano_co_snow.paa","Winterretextures\data\416_common_tano_co_snow.paa","Winterretextures\data\416_stocks_fde_co_snow.paa","Winterretextures\data\magpul_ctr_co_snow.paa","Winterretextures\data\gunfighter_co_snow.paa","Winterretextures\data\smr_145_co_snow.paa","Winterretextures\data\smr_rail_co_snow.paa"};
	};
	class HK416D145_SMR_CTR_SNOW_grip_bcsewpn: HK416D145_SMR_CTR_SNOW_bcsewpn{};
	class HK416D145_SMR_CTR_SNOW_grip2_bcsewpn: HK416D145_SMR_CTR_SNOW_bcsewpn{};
	class HK416D145_SMR_CTR_SNOW_grip3_bcsewpn: HK416D145_SMR_CTR_SNOW_bcsewpn{};
	class HK416D145_SMR_CTR_SNOW_2_bcsewpn: HK416D145_SMR_CTR_SNOW_2
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","CTR","SMR_145","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper_camo.rvmat","Tier1_Weapons\HK416s\data\416_lower_camo.rvmat","Tier1_Weapons\HK416s\data\416_barrel_camo.rvmat","Tier1_Weapons\HK416s\data\416_common_camo.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\magpul_ctr.rvmat","Tier1_Weapons\HK416s\data\SMR_145.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_co_snow.paa","Winterretextures\data\416_lower_co_snow.paa","Winterretextures\data\416_barrel_co_snow.paa","Winterretextures\data\416_common_co_snow.paa","Winterretextures\data\416_stocks_co_snow.paa","Winterretextures\data\magpul_ctr_co_snow.paa","Winterretextures\data\smr_145_co_snow.paa","Winterretextures\data\smr_rail_co_snow.paa"};
	};
	class HK416D145_SMR_CTR_SNOW_2_grip_bcsewpn: HK416D145_SMR_CTR_SNOW_2{};
	class HK416D145_SMR_CTR_SNOW_2_grip2_bcsewpn: HK416D145_SMR_CTR_SNOW_2{};
	class HK416D145_SMR_CTR_SNOW_2_grip3_bcsewpn: HK416D145_SMR_CTR_SNOW_2{};
	class HK416D145_SMR_LMT_BLACKSNOW_bcsewpn: HK416D145_SMR_LMT_BLACKSNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","Stock","SMR_145","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper.rvmat","Tier1_Weapons\HK416s\data\416_lower_camo.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common_camo.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\sopmod_camo.rvmat","Tier1_Weapons\HK416s\data\SMR_145.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Tier1_Weapons\HK416s\data\416_upper_co.paa","Winterretextures\data\416_lower_blackdesert_co_snow.paa","Tier1_Weapons\HK416s\data\416_barrel_co.paa","Winterretextures\data\416_common_blackdesert_co_snow.paa","Tier1_Weapons\HK416s\data\416_stocks_co.paa","Winterretextures\data\sopmod_co_snow.paa","Winterretextures\data\smr_145_co_snow.paa","Winterretextures\data\smr_rail_co_snow.paa"};
	};
	class HK416D145_SMR_LMT_BLACKSNOW_grip_bcsewpn: HK416D145_SMR_LMT_BLACKSNOW{};
	class HK416D145_SMR_LMT_BLACKSNOW_grip2_bcsewpn: HK416D145_SMR_LMT_BLACKSNOW{};
	class HK416D145_SMR_LMT_BLACKSNOW_grip3_bcsewpn: HK416D145_SMR_LMT_BLACKSNOW{};
	class HK416D145_SMR_LMT_SNOW_bcsewpn: HK416D145_SMR_LMT_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","Stock","SMR_145","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons\HK416s\data\416_upper.rvmat","Tier1_Weapons\HK416s\data\416_lower.rvmat","Tier1_Weapons\HK416s\data\416_barrel.rvmat","Tier1_Weapons\HK416s\data\416_common.rvmat","Tier1_Weapons\HK416s\data\416_stocks.rvmat","Tier1_Weapons\HK416s\data\sopmod.rvmat","Tier1_Weapons\HK416s\data\SMR_145.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\416_upper_tano_co_snow.paa","Winterretextures\data\416_lower_tano_co_snow.paa","Winterretextures\data\416_barrel_tano_co_snow.paa","Winterretextures\data\416_common_tano_co_snow.paa","Winterretextures\data\416_stocks_fde_co_snow.paa","Winterretextures\data\sopmod_fde_co_snow.paa","Winterretextures\data\smr_145_co_snow.paa","Winterretextures\data\smr_rail_co_snow.paa"};
	};
	class HK416D145_SMR_LMT_SNOW_grip_bcsewpn: HK416D145_SMR_LMT_SNOW_bcsewpn{};
	class HK416D145_SMR_LMT_SNOW_grip2_bcsewpn: HK416D145_SMR_LMT_SNOW_bcsewpn{};
	class HK416D145_SMR_LMT_SNOW_grip3_bcsewpn: HK416D145_SMR_LMT_SNOW_bcsewpn{};
	class SR25_SNOW_bcsewpn: SR25_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SR25reciever_desert_snow.paa","Winterretextures\data\SR25rail_desert_snow.paa","Winterretextures\data\SR25misc_desert_snow.paa","Winterretextures\data\SR25buttstock1_desert_snow.paa","Winterretextures\data\SR25buttstock2_desert_snow.paa","Winterretextures\data\SR25kacrailcover_desert_snow.paa"};
	};
	class SR25_EC_SNOW_bcsewpn: SR25_EC_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SR25reciever_desert_snow.paa","Winterretextures\data\SR25rail_desert_snow.paa","Winterretextures\data\SR25misc_desert_snow.paa","Winterretextures\data\SR25buttstock1_desert_snow.paa","Winterretextures\data\SR25buttstock2_desert_snow.paa","Winterretextures\data\SR25kacrailcover_desert_snow.paa"};
	};
	class MK46_MOD0_SNOW_bcsewpn: MK46_MOD0_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG","Rail","Bipod"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SAWreciever_mk48_Desert_co_snow.paa","Winterretextures\data\SAWassemblycover_Desert_co_snow.paa","Winterretextures\data\SAWbarrel_Desert_2_co_snow.paa","Winterretextures\data\SAWmisc_Desert_co_snow.paa","Winterretextures\data\SAWPIP_Foregrip_Desert_co_snow.paa","Winterretextures\data\SAWstock_Desert_co_snow.paa","Winterretextures\data\SAWrearsight_Desert_co_snow.paa","Tier1_Weapons\SAW\data\ammobox_co.paa","Tier1_Weapons\SAW\data\vgrip_co.paa","Winterretextures\data\SAWmk48_quadrail_Desert_co_snow.paa","Winterretextures\data\SAWpipbipod_Desert_co_snow.paa"};
	};
	class MK46_MOD0_SNOW_grip_bcsewpn: MK46_MOD0_SNOW_bcsewpn{};
	class MK46_MOD0_SNOW_grip2_bcsewpn: MK46_MOD0_SNOW_bcsewpn{};
	class MK46_MOD0_SNOW_grip3_bcsewpn: MK46_MOD0_SNOW_bcsewpn{};
	class MK46_MOD0_PARA_SNOW_bcsewpn: MK46_MOD0_PARA_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG","Rail","Bipod"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SAWreciever_mk48_Desert_co_snow.paa","Winterretextures\data\SAWassemblycover_Desert_co_snow.paa","Winterretextures\data\SAWbarrel_Desert_2_co_snow.paa","Winterretextures\data\SAWmisc_Desert_co_snow.paa","Winterretextures\data\SAWPIP_Foregrip_Desert_co_snow.paa","Winterretextures\data\SAWstock_Desert_co_snow.paa","Winterretextures\data\SAWrearsight_Desert_co_snow.paa","Tier1_Weapons\SAW\data\ammobox_co.paa","Tier1_Weapons\SAW\data\vgrip_co.paa","Winterretextures\data\SAWmk48_quadrail_Desert_co_snow.paa","Winterretextures\data\SAWpipbipod_Desert_co_snow.paa"};
	};
	class MK46_MOD0_PARA_SNOW_grip_bcsewpn: MK46_MOD0_PARA_SNOW_bcsewpn{};
	class MK46_MOD0_PARA_SNOW_grip2_bcsewpn: MK46_MOD0_PARA_SNOW_bcsewpn{};
	class MK46_MOD0_PARA_SNOW_grip3_bcsewpn: MK46_MOD0_PARA_SNOW_bcsewpn{};
	class MK46_MOD1_SNOW_bcsewpn: MK46_MOD1_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG","Rail","Bipod"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SAWreciever_mk48_Desert_co_snow.paa","Winterretextures\data\SAWassemblycover_Desert_co_snow.paa","Winterretextures\data\SAWbarrel_Desert_2_co_snow.paa","Winterretextures\data\SAWmisc_Desert_co_snow.paa","Winterretextures\data\SAWPIP_Foregrip_Desert_co_snow.paa","Winterretextures\data\SAWstock_Desert_co_snow.paa","Winterretextures\data\SAWrearsight_Desert_co_snow.paa","Tier1_Weapons\SAW\data\pouch_camo_co.paa","Tier1_Weapons\SAW\data\vgrip_co.paa","Winterretextures\data\SAWmk48_quadrail_Desert_co_snow.paa","Winterretextures\data\SAWpipbipod_Desert_co_snow.paa"};
	};
	class MK46_MOD1_SNOW_grip_bcsewpn: MK46_MOD1_SNOW_bcsewpn{};
	class MK46_MOD1_SNOW_grip2_bcsewpn: MK46_MOD1_SNOW_bcsewpn{};
	class MK46_MOD1_SNOW_grip3_bcsewpn: MK46_MOD1_SNOW_bcsewpn{};
	class MK46_MOD1_SAVIT_SNOW_bcsewpn: MK46_MOD1_SAVIT_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG","Rail","Bipod"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SAWreciever_mk48_Desert_co_snow.paa","Winterretextures\data\SAWassemblycover_Desert_co_snow.paa","Winterretextures\data\SAWbarrel_Desert_2_co_snow.paa","Winterretextures\data\SAWmisc_Desert_co_snow.paa","Winterretextures\data\SAWPIP_Foregrip_Desert_co_snow.paa","Winterretextures\data\SAWstock_Desert_co_snow.paa","Winterretextures\data\SAWrearsight_Desert_co_snow.paa","Tier1_Weapons\SAW\data\pouch_camo_co.paa","Tier1_Weapons\SAW\data\vgrip_co.paa","Winterretextures\data\SAWmk48_quadrail_Desert_co_snow.paa","Winterretextures\data\SAWpipbipod_Desert_co_snow.paa"};
	};
	class MK46_MOD1_SAVIT_SNOW_grip_bcsewpn: MK46_MOD1_SAVIT_SNOW_bcsewpn{};
	class MK46_MOD1_SAVIT_SNOW_grip2_bcsewpn: MK46_MOD1_SAVIT_SNOW_bcsewpn{};
	class MK46_MOD1_SAVIT_SNOW_grip3_bcsewpn: MK46_MOD1_SAVIT_SNOW_bcsewpn{};
	class MK48_MOD0_SNOW_bcsewpn: MK48_MOD0_SNOW
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG","Rail","Bipod"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SAWreciever_mk48_Desert_co_snow.paa","Winterretextures\data\SAWassemblycover_Desert_co_snow.paa","Winterretextures\data\SAWbarrel_Desert_co_snow.paa","Winterretextures\data\SAWmisc_Desert_co_snow.paa","Winterretextures\data\SAWPIP_Foregrip_Desert_co_snow.paa","Winterretextures\data\SAWstock_Desert_co_snow.paa","Winterretextures\data\SAWrearsight_Desert_co_snow.paa","Tier1_Weapons\SAW\data\pouch_camo_co.paa","Tier1_Weapons\SAW\data\vgrip_co.paa","Winterretextures\data\SAWmk48_quadrail_Desert_co_snow.paa","Winterretextures\data\SAWpipbipod_Desert_co_snow.paa"};
	};
	class MK48_MOD0_SNOW_grip_bcsewpn: MK48_MOD0_SNOW_bcsewpn{};
	class MK48_MOD0_SNOW_grip2_bcsewpn: MK48_MOD0_SNOW_bcsewpn{};
	class MK48_MOD0_SNOW_grip3_bcsewpn: MK48_MOD0_SNOW_bcsewpn{};
	class MK48_MOD0_PARA_SNOW_bcsewpn: MK48_MOD0_PARA_SNOW
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG","Rail","Bipod"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SAWreciever_mk48_Desert_co_snow.paa","Winterretextures\data\SAWassemblycover_Desert_co_snow.paa","Winterretextures\data\SAWbarrel_Desert_co_snow.paa","Winterretextures\data\SAWmisc_Desert_co_snow.paa","Winterretextures\data\SAWPIP_Foregrip_Desert_co_snow.paa","Winterretextures\data\SAWstock_Desert_co_snow.paa","Winterretextures\data\SAWrearsight_Desert_co_snow.paa","Tier1_Weapons\SAW\data\pouch_camo_co.paa","Tier1_Weapons\SAW\data\vgrip_co.paa","Winterretextures\data\SAWmk48_quadrail_Desert_co_snow.paa","Winterretextures\data\SAWpipbipod_Desert_co_snow.paa"};
	};
	class MK48_MOD0_PARA_SNOW_grip_bcsewpn: MK48_MOD0_PARA_SNOW_bcsewpn{};
	class MK48_MOD0_PARA_SNOW_grip2_bcsewpn: MK48_MOD0_PARA_SNOW_bcsewpn{};
	class MK48_MOD0_PARA_SNOW_grip3_bcsewpn: MK48_MOD0_PARA_SNOW_bcsewpn{};
	class MK48_MOD1_SNOW_bcsewpn: MK48_MOD1_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG","Rail","Bipod"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SAWreciever_mk48_Desert_co_snow.paa","Winterretextures\data\SAWassemblycover_Desert_co_snow.paa","Winterretextures\data\SAWbarrel_Desert_co_snow.paa","Winterretextures\data\SAWmisc_Desert_co_snow.paa","Winterretextures\data\SAWPIP_Foregrip_Desert_co_snow.paa","Winterretextures\data\SAWstock_Desert_co_snow.paa","Winterretextures\data\SAWrearsight_Desert_co_snow.paa","Tier1_Weapons\SAW\data\pouch_camo_co.paa","Tier1_Weapons\SAW\data\vgrip_co.paa","Winterretextures\data\SAWmk48_quadrail_Desert_co_snow.paa","Winterretextures\data\SAWpipbipod_Desert_co_snow.paa"};
	};
	class MK48_MOD1_SNOW_grip_bcsewpn: MK48_MOD1_SNOW_bcsewpn{};
	class MK48_MOD1_SNOW_grip2_bcsewpn: MK48_MOD1_SNOW_bcsewpn{};
	class MK48_MOD1_SNOW_grip3_bcsewpn: MK48_MOD1_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_CTR_Snow_bcsewpn: SR16_CQB_Mod2_CTR_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","SR16_upper","SR16_lower","SR16_SBRBarrel","SR16_mainparts","CTR","URX4","KAC_rearsight","Buffer","Buffer_Ring","Magpul_MOEK2","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SR16\data\SR16_upper.rvmat","Tier1_Weapons3\SR16\data\SR16_Lower.rvmat","Tier1_Weapons3\SR16\data\SR16_barrel.rvmat","Tier1_Weapons3\SR16\data\SR16_common.rvmat","Tier1_Weapons\HK416s\data\magpul_ctr.rvmat","Tier1_Weapons3\SR16\data\URX4_1075.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons3\SR16\data\Buffer.rvmat","Tier1_Weapons\M110\data\M110k1.rvmat","Tier1_Weapons3\SR16\data\Magpul_MOEK2.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SR16_upper_snow_co.paa","Winterretextures\data\SR16_Lower_snow_co.paa","Tier1_Weapons3\SR16\data\SR16_barrel_co.paa","Winterretextures\data\SR16_common_snow_co.paa","Winterretextures\data\magpul_ctr_co_snow.paa","Winterretextures\data\URX4_1075_snow_co.paa","Winterretextures\data\KAC_BUIS_snow_co.paa","Tier1_Weapons3\SR16\data\Buffer_Black_co.paa","Winterretextures\data\M110k5_co_snow.paa","Winterretextures\data\Magpul_MOEK2_snow_co.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class SR16_CQB_Mod2_CTR_Snow_grip_bcsewpn: SR16_CQB_Mod2_CTR_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_CTR_Snow_grip2_bcsewpn: SR16_CQB_Mod2_CTR_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_CTR_Snow_grip3_bcsewpn: SR16_CQB_Mod2_CTR_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_LMT_Snow_bcsewpn: SR16_CQB_Mod2_LMT_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","SR16_upper","SR16_lower","SR16_SBRBarrel","SR16_mainparts","Stock","URX4","KAC_rearsight","Buffer","Buffer_Ring","Magpul_MOEK2","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SR16\data\SR16_upper.rvmat","Tier1_Weapons3\SR16\data\SR16_Lower.rvmat","Tier1_Weapons3\SR16\data\SR16_barrel.rvmat","Tier1_Weapons3\SR16\data\SR16_common.rvmat","Tier1_Weapons\HK416s\data\sopmod.rvmat","Tier1_Weapons3\SR16\data\URX4_1075.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons3\SR16\data\Buffer.rvmat","Tier1_Weapons\M110\data\M110k1.rvmat","Tier1_Weapons3\SR16\data\Magpul_MOEK2.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SR16_upper_snow_co.paa","Winterretextures\data\SR16_Lower_snow_co.paa","Tier1_Weapons3\SR16\data\SR16_barrel_co.paa","Winterretextures\data\SR16_common_snow_co.paa","Winterretextures\data\sopmod_fde_co_snow.paa","Winterretextures\data\URX4_1075_snow_co.paa","Winterretextures\data\KAC_BUIS_snow_co.paa","Tier1_Weapons3\SR16\data\Buffer_Black_co.paa","Winterretextures\data\M110k5_co_snow.paa","Winterretextures\data\Magpul_MOEK2_snow_co.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class SR16_CQB_Mod2_LMT_Snow_grip_bcsewpn: SR16_CQB_Mod2_LMT_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_LMT_Snow_grip2_bcsewpn: SR16_CQB_Mod2_LMT_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_LMT_Snow_grip3_bcsewpn: SR16_CQB_Mod2_LMT_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_IMOD_Snow_bcsewpn: SR16_CQB_Mod2_IMOD_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","SR16_upper","SR16_lower","SR16_SBRBarrel","SR16_mainparts","VLTR_IMOD","URX4","KAC_rearsight","Buffer","Buffer_Ring","Magpul_MOEK2","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SR16\data\SR16_upper.rvmat","Tier1_Weapons3\SR16\data\SR16_Lower.rvmat","Tier1_Weapons3\SR16\data\SR16_barrel.rvmat","Tier1_Weapons3\SR16\data\SR16_common.rvmat","Tier1_Weapons\HK416s\data\vltor_imod.rvmat","Tier1_Weapons3\SR16\data\URX4_1075.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons3\SR16\data\Buffer.rvmat","Tier1_Weapons\M110\data\M110k1.rvmat","Tier1_Weapons3\SR16\data\Magpul_MOEK2.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SR16_upper_snow_co.paa","Winterretextures\data\SR16_Lower_snow_co.paa","Tier1_Weapons3\SR16\data\SR16_barrel_co.paa","Winterretextures\data\SR16_common_snow_co.paa","Winterretextures\data\vltor_imod_co_snow.paa","Winterretextures\data\URX4_1075_snow_co.paa","Winterretextures\data\KAC_BUIS_snow_co.paa","Tier1_Weapons3\SR16\data\Buffer_Black_co.paa","Winterretextures\data\M110k5_co_snow.paa","Winterretextures\data\Magpul_MOEK2_snow_co.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class SR16_CQB_Mod2_IMOD_Snow_grip_bcsewpn: SR16_CQB_Mod2_IMOD_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_IMOD_Snow_grip2_bcsewpn: SR16_CQB_Mod2_IMOD_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_IMOD_Snow_grip3_bcsewpn: SR16_CQB_Mod2_IMOD_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_MFT_Snow_bcsewpn: SR16_CQB_Mod2_MFT_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","SR16_upper","SR16_lower","SR16_SBRBarrel","SR16_mainparts","MFT_Stock","URX4","KAC_rearsight","Buffer","Buffer_Ring","Magpul_MOEK2","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SR16\data\SR16_upper.rvmat","Tier1_Weapons3\SR16\data\SR16_Lower.rvmat","Tier1_Weapons3\SR16\data\SR16_barrel.rvmat","Tier1_Weapons3\SR16\data\SR16_common.rvmat","Tier1_Weapons2\HK416s\data\MFT_Stock.rvmat","Tier1_Weapons3\SR16\data\URX4_1075.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons3\SR16\data\Buffer.rvmat","Tier1_Weapons\M110\data\M110k1.rvmat","Tier1_Weapons3\SR16\data\Magpul_MOEK2.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SR16_upper_snow_co.paa","Winterretextures\data\SR16_Lower_snow_co.paa","Tier1_Weapons3\SR16\data\SR16_barrel_co.paa","Winterretextures\data\SR16_common_snow_co.paa","Winterretextures\data\mft_stock_snow_co.paa","Winterretextures\data\URX4_1075_snow_co.paa","Winterretextures\data\KAC_BUIS_snow_co.paa","Tier1_Weapons3\SR16\data\Buffer_Black_co.paa","Winterretextures\data\M110k5_co_snow.paa","Winterretextures\data\Magpul_MOEK2_snow_co.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class SR16_CQB_Mod2_MFT_Snow_grip_bcsewpn: SR16_CQB_Mod2_MFT_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_MFT_Snow_grip2_bcsewpn: SR16_CQB_Mod2_MFT_SNOW_bcsewpn{};
	class SR16_CQB_Mod2_MFT_Snow_grip3_bcsewpn: SR16_CQB_Mod2_MFT_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_CTR_Snow_bcsewpn: SR16_Carabine_Mod2_CTR_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","SR16_upper","SR16_lower","SR16_SBRBarrel","SR16_mainparts","CTR","URX4","KAC_rearsight","Buffer","Buffer_Ring","Magpul_MOEK2","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SR16\data\SR16_upper.rvmat","Tier1_Weapons3\SR16\data\SR16_Lower.rvmat","Tier1_Weapons3\SR16\data\SR16_barrel.rvmat","Tier1_Weapons3\SR16\data\SR16_common.rvmat","Tier1_Weapons\HK416s\data\magpul_ctr.rvmat","Tier1_Weapons3\SR16\data\URX4_13.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons3\SR16\data\Buffer.rvmat","Tier1_Weapons\M110\data\M110k1.rvmat","Tier1_Weapons3\SR16\data\Magpul_MOEK2.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SR16_upper_snow_co.paa","Winterretextures\data\SR16_Lower_snow_co.paa","Tier1_Weapons3\SR16\data\SR16_barrel_co.paa","Winterretextures\data\SR16_common_snow_co.paa","Winterretextures\data\magpul_ctr_co_snow.paa","Winterretextures\data\urx4_13_snow_co.paa","Winterretextures\data\KAC_BUIS_snow_co.paa","Tier1_Weapons3\SR16\data\Buffer_Black_co.paa","Winterretextures\data\M110k5_co_snow.paa","Winterretextures\data\Magpul_MOEK2_snow_co.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class SR16_Carabine_Mod2_CTR_Snow_grip_bcsewpn: SR16_Carabine_Mod2_CTR_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_CTR_Snow_grip2_bcsewpn: SR16_Carabine_Mod2_CTR_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_CTR_Snow_grip3_bcsewpn: SR16_Carabine_Mod2_CTR_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_LMT_Snow_bcsewpn: SR16_Carabine_Mod2_LMT_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","SR16_upper","SR16_lower","SR16_SBRBarrel","SR16_mainparts","Stock","URX4","KAC_rearsight","Buffer","Buffer_Ring","Magpul_MOEK2","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SR16\data\SR16_upper.rvmat","Tier1_Weapons3\SR16\data\SR16_Lower.rvmat","Tier1_Weapons3\SR16\data\SR16_barrel.rvmat","Tier1_Weapons3\SR16\data\SR16_common.rvmat","Tier1_Weapons\HK416s\data\sopmod.rvmat","Tier1_Weapons3\SR16\data\URX4_13.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons3\SR16\data\Buffer.rvmat","Tier1_Weapons\M110\data\M110k1.rvmat","Tier1_Weapons3\SR16\data\Magpul_MOEK2.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SR16_upper_snow_co.paa","Winterretextures\data\SR16_Lower_snow_co.paa","Tier1_Weapons3\SR16\data\SR16_barrel_co.paa","Winterretextures\data\SR16_common_snow_co.paa","Winterretextures\data\sopmod_fde_co_snow.paa","Winterretextures\data\urx4_13_snow_co.paa","Winterretextures\data\KAC_BUIS_snow_co.paa","Tier1_Weapons3\SR16\data\Buffer_Black_co.paa","Winterretextures\data\M110k5_co_snow.paa","Winterretextures\data\Magpul_MOEK2_snow_co.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class SR16_Carabine_Mod2_LMT_Snow_grip_bcsewpn: SR16_Carabine_Mod2_LMT_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_LMT_Snow_grip2_bcsewpn: SR16_Carabine_Mod2_LMT_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_LMT_Snow_grip3_bcsewpn: SR16_Carabine_Mod2_LMT_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_IMOD_Snow_bcsewpn: SR16_Carabine_Mod2_IMOD_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","SR16_upper","SR16_lower","SR16_SBRBarrel","SR16_mainparts","VLTR_IMOD","URX4","KAC_rearsight","Buffer","Buffer_Ring","Magpul_MOEK2","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SR16\data\SR16_upper.rvmat","Tier1_Weapons3\SR16\data\SR16_Lower.rvmat","Tier1_Weapons3\SR16\data\SR16_barrel.rvmat","Tier1_Weapons3\SR16\data\SR16_common.rvmat","Tier1_Weapons\HK416s\data\vltor_imod.rvmat","Tier1_Weapons3\SR16\data\URX4_13.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons3\SR16\data\Buffer.rvmat","Tier1_Weapons\M110\data\M110k1.rvmat","Tier1_Weapons3\SR16\data\Magpul_MOEK2.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SR16_upper_snow_co.paa","Winterretextures\data\SR16_Lower_snow_co.paa","Tier1_Weapons3\SR16\data\SR16_barrel_co.paa","Winterretextures\data\SR16_common_snow_co.paa","Winterretextures\data\vltor_imod_co_snow.paa","Winterretextures\data\urx4_13_snow_co.paa","Winterretextures\data\KAC_BUIS_snow_co.paa","Tier1_Weapons3\SR16\data\Buffer_Black_co.paa","Winterretextures\data\M110k5_co_snow.paa","Winterretextures\data\Magpul_MOEK2_snow_co.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class SR16_Carabine_Mod2_IMOD_Snow_grip_bcsewpn: SR16_Carabine_Mod2_IMOD_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_IMOD_Snow_grip2_bcsewpn: SR16_Carabine_Mod2_IMOD_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_IMOD_Snow_grip3_bcsewpn: SR16_Carabine_Mod2_IMOD_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_MFT_Snow_bcsewpn: SR16_Carabine_Mod2_MFT_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","SR16_upper","SR16_lower","SR16_SBRBarrel","SR16_mainparts","MFT_Stock","URX4","KAC_rearsight","Buffer","Buffer_Ring","Magpul_MOEK2","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SR16\data\SR16_upper.rvmat","Tier1_Weapons3\SR16\data\SR16_Lower.rvmat","Tier1_Weapons3\SR16\data\SR16_barrel.rvmat","Tier1_Weapons3\SR16\data\SR16_common.rvmat","Tier1_Weapons2\HK416s\data\MFT_Stock.rvmat","Tier1_Weapons3\SR16\data\URX4_13.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons3\SR16\data\Buffer.rvmat","Tier1_Weapons\M110\data\M110k1.rvmat","Tier1_Weapons3\SR16\data\Magpul_MOEK2.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\SR16_upper_snow_co.paa","Winterretextures\data\SR16_Lower_snow_co.paa","Tier1_Weapons3\SR16\data\SR16_barrel_co.paa","Winterretextures\data\SR16_common_snow_co.paa","Winterretextures\data\mft_stock_snow_co.paa","Winterretextures\data\urx4_13_snow_co.paa","Winterretextures\data\KAC_BUIS_snow_co.paa","Tier1_Weapons3\SR16\data\Buffer_Black_co.paa","Winterretextures\data\M110k5_co_snow.paa","Winterretextures\data\Magpul_MOEK2_snow_co.paa","Winterretextures\data\SMR_Rail_co_snow.paa"};
	};
	class SR16_Carabine_Mod2_MFT_Snow_grip_bcsewpn: SR16_Carabine_Mod2_MFT_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_MFT_Snow_grip2_bcsewpn: SR16_Carabine_Mod2_MFT_SNOW_bcsewpn{};
	class SR16_Carabine_Mod2_MFT_Snow_grip3_bcsewpn: SR16_Carabine_Mod2_MFT_SNOW_bcsewpn{};
	class M40A5_snow_bcsewpn: M40A5_snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\m40a5_snow_co"};
	};
	class M110K1_SNOW_bcsewpn: M110K1_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo","camo1"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\m110k1_snow.paa","Tier1_Weapons\M110\data\KAC_BUIS_co.paa"};
	};
	class M110K1_SNOW_grip_bcsewpn: M110K1_SNOW_bcsewpn{};
	class M110K1_SNOW_grip2_bcsewpn: M110K1_SNOW_bcsewpn{};
	class M110K1_SNOW_grip3_bcsewpn: M110K1_SNOW_bcsewpn{};
	class M110K1_CTR_SNOW_bcsewpn: M110K1_CTR_SNOW
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo","camo1","CTR"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\m110k1_snow.paa","Tier1_Weapons\M110\data\KAC_BUIS_co.paa","Winterretextures\data\magpul_ctr_co_snow.paa"};
	};
	class M110K1_CTR_SNOW_grip_bcsewpn: M110K1_CTR_SNOW_bcsewpn{};
	class M110K1_SNOW_CTR_grip2_bcsewpn: M110K1_CTR_SNOW_bcsewpn{};
	class M110K1_CTR_SNOW_grip3_bcsewpn: M110K1_CTR_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_Snow_bcsewpn: SIG_MCX_115_Virtus_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","MCX_Reciever","MCX_10Handguard","MCX_PistolGrip","MCX_Stock","KAC_rearsight","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SIG_MCX\data\MCX_Receiver.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_10Handguard.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_PistolGrip.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_Stock.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\mcx_receiver_snow_co.paa","Winterretextures\data\mcx_10handguard_snow_co.paa","Winterretextures\data\mcx_pistolgrip_snow_co.paa","Winterretextures\data\mcx_stock_snow_co.paa","Winterretextures\data\kac_buis_co_snow.paa","Winterretextures\data\smr_rail_co_snow.paa"};
	};
	class SIG_MCX_115_Virtus_Snow_grip_bcsewpn: SIG_MCX_115_Virtus_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_Snow_grip2_bcsewpn: SIG_MCX_115_Virtus_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_Snow_Snow_grip3_bcsewpn: SIG_MCX_115_Virtus_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_FDE_Snow_bcsewpn: SIG_MCX_115_Virtus_FDE_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","MCX_Reciever","MCX_10Handguard","MCX_PistolGrip","MCX_Stock","KAC_rearsight","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SIG_MCX\data\MCX_Receiver.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_10Handguard.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_PistolGrip.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_Stock.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\mcx_receiver_fde_snow_co.paa","Winterretextures\data\mcx_10handguard_fde_snow_co.paa","Tier1_Weapons3\SIG_MCX\data\MCX_PistolGrip_Black_co.paa","Tier1_Weapons3\SIG_MCX\data\MCX_Stock_Grey_co.paa","Tier1_Weapons\HK416s\data\KAC_BUIS_co.paa","Tier1_Weapons2\HK416s\data\SMR_Rail_Black_co.paa"};
	};
	class SIG_MCX_115_Virtus_FDE_Snow_grip_bcsewpn: SIG_MCX_115_Virtus_FDE_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_FDE_Snow_grip2_bcsewpn: SIG_MCX_115_Virtus_FDE_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_FDE_Snow_grip3_bcsewpn: SIG_MCX_115_Virtus_FDE_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_300BLK_Snow_bcsewpn: SIG_MCX_115_Virtus_300BLK_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","MCX_Reciever","MCX_10Handguard","MCX_PistolGrip","MCX_Stock","KAC_rearsight","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SIG_MCX\data\MCX_Receiver.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_10Handguard.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_PistolGrip.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_Stock.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\mcx_receiver_snow_co.paa","Winterretextures\data\mcx_10handguard_snow_co.paa","Winterretextures\data\mcx_pistolgrip_snow_co.paa","Winterretextures\data\mcx_stock_snow_co.paa","Winterretextures\data\kac_buis_co_snow.paa","Winterretextures\data\smr_rail_co_snow.paa"};
	};
	class SIG_MCX_115_Virtus_300BLK_Snow_grip_bcsewpn: SIG_MCX_115_Virtus_300BLK_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_300BLK_Snow_grip2_bcsewpn: SIG_MCX_115_Virtus_300BLK_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_300BLK_Snow_grip3_bcsewpn: SIG_MCX_115_Virtus_300BLK_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_300BLK_FDE_Snow_bcsewpn: SIG_MCX_115_Virtus_300BLK_FDE_Snow
		{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		class Noob_Auto:Noob_Auto{};
		modes[] = {"Noob_Auto"};
		class NGL: NGL{};
		muzzles[] = {"this","NGL"};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","MCX_Reciever","MCX_10Handguard","MCX_PistolGrip","MCX_Stock","KAC_rearsight","SMR_Rails"};
		hiddenSelectionsMaterials[] = {"","Tier1_Weapons3\SIG_MCX\data\MCX_Receiver.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_10Handguard.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_PistolGrip.rvmat","Tier1_Weapons3\SIG_MCX\data\MCX_Stock.rvmat","Tier1_Weapons\HK416s\data\KAC_BUIS.rvmat","Tier1_Weapons\HK416s\data\SMR_Rail.rvmat"};
		hiddenSelectionsTextures[]={"","Winterretextures\data\mcx_receiver_fde_snow_co.paa","Winterretextures\data\mcx_10handguard_fde_snow_co.paa","Tier1_Weapons3\SIG_MCX\data\MCX_PistolGrip_Black_co.paa","Tier1_Weapons3\SIG_MCX\data\MCX_Stock_Grey_co.paa","Tier1_Weapons\HK416s\data\KAC_BUIS_co.paa","Tier1_Weapons2\HK416s\data\SMR_Rail_Black_co.paa"};
	};
	class SIG_MCX_115_Virtus_300BLK_FDE_Snow_grip_bcsewpn: SIG_MCX_115_Virtus_300BLK_FDE_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_300BLK_FDE_Snow_grip2_bcsewpn: SIG_MCX_115_Virtus_300BLK_FDE_SNOW_bcsewpn{};
	class SIG_MCX_115_Virtus_300BLK_FDE_Snow_grip3_bcsewpn: SIG_MCX_115_Virtus_300BLK_FDE_Snow{};
