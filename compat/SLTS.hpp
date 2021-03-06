
	class SLTS_MK16;
	class SLTS_Mk16_black;
	class SLTS_Mk16_AAF;
	class SLTS_Mk16_EGLM;
	class SLTS_Mk16_EGLM_black;
	class SLTS_Mk16_EGLM_AAF;

	class SLTS_Mk17;
	class SLTS_Mk17_EGLM;
	class SLTS_Mk17_black;
	class SLTS_Mk17_AAF;
	class SLTS_Mk17_EGLM_black;
	class SLTS_Mk17_EGLM_AAF;

	class SLTS_MK13_Rifle;
	class SLTS_MK13_Rifle_AAF;

	class SLTS_MK16_Lamp;
	class SLTS_Mk16_Lamp_AAF;
	class SLTS_Mk16_Lamp_Black;
	class SLTS_MK17_Lamp;
	class SLTS_Mk17_Lamp_AAF;
	class SLTS_Mk17_Lamp_Black;
	class SLTS_MK16_Short;
	class SLTS_Mk16_Short_AAF;
	class SLTS_Mk16_Short_Black;
	class SLTS_Mk16_FIA1;
	class SLTS_Mk16_FIA2;
	class SLTS_Mk16_EGLM_FIA1;
	class SLTS_Mk16_EGLM_FIA2;
	class SLTS_Mk16_LDF;
	class SLTS_Mk16_EGLM_LDF;
	class SLTS_Mk16_Short_LDF;
	class SLTS_Mk16_Lamp_LDF;
	class SLTS_Mk17_FIA1;
	class SLTS_MK17_Short;
	class SLTS_MK17_Short_AAF;
	class SLTS_MK17_Short_Black;
	class SLTS_MK17_LDF;
	class SLTS_MK17_EGLM_LDF;
	class SLTS_MK17_Short_LDF;
	class SLTS_Mk16_Gendar;
	class SLTS_Mk17_Gendar;
	class SLTS_MK13_Rifle_Gendar;
	class SLTS_Mk16_CTRG;
	class SLTS_Mk16_EGLM_CTRG;
	class SLTS_Mk17_CTRG;
	class SLTS_Mk16_Tanoa;
	class SLTS_Mk17_Tanoa;
	class SLTS_Mk16_CSAT;
	class SLTS_Mk17_CSAT;

	class SLTS_MK21;
	class SLTS_MK21_AAF;

	
	class SLTS_MK16_bcsewpn: SLTS_MK16
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_co.paa","\scar_arma3\data\scar_acc_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk16_black_bcsewpn: SLTS_Mk16_black
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_black_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk16_AAF_bcsewpn: SLTS_Mk16_AAF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_aaf.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	class SLTS_Mk16_EGLM_bcsewpn: SLTS_Mk16_EGLM
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_co.paa","\scar_arma3\data\scar_acc_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk16_EGLM_black_bcsewpn: SLTS_Mk16_EGLM_black
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_black_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_black_co.paa"};
	};
	class SLTS_Mk16_EGLM_AAF_bcsewpn: SLTS_Mk16_EGLM_AAF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_AAF.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	class SLTS_Mk17_base: SLTS_Mk17
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_h_co.paa","\scar_arma3\data\scar_acc_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk17_bcsewpn: SLTS_Mk17
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_h_co.paa","\scar_arma3\data\scar_acc_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk17_EGLM_bcsewpn: SLTS_Mk17_EGLM
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_h_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk17_black_bcsewpn: SLTS_Mk17_black
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_h_black_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk17_AAF_bcsewpn: SLTS_Mk17_AAF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_h_AAF_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk17_EGLM_black_bcsewpn: SLTS_Mk17_EGLM_black
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_h_black_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_black_co.paa"};
	};
	class SLTS_Mk17_EGLM_AAF_bcsewpn: SLTS_Mk17_EGLM_AAF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_h_AAF_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_AAF_co.paa"};
	};
	class SLTS_MK13_Rifle_bcsewpn: SLTS_MK13_Rifle
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
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\mk13_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_MK13_Rifle_AAF_bcsewpn: SLTS_MK13_Rifle_AAF
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
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\mk13_aaf_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	class SLTS_MK16_Lamp_bcsewpn: SLTS_MK16_Lamp
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_co.paa","\scar_arma3\data\scar_acc_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk16_Lamp_AAF_bcsewpn: SLTS_Mk16_Lamp_AAF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_aaf.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	class SLTS_Mk16_Lamp_Black_bcsewpn: SLTS_Mk16_Lamp_Black
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_black_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_MK17_Lamp_bcsewpn: SLTS_MK17_Lamp
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_h_co.paa","\scar_arma3\data\scar_acc_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk17_Lamp_AAF_bcsewpn: SLTS_Mk17_Lamp_AAF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_H_aaf_CO.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	class SLTS_Mk17_Lamp_Black_bcsewpn: SLTS_Mk17_Lamp_Black
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_H_black_CO.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_MK16_Short_bcsewpn: SLTS_MK16_Short
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_co.paa","\scar_arma3\data\scar_acc_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk16_Short_AAF_bcsewpn: SLTS_Mk16_Short_AAF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_aaf.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	class SLTS_Mk16_Short_Black_bcsewpn: SLTS_Mk16_Short_Black
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_black_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk16_FIA1_bcsewpn: SLTS_Mk16_FIA1
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\FIA\scar_l_fia1_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk16_FIA2_bcsewpn: SLTS_Mk16_FIA2
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\FIA\scar_l_fia2_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk16_EGLM_FIA1_bcsewpn: SLTS_Mk16_EGLM_FIA1
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\FIA\scar_l_fia1_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\FIA\EGLM_FIA1_CO.paa"};
	};
	class SLTS_Mk16_EGLM_FIA2_bcsewpn: SLTS_Mk16_EGLM_FIA2
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\FIA\scar_l_fia2_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\FIA\EGLM_FIA2_CO.paa"};
	};
	class SLTS_Mk16_LDF_bcsewpn: SLTS_Mk16_LDF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\LDF\scar_l_LDF_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk16_EGLM_LDF_bcsewpn: SLTS_Mk16_EGLM_LDF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\LDF\scar_l_LDF_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\LDF\EGLM_LDF_CO.paa"};
	};
	class SLTS_Mk16_Short_LDF_bcsewpn: SLTS_Mk16_Short_LDF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\LDF\scar_l_LDF_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\LDF\eglm_LDF_co.paa"};
	};
	class SLTS_Mk16_Lamp_LDF_bcsewpn: SLTS_Mk16_Lamp_LDF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\LDF\scar_l_LDF_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\LDF\eglm_LDF_co.paa"};
	};
	class SLTS_Mk17_FIA1_bcsewpn: SLTS_Mk17_FIA1
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\FIA\scar_h_fia1_co.paa","\scar_arma3\data\scar_acc_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_MK17_Short_bcsewpn: SLTS_MK17_Short
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_h_co.paa","\scar_arma3\data\scar_acc_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_MK17_Short_AAF_bcsewpn: SLTS_MK17_Short_AAF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_aaf.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	class SLTS_MK17_Short_Black_bcsewpn: SLTS_MK17_Short_Black
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_black_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_MK17_LDF_bcsewpn: SLTS_MK17_LDF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\LDF\scar_h_LDF_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_MK17_EGLM_LDF_bcsewpn: SLTS_MK17_EGLM_LDF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\LDF\scar_h_LDF_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\LDF\EGLM_LDF_CO.paa"};
	};
	class SLTS_MK17_Short_LDF_bcsewpn: SLTS_MK17_Short_LDF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\LDF\scar_h_LDF_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\LDF\eglm_LDF_co.paa"};
	};
	class SLTS_Mk16_Gendar_bcsewpn: SLTS_Mk16_Gendar
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_gen_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	class SLTS_Mk17_Gendar_bcsewpn: SLTS_Mk17_Gendar
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_H_gen_CO.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	class SLTS_MK13_Rifle_Gendar_bcsewpn: SLTS_MK13_Rifle_Gendar
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
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\mk13_gendar_co.paa","\scar_arma3\data\eglm_gendar_co.paa"};
	};
	class SLTS_Mk16_CTRG_bcsewpn: SLTS_Mk16_CTRG
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\CTRG\scar_l_CTRG_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	class SLTS_Mk16_EGLM_CTRG_bcsewpn: SLTS_Mk16_EGLM_CTRG
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\CTRG\scar_l_CTRG_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\CTRG\eglm_CTRG_co.paa"};
	};
	class SLTS_Mk17_CTRG_bcsewpn: SLTS_Mk17_CTRG
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\CTRG\scar_h_CTRG_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\CTRG\eglm_CTRG_co.paa"};
	};
	class SLTS_Mk16_Tanoa_bcsewpn: SLTS_Mk16_Tanoa
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\tanoa\scar_l_Tanoa_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk17_Tanoa_bcsewpn: SLTS_Mk17_Tanoa
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\tanoa\scar_h_Tanoa_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_Mk16_CSAT_bcsewpn: SLTS_Mk16_CSAT
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\CSAT\scar_l_CSAT_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	class SLTS_Mk17_CSAT_bcsewpn: SLTS_Mk17_CSAT
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\CSAT\scar_h_CSAT_co.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_MK21_bcsewpn: SLTS_MK21
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_co.paa","\scar_arma3\data\scar_acc_co.paa","\scar_arma3\data\eglm_co.paa"};
	};
	class SLTS_MK21_AAF_bcsewpn: SLTS_MK21_AAF
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
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\scar_arma3\data\scar_l_aaf.paa","\scar_arma3\data\scar_acc_black_co.paa","\scar_arma3\data\eglm_aaf_co.paa"};
	};
	
	
	class SLTS_LIM85_AAF;
	class SLTS_LIM85_AAF_bcsewpn: SLTS_LIM85_AAF
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
		hiddenSelections[] = {"zasleh","Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"","\SLTS_LIM85\Data\lmg_03_f_body_aaf_co.paa","\SLTS_LIM85\Data\LMG_03_f_acc_aaf_co.paa","\SLTS_LIM85\Data\grip_co.paa"};
	};