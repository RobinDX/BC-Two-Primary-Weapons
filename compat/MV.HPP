class MCX_Virtus_16_g_s1: MCX_Virtus_556_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Telescoping Stock (Grey)";
		descriptionShort = "Carbine<br/>Caliber: 5.56x45mm";
		picture = "\MCX_Virtus_cfg\ui\16gs1.paa";
		model = "\MCX_Virtus\mesh\mcx_16.p3d";
		dexterity = 1.4;
		inertia = 0.63;
		initSpeed = -0.99;
		AB_barrelTwist = 7;
		AB_barrelLength = 16;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 406.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 77.2;
		};
		class Single: Single
		{
			reloadTime = 0.085;
			dispersion = 0.0003333;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.085;
			dispersion = 0.0012;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Virtus_16_g_s1_fold";
		baseWeapon = "MCX_Virtus_16_g_s1";
		bc_convert = "MCX_Virtus_300_14_g_s1";
		rhs_grip1_change = "MCX_Virtus_16_g_s1_grip";
		rhs_grip2_change = "MCX_Virtus_16_g_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_16_g_s1_grip3";
	};
	class MCX_Virtus_16_g_s1_grip: MCX_Virtus_16_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_g_s1_grip2: MCX_Virtus_16_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_g_s1_grip3: MCX_Virtus_16_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_g_s2: MCX_Virtus_16_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\16gs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_14_g_s2";
		fold_wpn = "MCX_Virtus_16_g_s2_fold";
		baseWeapon = "MCX_Virtus_16_g_s2";
		rhs_grip1_change = "MCX_Virtus_16_g_s2_grip";
		rhs_grip2_change = "MCX_Virtus_16_g_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_16_g_s2_grip3";
	};
	class MCX_Virtus_16_g_s2_grip: MCX_Virtus_16_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_g_s2_grip2: MCX_Virtus_16_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_g_s2_grip3: MCX_Virtus_16_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_g_s3: MCX_Virtus_16_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\16gs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_14_g_s3";
		fold_wpn = "MCX_Virtus_16_g_s3_fold";
		baseWeapon = "MCX_Virtus_16_g_s3";
		rhs_grip1_change = "MCX_Virtus_16_g_s3_grip";
		rhs_grip2_change = "MCX_Virtus_16_g_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_16_g_s3_grip3";
	};
	class MCX_Virtus_16_g_s3_grip: MCX_Virtus_16_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_g_s3_grip2: MCX_Virtus_16_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_g_s3_grip3: MCX_Virtus_16_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_g_s4: MCX_Virtus_16_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\16gs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_14_g_4";
		fold_wpn = "MCX_Virtus_16_g_s4_fold";
		baseWeapon = "MCX_Virtus_16_g_s4";
		rhs_grip1_change = "MCX_Virtus_16_g_s4_grip";
		rhs_grip2_change = "MCX_Virtus_16_g_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_16_g_s4_grip3";
	};
	class MCX_Virtus_16_g_s4_grip: MCX_Virtus_16_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_g_s4_grip2: MCX_Virtus_16_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_g_s4_grip3: MCX_Virtus_16_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_g_s5: MCX_Virtus_16_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\16gs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_14_g_s5";
		fold_wpn = "MCX_Virtus_16_g_s5_fold";
		baseWeapon = "MCX_Virtus_16_g_s5";
		rhs_grip1_change = "MCX_Virtus_16_g_s5_grip";
		rhs_grip2_change = "MCX_Virtus_16_g_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_16_g_s5_grip3";
	};
	class MCX_Virtus_16_g_s5_grip: MCX_Virtus_16_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_g_s5_grip2: MCX_Virtus_16_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_g_s5_grip3: MCX_Virtus_16_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_g_s6: MCX_Virtus_16_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\16gs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_14_g_s6";
		fold_wpn = "MCX_Virtus_16_g_s6_fold";
		baseWeapon = "MCX_Virtus_16_g_s6";
		rhs_grip1_change = "MCX_Virtus_16_g_s6_grip";
		rhs_grip2_change = "MCX_Virtus_16_g_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_16_g_s6_grip3";
	};
	class MCX_Virtus_16_g_s6_grip: MCX_Virtus_16_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_g_s6_grip2: MCX_Virtus_16_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_g_s6_grip3: MCX_Virtus_16_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s1: MCX_Virtus_16_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\16fs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_14_f_s1";
		fold_wpn = "MCX_Virtus_16_f_s1_fold";
		baseWeapon = "MCX_Virtus_16_f_s1";
		rhs_grip1_change = "MCX_Virtus_16_f_s1_grip";
		rhs_grip2_change = "MCX_Virtus_16_f_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_16_f_s1_grip3";
	};
	class MCX_Virtus_16_f_s1_grip: MCX_Virtus_16_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s1_grip2: MCX_Virtus_16_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_f_s1_grip3: MCX_Virtus_16_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s2: MCX_Virtus_16_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\16fs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_14_f_s2";
		fold_wpn = "MCX_Virtus_16_f_s2_fold";
		baseWeapon = "MCX_Virtus_16_f_s2";
		rhs_grip1_change = "MCX_Virtus_16_f_s2_grip";
		rhs_grip2_change = "MCX_Virtus_16_f_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_16_f_s2_grip3";
	};
	class MCX_Virtus_16_f_s2_grip: MCX_Virtus_16_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s2_grip2: MCX_Virtus_16_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_f_s2_grip3: MCX_Virtus_16_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s3: MCX_Virtus_16_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\16fs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_14_f_s3";
		fold_wpn = "MCX_Virtus_16_f_s3_fold";
		baseWeapon = "MCX_Virtus_16_f_s3";
		rhs_grip1_change = "MCX_Virtus_16_f_s3_grip";
		rhs_grip2_change = "MCX_Virtus_16_f_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_16_f_s3_grip3";
	};
	class MCX_Virtus_16_f_s3_grip: MCX_Virtus_16_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s3_grip2: MCX_Virtus_16_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_f_s3_grip3: MCX_Virtus_16_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s4: MCX_Virtus_16_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\16fs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_14_f_s4";
		fold_wpn = "MCX_Virtus_16_f_s4_fold";
		baseWeapon = "MCX_Virtus_16_f_s4";
		rhs_grip1_change = "MCX_Virtus_16_f_s4_grip";
		rhs_grip2_change = "MCX_Virtus_16_f_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_16_f_s4_grip3";
	};
	class MCX_Virtus_16_f_s4_grip: MCX_Virtus_16_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s4_grip2: MCX_Virtus_16_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_f_s4_grip3: MCX_Virtus_16_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s5: MCX_Virtus_16_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\16fs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_14_f_s5";
		fold_wpn = "MCX_Virtus_16_f_s5_fold";
		baseWeapon = "MCX_Virtus_16_f_s5";
		rhs_grip1_change = "MCX_Virtus_16_f_s5_grip";
		rhs_grip2_change = "MCX_Virtus_16_f_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_16_f_s5_grip3";
	};
	class MCX_Virtus_16_f_s5_grip: MCX_Virtus_16_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s5_grip2: MCX_Virtus_16_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_f_s5_grip3: MCX_Virtus_16_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s6: MCX_Virtus_16_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\16fs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_CTR.rvmat"};
		bc_convert = "MCX_Virtus_300_14_f_s6";
		fold_wpn = "MCX_Virtus_16_f_s6_fold";
		baseWeapon = "MCX_Virtus_16_f_s6";
		rhs_grip1_change = "MCX_Virtus_16_f_s6_grip";
		rhs_grip2_change = "MCX_Virtus_16_f_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_16_f_s6_grip3";
	};
	class MCX_Virtus_16_f_s6_grip: MCX_Virtus_16_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_f_s6_grip2: MCX_Virtus_16_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_f_s6_grip3: MCX_Virtus_16_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s1: MCX_Virtus_16_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\16bs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_14_g_s1";
		fold_wpn = "MCX_Virtus_16_b_s1_fold";
		baseWeapon = "MCX_Virtus_16_b_s1";
		rhs_grip1_change = "MCX_Virtus_16_b_s1_grip";
		rhs_grip2_change = "MCX_Virtus_16_b_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_16_b_s1_grip3";
	};
	class MCX_Virtus_16_b_s1_grip: MCX_Virtus_16_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s1_grip2: MCX_Virtus_16_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_b_s1_grip3: MCX_Virtus_16_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s2: MCX_Virtus_16_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\16bs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_14_g_s2";
		fold_wpn = "MCX_Virtus_16_b_s2_fold";
		baseWeapon = "MCX_Virtus_16_b_s2";
		rhs_grip1_change = "MCX_Virtus_16_b_s2_grip";
		rhs_grip2_change = "MCX_Virtus_16_b_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_16_b_s2_grip3";
	};
	class MCX_Virtus_16_b_s2_grip: MCX_Virtus_16_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s2_grip2: MCX_Virtus_16_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_b_s2_grip3: MCX_Virtus_16_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s3: MCX_Virtus_16_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\16bs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_14_g_s3";
		fold_wpn = "MCX_Virtus_16_b_s3_fold";
		baseWeapon = "MCX_Virtus_16_b_s3";
		rhs_grip1_change = "MCX_Virtus_16_b_s3_grip";
		rhs_grip2_change = "MCX_Virtus_16_b_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_16_b_s3_grip3";
	};
	class MCX_Virtus_16_b_s3_grip: MCX_Virtus_16_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s3_grip2: MCX_Virtus_16_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_b_s3_grip3: MCX_Virtus_16_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s4: MCX_Virtus_16_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\16bs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_14_g_s4";
		fold_wpn = "MCX_Virtus_16_b_s4_fold";
		baseWeapon = "MCX_Virtus_16_b_s4";
		rhs_grip1_change = "MCX_Virtus_16_b_s4_grip";
		rhs_grip2_change = "MCX_Virtus_16_b_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_16_b_s4_grip3";
	};
	class MCX_Virtus_16_b_s4_grip: MCX_Virtus_16_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s4_grip2: MCX_Virtus_16_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_b_s4_grip3: MCX_Virtus_16_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s5: MCX_Virtus_16_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\16bs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_14_g_s5";
		fold_wpn = "MCX_Virtus_16_b_s5_fold";
		baseWeapon = "MCX_Virtus_16_b_s5";
		rhs_grip1_change = "MCX_Virtus_16_b_s5_grip";
		rhs_grip2_change = "MCX_Virtus_16_b_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_16_b_s5_grip3";
	};
	class MCX_Virtus_16_b_s5_grip: MCX_Virtus_16_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s5_grip2: MCX_Virtus_16_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_b_s5_grip3: MCX_Virtus_16_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s6: MCX_Virtus_16_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 16 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\16bs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_14_g_s6";
		fold_wpn = "MCX_Virtus_16_b_s6_fold";
		baseWeapon = "MCX_Virtus_16_b_s6";
		rhs_grip1_change = "MCX_Virtus_16_b_s6_grip";
		rhs_grip2_change = "MCX_Virtus_16_b_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_16_b_s6_grip3";
	};
	class MCX_Virtus_16_b_s6_grip: MCX_Virtus_16_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_16_b_s6_grip2: MCX_Virtus_16_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_16_b_s6_grip3: MCX_Virtus_16_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s1: MCX_Virtus_556_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Telescoping Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\14gs1.paa";
		descriptionShort = "Carbine<br/>Caliber: 5.56x45mm";
		model = "\MCX_Virtus\mesh\mcx_14.p3d";
		dexterity = 1.8;
		inertia = 0.6;
		initSpeed = -0.98;
		AB_barrelTwist = 7;
		AB_barrelLength = 14.5;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368.3;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 74.9;
		};
		class Single: Single
		{
			reloadTime = 0.08;
			dispersion = 0.0004;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00155;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_11_g_s1";
		fold_wpn = "MCX_Virtus_14_g_s1_fold";
		baseWeapon = "MCX_Virtus_14_g_s1";
		rhs_grip1_change = "MCX_Virtus_14_g_s1_grip";
		rhs_grip2_change = "MCX_Virtus_14_g_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_14_g_s1_grip3";
	};
	class MCX_Virtus_14_g_s1_grip: MCX_Virtus_14_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s1_grip2: MCX_Virtus_14_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_g_s1_grip3: MCX_Virtus_14_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s2: MCX_Virtus_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\14gs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_g_s2";
		fold_wpn = "MCX_Virtus_14_g_s2_fold";
		baseWeapon = "MCX_Virtus_14_g_s2";
		rhs_grip1_change = "MCX_Virtus_14_g_s2_grip";
		rhs_grip2_change = "MCX_Virtus_14_g_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_14_g_s2_grip3";
	};
	class MCX_Virtus_14_g_s2_grip: MCX_Virtus_14_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s2_grip2: MCX_Virtus_14_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_g_s2_grip3: MCX_Virtus_14_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s3: MCX_Virtus_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\14gs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_11_g_s3";
		fold_wpn = "MCX_Virtus_14_g_s3_fold";
		baseWeapon = "MCX_Virtus_14_g_s3";
		rhs_grip1_change = "MCX_Virtus_14_g_s3_grip";
		rhs_grip2_change = "MCX_Virtus_14_g_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_14_g_s3_grip3";
	};
	class MCX_Virtus_14_g_s3_grip: MCX_Virtus_14_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s3_grip2: MCX_Virtus_14_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_g_s3_grip3: MCX_Virtus_14_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s4: MCX_Virtus_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\14gs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_11_g_s4";
		fold_wpn = "MCX_Virtus_14_g_s4_fold";
		baseWeapon = "MCX_Virtus_14_g_s4";
		rhs_grip1_change = "MCX_Virtus_14_g_s4_grip";
		rhs_grip2_change = "MCX_Virtus_14_g_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_14_g_s4_grip3";
	};
	class MCX_Virtus_14_g_s4_grip: MCX_Virtus_14_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s4_grip2: MCX_Virtus_14_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_g_s4_grip3: MCX_Virtus_14_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s5: MCX_Virtus_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\14gs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_g_s5";
		fold_wpn = "MCX_Virtus_14_g_s5_fold";
		baseWeapon = "MCX_Virtus_14_g_s5";
		rhs_grip1_change = "MCX_Virtus_14_g_s5_grip";
		rhs_grip2_change = "MCX_Virtus_14_g_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_14_g_s5_grip3";
	};
	class MCX_Virtus_14_g_s5_grip: MCX_Virtus_14_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s5_grip2: MCX_Virtus_14_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_g_s5_grip3: MCX_Virtus_14_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s6: MCX_Virtus_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\14gs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_11_g_s6";
		fold_wpn = "MCX_Virtus_14_g_s6_fold";
		baseWeapon = "MCX_Virtus_14_g_s6";
		rhs_grip1_change = "MCX_Virtus_14_g_s6_grip";
		rhs_grip2_change = "MCX_Virtus_14_g_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_14_g_s6_grip3";
	};
	class MCX_Virtus_14_g_s6_grip: MCX_Virtus_14_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_g_s6_grip2: MCX_Virtus_14_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_g_s6_grip3: MCX_Virtus_14_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s1: MCX_Virtus_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\14fs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_11_f_s1";
		fold_wpn = "MCX_Virtus_14_f_s1_fold";
		baseWeapon = "MCX_Virtus_14_f_s1";
		rhs_grip1_change = "MCX_Virtus_14_f_s1_grip";
		rhs_grip2_change = "MCX_Virtus_14_f_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_14_f_s1_grip3";
	};
	class MCX_Virtus_14_f_s1_grip: MCX_Virtus_14_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s1_grip2: MCX_Virtus_14_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_f_s1_grip3: MCX_Virtus_14_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s2: MCX_Virtus_14_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\14fs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_f_s2";
		fold_wpn = "MCX_Virtus_14_f_s2_fold";
		baseWeapon = "MCX_Virtus_14_f_s2";
		rhs_grip1_change = "MCX_Virtus_14_f_s2_grip";
		rhs_grip2_change = "MCX_Virtus_14_f_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_14_f_s2_grip3";
	};
	class MCX_Virtus_14_f_s2_grip: MCX_Virtus_14_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s2_grip2: MCX_Virtus_14_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_f_s2_grip3: MCX_Virtus_14_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s3: MCX_Virtus_14_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\14fs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_11_f_s3";
		fold_wpn = "MCX_Virtus_14_f_s3_fold";
		baseWeapon = "MCX_Virtus_14_f_s3";
		rhs_grip1_change = "MCX_Virtus_14_f_s3_grip";
		rhs_grip2_change = "MCX_Virtus_14_f_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_14_f_s3_grip3";
	};
	class MCX_Virtus_14_f_s3_grip: MCX_Virtus_14_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s3_grip2: MCX_Virtus_14_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_f_s3_grip3: MCX_Virtus_14_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s4: MCX_Virtus_14_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\14fs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_11_f_s4";
		fold_wpn = "MCX_Virtus_14_f_s4_fold";
		baseWeapon = "MCX_Virtus_14_f_s4";
		rhs_grip1_change = "MCX_Virtus_14_f_s4_grip";
		rhs_grip2_change = "MCX_Virtus_14_f_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_14_f_s4_grip3";
	};
	class MCX_Virtus_14_f_s4_grip: MCX_Virtus_14_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s4_grip2: MCX_Virtus_14_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_f_s4_grip3: MCX_Virtus_14_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s5: MCX_Virtus_14_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\14fs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_f_s5";
		fold_wpn = "MCX_Virtus_14_f_s5_fold";
		baseWeapon = "MCX_Virtus_14_f_s5";
		rhs_grip1_change = "MCX_Virtus_14_f_s5_grip";
		rhs_grip2_change = "MCX_Virtus_14_f_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_14_f_s5_grip3";
	};
	class MCX_Virtus_14_f_s5_grip: MCX_Virtus_14_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s5_grip2: MCX_Virtus_14_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_f_s5_grip3: MCX_Virtus_14_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s6: MCX_Virtus_14_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\14fs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_11_f_s6";
		fold_wpn = "MCX_Virtus_14_f_s6_fold";
		baseWeapon = "MCX_Virtus_14_f_s6";
		rhs_grip1_change = "MCX_Virtus_14_f_s6_grip";
		rhs_grip2_change = "MCX_Virtus_14_f_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_14_f_s6_grip3";
	};
	class MCX_Virtus_14_f_s6_grip: MCX_Virtus_14_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_f_s6_grip2: MCX_Virtus_14_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_f_s6_grip3: MCX_Virtus_14_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s1: MCX_Virtus_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\14bs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_11_b_s1";
		fold_wpn = "MCX_Virtus_14_b_s1_fold";
		baseWeapon = "MCX_Virtus_14_b_s1";
		rhs_grip1_change = "MCX_Virtus_14_b_s1_grip";
		rhs_grip2_change = "MCX_Virtus_14_b_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_14_b_s1_grip3";
	};
	class MCX_Virtus_14_b_s1_grip: MCX_Virtus_14_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s1_grip2: MCX_Virtus_14_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_b_s1_grip3: MCX_Virtus_14_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s2: MCX_Virtus_14_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\14bs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_b_s2";
		fold_wpn = "MCX_Virtus_14_b_s2_fold";
		baseWeapon = "MCX_Virtus_14_b_s2";
		rhs_grip1_change = "MCX_Virtus_14_b_s2_grip";
		rhs_grip2_change = "MCX_Virtus_14_b_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_14_b_s2_grip3";
	};
	class MCX_Virtus_14_b_s2_grip: MCX_Virtus_14_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s2_grip2: MCX_Virtus_14_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_b_s2_grip3: MCX_Virtus_14_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s3: MCX_Virtus_14_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\14bs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_11_b_s2";
		fold_wpn = "MCX_Virtus_14_b_s3_fold";
		baseWeapon = "MCX_Virtus_14_b_s3";
		rhs_grip1_change = "MCX_Virtus_14_b_s3_grip";
		rhs_grip2_change = "MCX_Virtus_14_b_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_14_b_s3_grip3";
	};
	class MCX_Virtus_14_b_s3_grip: MCX_Virtus_14_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s3_grip2: MCX_Virtus_14_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_b_s3_grip3: MCX_Virtus_14_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s4: MCX_Virtus_14_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\14bs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_11_b_s3";
		fold_wpn = "MCX_Virtus_14_b_s4_fold";
		baseWeapon = "MCX_Virtus_14_b_s4";
		rhs_grip1_change = "MCX_Virtus_14_b_s4_grip";
		rhs_grip2_change = "MCX_Virtus_14_b_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_14_b_s4_grip3";
	};
	class MCX_Virtus_14_b_s4_grip: MCX_Virtus_14_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s4_grip2: MCX_Virtus_14_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_b_s4_grip3: MCX_Virtus_14_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s5: MCX_Virtus_14_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\14bs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_b_s5";
		fold_wpn = "MCX_Virtus_14_b_s5_fold";
		baseWeapon = "MCX_Virtus_14_b_s5";
		rhs_grip1_change = "MCX_Virtus_14_b_s5_grip";
		rhs_grip2_change = "MCX_Virtus_14_b_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_14_b_s5_grip3";
	};
	class MCX_Virtus_14_b_s5_grip: MCX_Virtus_14_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s5_grip2: MCX_Virtus_14_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_b_s5_grip3: MCX_Virtus_14_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s6: MCX_Virtus_14_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\14bs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_11_b_s6";
		fold_wpn = "MCX_Virtus_14_b_s6_fold";
		baseWeapon = "MCX_Virtus_14_b_s6";
		rhs_grip1_change = "MCX_Virtus_14_b_s6_grip";
		rhs_grip2_change = "MCX_Virtus_14_b_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_14_b_s6_grip3";
	};
	class MCX_Virtus_14_b_s6_grip: MCX_Virtus_14_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_b_s6_grip2: MCX_Virtus_14_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_14_b_s6_grip3: MCX_Virtus_14_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s1: MCX_Virtus_556_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Telescoping Stock (Grey)";
		descriptionShort = "Carbine<br/>Caliber: 5.56x45mm";
		picture = "\MCX_Virtus_cfg\ui\11gs1.paa";
		model = "\MCX_Virtus\mesh\mcx_11.p3d";
		dexterity = 2.2;
		inertia = 0.55;
		initSpeed = -0.93;
		AB_barrelTwist = 7;
		AB_barrelLength = 11.5;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 292.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70.55;
		};
		class Single: Single
		{
			reloadTime = 0.075;
			dispersion = 0.0005;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.075;
			dispersion = 0.0017;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_9_g_s1";
		fold_wpn = "MCX_Virtus_11_g_s1_fold";
		baseWeapon = "MCX_Virtus_11_g_s1";
		rhs_grip1_change = "MCX_Virtus_11_g_s1_grip";
		rhs_grip2_change = "MCX_Virtus_11_g_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_11_g_s1_grip3";
	};
	class MCX_Virtus_11_g_s1_grip: MCX_Virtus_11_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s1_grip2: MCX_Virtus_11_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_g_s1_grip3: MCX_Virtus_11_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s2: MCX_Virtus_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\11gs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_9_g_s2";
		fold_wpn = "MCX_Virtus_11_g_s2_fold";
		baseWeapon = "MCX_Virtus_11_g_s2";
		rhs_grip1_change = "MCX_Virtus_11_g_s2_grip";
		rhs_grip2_change = "MCX_Virtus_11_g_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_11_g_s2_grip3";
	};
	class MCX_Virtus_11_g_s2_grip: MCX_Virtus_11_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s2_grip2: MCX_Virtus_11_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_g_s2_grip3: MCX_Virtus_11_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s3: MCX_Virtus_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\11gs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_9_g_s3";
		fold_wpn = "MCX_Virtus_11_g_s3_fold";
		baseWeapon = "MCX_Virtus_11_g_s3";
		rhs_grip1_change = "MCX_Virtus_11_g_s3_grip";
		rhs_grip2_change = "MCX_Virtus_11_g_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_11_g_s3_grip3";
	};
	class MCX_Virtus_11_g_s3_grip: MCX_Virtus_11_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s3_grip2: MCX_Virtus_11_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_g_s3_grip3: MCX_Virtus_11_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s4: MCX_Virtus_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\11gs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_9_g_s4";
		fold_wpn = "MCX_Virtus_11_g_s4_fold";
		baseWeapon = "MCX_Virtus_11_g_s4";
		rhs_grip1_change = "MCX_Virtus_11_g_s4_grip";
		rhs_grip2_change = "MCX_Virtus_11_g_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_11_g_s4_grip3";
	};
	class MCX_Virtus_11_g_s4_grip: MCX_Virtus_11_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s4_grip2: MCX_Virtus_11_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_g_s4_grip3: MCX_Virtus_11_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s5: MCX_Virtus_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\11gs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_9_g_s5";
		fold_wpn = "MCX_Virtus_11_g_s5_fold";
		baseWeapon = "MCX_Virtus_11_g_s5";
		rhs_grip1_change = "MCX_Virtus_11_g_s5_grip";
		rhs_grip2_change = "MCX_Virtus_11_g_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_11_g_s5_grip3";
	};
	class MCX_Virtus_11_g_s5_grip: MCX_Virtus_11_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s5_grip2: MCX_Virtus_11_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_g_s5_grip3: MCX_Virtus_11_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s6: MCX_Virtus_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\11gs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_9_g_s6";
		fold_wpn = "MCX_Virtus_11_g_s6_fold";
		baseWeapon = "MCX_Virtus_11_g_s6";
		rhs_grip1_change = "MCX_Virtus_11_g_s6_grip";
		rhs_grip2_change = "MCX_Virtus_11_g_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_11_g_s6_grip3";
	};
	class MCX_Virtus_11_g_s6_grip: MCX_Virtus_11_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_g_s6_grip2: MCX_Virtus_11_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_g_s6_grip3: MCX_Virtus_11_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s1: MCX_Virtus_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\11fs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_9_f_s1";
		fold_wpn = "MCX_Virtus_11_f_s1_fold";
		baseWeapon = "MCX_Virtus_11_f_s1";
		rhs_grip1_change = "MCX_Virtus_11_f_s1_grip";
		rhs_grip2_change = "MCX_Virtus_11_f_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_11_f_s1_grip3";
	};
	class MCX_Virtus_11_f_s1_grip: MCX_Virtus_11_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s1_grip2: MCX_Virtus_11_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_f_s1_grip3: MCX_Virtus_11_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s2: MCX_Virtus_11_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\11fs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_9_f_s2";
		fold_wpn = "MCX_Virtus_11_f_s2_fold";
		baseWeapon = "MCX_Virtus_11_f_s2";
		rhs_grip1_change = "MCX_Virtus_11_f_s2_grip";
		rhs_grip2_change = "MCX_Virtus_11_f_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_11_f_s2_grip3";
	};
	class MCX_Virtus_11_f_s2_grip: MCX_Virtus_11_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s2_grip2: MCX_Virtus_11_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_f_s2_grip3: MCX_Virtus_11_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s3: MCX_Virtus_11_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\11fs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_9_f_s3";
		fold_wpn = "MCX_Virtus_11_f_s3_fold";
		baseWeapon = "MCX_Virtus_11_f_s3";
		rhs_grip1_change = "MCX_Virtus_11_f_s3_grip";
		rhs_grip2_change = "MCX_Virtus_11_f_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_11_f_s3_grip3";
	};
	class MCX_Virtus_11_f_s3_grip: MCX_Virtus_11_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s3_grip2: MCX_Virtus_11_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_f_s3_grip3: MCX_Virtus_11_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s4: MCX_Virtus_11_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\11fs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_9_f_s4";
		fold_wpn = "MCX_Virtus_11_f_s4_fold";
		baseWeapon = "MCX_Virtus_11_f_s4";
		rhs_grip1_change = "MCX_Virtus_11_f_s4_grip";
		rhs_grip2_change = "MCX_Virtus_11_f_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_11_f_s4_grip3";
	};
	class MCX_Virtus_11_f_s4_grip: MCX_Virtus_11_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s4_grip2: MCX_Virtus_11_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_f_s4_grip3: MCX_Virtus_11_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s5: MCX_Virtus_11_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\11fs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_9_f_s5";
		fold_wpn = "MCX_Virtus_11_f_s5_fold";
		baseWeapon = "MCX_Virtus_11_f_s5";
		rhs_grip1_change = "MCX_Virtus_11_f_s5_grip";
		rhs_grip2_change = "MCX_Virtus_11_f_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_11_f_s5_grip3";
	};
	class MCX_Virtus_11_f_s5_grip: MCX_Virtus_11_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s5_grip2: MCX_Virtus_11_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_f_s5_grip3: MCX_Virtus_11_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s6: MCX_Virtus_11_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\11fs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_9_f_s6";
		fold_wpn = "MCX_Virtus_11_f_s6_fold";
		baseWeapon = "MCX_Virtus_11_f_s6";
		rhs_grip1_change = "MCX_Virtus_11_f_s6_grip";
		rhs_grip2_change = "MCX_Virtus_11_f_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_11_f_s6_grip3";
	};
	class MCX_Virtus_11_f_s6_grip: MCX_Virtus_11_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_f_s6_grip2: MCX_Virtus_11_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_f_s6_grip3: MCX_Virtus_11_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s1: MCX_Virtus_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\11bs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_9_b_s1";
		fold_wpn = "MCX_Virtus_11_b_s1_fold";
		baseWeapon = "MCX_Virtus_11_b_s1";
		rhs_grip1_change = "MCX_Virtus_11_b_s1_grip";
		rhs_grip2_change = "MCX_Virtus_11_b_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_11_b_s1_grip3";
	};
	class MCX_Virtus_11_b_s1_grip: MCX_Virtus_11_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s1_grip2: MCX_Virtus_11_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_b_s1_grip3: MCX_Virtus_11_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s2: MCX_Virtus_11_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\11bs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_9_b_s2";
		fold_wpn = "MCX_Virtus_11_b_s2_fold";
		baseWeapon = "MCX_Virtus_11_b_s2";
		rhs_grip1_change = "MCX_Virtus_11_b_s2_grip";
		rhs_grip2_change = "MCX_Virtus_11_b_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_11_b_s2_grip3";
	};
	class MCX_Virtus_11_b_s2_grip: MCX_Virtus_11_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s2_grip2: MCX_Virtus_11_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_b_s2_grip3: MCX_Virtus_11_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s3: MCX_Virtus_11_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\11bs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_9_b_s3";
		fold_wpn = "MCX_Virtus_11_b_s3_fold";
		baseWeapon = "MCX_Virtus_11_b_s3";
		rhs_grip1_change = "MCX_Virtus_11_b_s3_grip";
		rhs_grip2_change = "MCX_Virtus_11_b_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_11_b_s3_grip3";
	};
	class MCX_Virtus_11_b_s3_grip: MCX_Virtus_11_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s3_grip2: MCX_Virtus_11_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_b_s3_grip3: MCX_Virtus_11_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s4: MCX_Virtus_11_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\11bs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_9_b_s4";
		fold_wpn = "MCX_Virtus_11_b_s4_fold";
		baseWeapon = "MCX_Virtus_11_b_s4";
		rhs_grip1_change = "MCX_Virtus_11_b_s4_grip";
		rhs_grip2_change = "MCX_Virtus_11_b_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_11_b_s4_grip3";
	};
	class MCX_Virtus_11_b_s4_grip: MCX_Virtus_11_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s4_grip2: MCX_Virtus_11_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_b_s4_grip3: MCX_Virtus_11_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s5: MCX_Virtus_11_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\11bs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_9_b_s5";
		fold_wpn = "MCX_Virtus_11_b_s5_fold";
		baseWeapon = "MCX_Virtus_11_b_s5";
		rhs_grip1_change = "MCX_Virtus_11_b_s5_grip";
		rhs_grip2_change = "MCX_Virtus_11_b_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_11_b_s5_grip3";
	};
	class MCX_Virtus_11_b_s5_grip: MCX_Virtus_11_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s5_grip2: MCX_Virtus_11_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_b_s5_grip3: MCX_Virtus_11_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s6: MCX_Virtus_11_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\11bs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_9_b_s6";
		fold_wpn = "MCX_Virtus_11_b_s6_fold";
		baseWeapon = "MCX_Virtus_11_b_s6";
		rhs_grip1_change = "MCX_Virtus_11_b_s6_grip";
		rhs_grip2_change = "MCX_Virtus_11_b_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_11_b_s6_grip3";
	};
	class MCX_Virtus_11_b_s6_grip: MCX_Virtus_11_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_11_b_s6_grip2: MCX_Virtus_11_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_11_b_s6_grip3: MCX_Virtus_11_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s1: MCX_Virtus_556_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Telescoping Stock (Grey)";
		descriptionShort = "Carbine<br/>Caliber: 5.56x45mm";
		picture = "\MCX_Virtus_cfg\ui\9gs1.paa";
		model = "\MCX_Virtus\mesh\mcx_9.p3d";
		dexterity = 2.6;
		inertia = 0.5;
		initSpeed = -0.9;
		AB_barrelTwist = 7;
		AB_barrelLength = 9;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 228.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 68.34;
		};
		class Single: Single
		{
			reloadTime = 0.072;
			dispersion = 0.00056;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.072;
			dispersion = 0.00182;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_8_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_6_g_s1";
		fold_wpn = "MCX_Virtus_9_g_s1_fold";
		baseWeapon = "MCX_Virtus_9_g_s1";
		rhs_grip1_change = "MCX_Virtus_9_g_s1_grip";
		rhs_grip2_change = "MCX_Virtus_9_g_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_9_g_s1_grip3";
	};
	class MCX_Virtus_9_g_s1_grip: MCX_Virtus_9_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s1_grip2: MCX_Virtus_9_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_g_s1_grip3: MCX_Virtus_9_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s2: MCX_Virtus_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\9gs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_8_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_6_g_s2";
		fold_wpn = "MCX_Virtus_9_g_s2_fold";
		baseWeapon = "MCX_Virtus_9_g_s2";
		rhs_grip1_change = "MCX_Virtus_9_g_s2_grip";
		rhs_grip2_change = "MCX_Virtus_9_g_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_9_g_s2_grip3";
	};
	class MCX_Virtus_9_g_s2_grip: MCX_Virtus_9_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s2_grip2: MCX_Virtus_9_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_g_s2_grip3: MCX_Virtus_9_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s3: MCX_Virtus_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\9gs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_8_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_6_g_s3";
		fold_wpn = "MCX_Virtus_9_g_s3_fold";
		baseWeapon = "MCX_Virtus_9_g_s3";
		rhs_grip1_change = "MCX_Virtus_9_g_s3_grip";
		rhs_grip2_change = "MCX_Virtus_9_g_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_9_g_s3_grip3";
	};
	class MCX_Virtus_9_g_s3_grip: MCX_Virtus_9_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s3_grip2: MCX_Virtus_9_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_g_s3_grip3: MCX_Virtus_9_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s4: MCX_Virtus_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\9gs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_8_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_6_g_s4";
		fold_wpn = "MCX_Virtus_9_g_s4_fold";
		baseWeapon = "MCX_Virtus_9_g_s4";
		rhs_grip1_change = "MCX_Virtus_9_g_s4_grip";
		rhs_grip2_change = "MCX_Virtus_9_g_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_9_g_s4_grip3";
	};
	class MCX_Virtus_9_g_s4_grip: MCX_Virtus_9_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s4_grip2: MCX_Virtus_9_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_g_s4_grip3: MCX_Virtus_9_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s5: MCX_Virtus_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\9gs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_8_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_6_g_s5";
		fold_wpn = "MCX_Virtus_9_g_s5_fold";
		baseWeapon = "MCX_Virtus_9_g_s5";
		rhs_grip1_change = "MCX_Virtus_9_g_s5_grip";
		rhs_grip2_change = "MCX_Virtus_9_g_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_9_g_s5_grip3";
	};
	class MCX_Virtus_9_g_s5_grip: MCX_Virtus_9_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s5_grip2: MCX_Virtus_9_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_g_s5_grip3: MCX_Virtus_9_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s6: MCX_Virtus_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\9gs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_8_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_6_g_s6";
		fold_wpn = "MCX_Virtus_9_g_s6_fold";
		baseWeapon = "MCX_Virtus_9_g_s6";
		rhs_grip1_change = "MCX_Virtus_9_g_s6_grip";
		rhs_grip2_change = "MCX_Virtus_9_g_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_9_g_s6_grip3";
	};
	class MCX_Virtus_9_g_s6_grip: MCX_Virtus_9_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_g_s6_grip2: MCX_Virtus_9_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_g_s6_grip3: MCX_Virtus_9_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s1: MCX_Virtus_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\9fs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_8_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_6_f_s1";
		fold_wpn = "MCX_Virtus_9_f_s1_fold";
		baseWeapon = "MCX_Virtus_9_f_s1";
		rhs_grip1_change = "MCX_Virtus_9_f_s1_grip";
		rhs_grip2_change = "MCX_Virtus_9_f_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_9_f_s1_grip3";
	};
	class MCX_Virtus_9_f_s1_grip: MCX_Virtus_9_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s1_grip2: MCX_Virtus_9_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_f_s1_grip3: MCX_Virtus_9_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s2: MCX_Virtus_9_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\9fs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_8_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_6_f_s2";
		fold_wpn = "MCX_Virtus_9_f_s2_fold";
		baseWeapon = "MCX_Virtus_9_f_s2";
		rhs_grip1_change = "MCX_Virtus_9_f_s2_grip";
		rhs_grip2_change = "MCX_Virtus_9_f_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_9_f_s2_grip3";
	};
	class MCX_Virtus_9_f_s2_grip: MCX_Virtus_9_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s2_grip2: MCX_Virtus_9_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_f_s2_grip3: MCX_Virtus_9_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s3: MCX_Virtus_9_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\9fs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_8_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_6_f_s3";
		fold_wpn = "MCX_Virtus_9_f_s3_fold";
		baseWeapon = "MCX_Virtus_9_f_s3";
		rhs_grip1_change = "MCX_Virtus_9_f_s3_grip";
		rhs_grip2_change = "MCX_Virtus_9_f_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_9_f_s3_grip3";
	};
	class MCX_Virtus_9_f_s3_grip: MCX_Virtus_9_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s3_grip2: MCX_Virtus_9_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_f_s3_grip3: MCX_Virtus_9_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s4: MCX_Virtus_9_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\9fs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_8_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_6_f_s4";
		fold_wpn = "MCX_Virtus_9_f_s4_fold";
		baseWeapon = "MCX_Virtus_9_f_s4";
		rhs_grip1_change = "MCX_Virtus_9_f_s4_grip";
		rhs_grip2_change = "MCX_Virtus_9_f_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_9_f_s4_grip3";
	};
	class MCX_Virtus_9_f_s4_grip: MCX_Virtus_9_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s4_grip2: MCX_Virtus_9_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_f_s4_grip3: MCX_Virtus_9_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s5: MCX_Virtus_9_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\9fs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_8_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_6_f_s5";
		fold_wpn = "MCX_Virtus_9_f_s5_fold";
		baseWeapon = "MCX_Virtus_9_f_s5";
		rhs_grip1_change = "MCX_Virtus_9_f_s5_grip";
		rhs_grip2_change = "MCX_Virtus_9_f_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_9_f_s5_grip3";
	};
	class MCX_Virtus_9_f_s5_grip: MCX_Virtus_9_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s5_grip2: MCX_Virtus_9_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_f_s5_grip3: MCX_Virtus_9_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s6: MCX_Virtus_9_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\9fs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_8_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_6_f_s6";
		fold_wpn = "MCX_Virtus_9_f_s6_fold";
		baseWeapon = "MCX_Virtus_9_f_s6";
		rhs_grip1_change = "MCX_Virtus_9_f_s6_grip";
		rhs_grip2_change = "MCX_Virtus_9_f_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_9_f_s6_grip3";
	};
	class MCX_Virtus_9_f_s6_grip: MCX_Virtus_9_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_f_s6_grip2: MCX_Virtus_9_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_f_s6_grip3: MCX_Virtus_9_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s1: MCX_Virtus_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\9bs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_8_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_6_b_s1";
		fold_wpn = "MCX_Virtus_9_b_s1_fold";
		baseWeapon = "MCX_Virtus_9_b_s1";
		rhs_grip1_change = "MCX_Virtus_9_b_s1_grip";
		rhs_grip2_change = "MCX_Virtus_9_b_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_9_b_s1_grip3";
	};
	class MCX_Virtus_9_b_s1_grip: MCX_Virtus_9_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s1_grip2: MCX_Virtus_9_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_b_s1_grip3: MCX_Virtus_9_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s2: MCX_Virtus_9_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\9bs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_8_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_6_b_s2";
		fold_wpn = "MCX_Virtus_9_b_s2_fold";
		baseWeapon = "MCX_Virtus_9_b_s2";
		rhs_grip1_change = "MCX_Virtus_9_b_s2_grip";
		rhs_grip2_change = "MCX_Virtus_9_b_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_9_b_s2_grip3";
	};
	class MCX_Virtus_9_b_s2_grip: MCX_Virtus_9_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s2_grip2: MCX_Virtus_9_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_b_s2_grip3: MCX_Virtus_9_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s3: MCX_Virtus_9_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\9bs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_8_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_6_b_s3";
		fold_wpn = "MCX_Virtus_9_b_s3_fold";
		baseWeapon = "MCX_Virtus_9_b_s3";
		rhs_grip1_change = "MCX_Virtus_9_b_s3_grip";
		rhs_grip2_change = "MCX_Virtus_9_b_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_9_b_s3_grip3";
	};
	class MCX_Virtus_9_b_s3_grip: MCX_Virtus_9_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s3_grip2: MCX_Virtus_9_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_b_s3_grip3: MCX_Virtus_9_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s4: MCX_Virtus_9_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\9bs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_8_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_6_b_s4";
		fold_wpn = "MCX_Virtus_9_b_s4_fold";
		baseWeapon = "MCX_Virtus_9_b_s4";
		rhs_grip1_change = "MCX_Virtus_9_b_s4_grip";
		rhs_grip2_change = "MCX_Virtus_9_b_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_9_b_s4_grip3";
	};
	class MCX_Virtus_9_b_s4_grip: MCX_Virtus_9_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s4_grip2: MCX_Virtus_9_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_b_s4_grip3: MCX_Virtus_9_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s5: MCX_Virtus_9_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\9bs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_8_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_6_b_s5";
		fold_wpn = "MCX_Virtus_9_b_s5_fold";
		baseWeapon = "MCX_Virtus_9_b_s5";
		rhs_grip1_change = "MCX_Virtus_9_b_s5_grip";
		rhs_grip2_change = "MCX_Virtus_9_b_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_9_b_s5_grip3";
	};
	class MCX_Virtus_9_b_s5_grip: MCX_Virtus_9_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s5_grip2: MCX_Virtus_9_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_b_s5_grip3: MCX_Virtus_9_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s6: MCX_Virtus_9_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 9 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\9bs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_8_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_8.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_6_b_s6";
		fold_wpn = "MCX_Virtus_9_b_s6_fold";
		baseWeapon = "MCX_Virtus_9_b_s6";
		rhs_grip1_change = "MCX_Virtus_9_b_s6_grip";
		rhs_grip2_change = "MCX_Virtus_9_b_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_9_b_s6_grip3";
	};
	class MCX_Virtus_9_b_s6_grip: MCX_Virtus_9_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_9_b_s6_grip2: MCX_Virtus_9_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_9_b_s6_grip3: MCX_Virtus_9_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_SLC: ItemCore
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		author = "RobinDX";
		displayName = "SIG SDR762 Suppressor";
		model = "\MCX_Virtus\mesh\mcx_slc.p3d";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		descriptionShort = "";
		inertia = 0;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex = 1;
			mass = 6;
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1.02;
				visibleFire = 0.1;
				audibleFire = 0.1;
				visibleFireTime = 0.1;
				audibleFireTime = 0.3;
				cost = 0.3;
				typicalSpeed = 1;
				airFriction = 1;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "1.0f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "1.0f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class MCX_Virtus_300_base: MCX_Virtus_556_base
	{
		author = "RobinDX";
		scope = 0;
		descriptionShort = "Caliber: .300 BLK";
		AB_barrelTwist = 5;
		AB_barrelLength = 9;
		ACE_barrelTwist = 254;
		ACE_barrelLength = 228.6;
		magazines[] = {"MCX_30Rnd_762x35_MIX","MCX_30Rnd_762x35_BLK_FMJ","MCX_30Rnd_762x35_SS","MCX_30Rnd_762x35_BLK_MEA"};		
		magazineWell[] = {"CBA_300BLK_STANAG"};
		discreteDistance[] = {25,50,100,200};
		muzzles[] = {"this","Setting_L","BC_UnFold"};
		class WeaponSlotsInfo
		{
			allowedSlots[] = {901};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot{};
			class GripodSlot: mcx_gripod_slot{};
			class CowsSlot: rhs_western_rifle_scopes_slot_long{};
			class PointerSlot: mcxv_laser_slot_top{};
			class MuzzleSlot: asdg_MuzzleSlot
			{
				compatibleItems[] = {"MCX_SLC"};
			};
			mass = 77.2;
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "MCX_SLC";
				slot = "MuzzleSlot";
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\MCX_Virtus\snd\mcx_first",1,1,10};
				closure2[] = {"\MCX_Virtus\snd\mcx_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSet = "";
				soundSetShot[] = {"MCX_VirtusRifle_Shot_SoundSet","MCX_VirtusRifle_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",0.56234133,1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",0.56234133,1.2,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1.9952624,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\MCX_Virtus\snd\mcx_first",1,1,10};
				closure2[] = {"\MCX_Virtus\snd\mcx_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSet = "";
				soundSetShot[] = {"MCX_VirtusRifle_Shot_SoundSet","MCX_VirtusRifle_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",0.56234133,1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",0.56234133,1.2,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1.9952624,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
		};
	};
	class MCX_Virtus_300_6_g_s1: MCX_Virtus_300_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Telescoping Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\6gs1.paa";
		model = "\MCX_Virtus\mesh\mcx_300_6.p3d";
		dexterity = 2.8;
		inertia = 0.47;
		initSpeed = -0.9;
		AB_barrelTwist = 5;
		AB_barrelLength = 6.75;
		ACE_barrelTwist = 254;
		ACE_barrelLength = 171.45;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 63;
		};
		class Single: Single
		{
			reloadTime = 0.071;
			dispersion = 0.0007301;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.071;
			dispersion = 0.00292;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_9_g_s1";
		fold_wpn = "MCX_Virtus_300_6_g_s1_fold";
		baseWeapon = "MCX_Virtus_300_6_g_s1";
		rhs_grip1_change = "MCX_Virtus_300_6_g_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_g_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_g_s1_grip3";
	};
	class MCX_Virtus_300_6_g_s1_grip: MCX_Virtus_300_6_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_g_s1_grip2: MCX_Virtus_300_6_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_g_s1_grip3: MCX_Virtus_300_6_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_g_s2: MCX_Virtus_300_6_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\6gs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_9_g_s2";
		fold_wpn = "MCX_Virtus_300_6_g_s2_fold";
		baseWeapon = "MCX_Virtus_300_6_g_s2";
		rhs_grip1_change = "MCX_Virtus_300_6_g_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_g_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_g_s2_grip3";
	};
	class MCX_Virtus_300_6_g_s2_grip: MCX_Virtus_300_6_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_g_s2_grip2: MCX_Virtus_300_6_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_g_s2_grip3: MCX_Virtus_300_6_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_g_s3: MCX_Virtus_300_6_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\6gs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_9_g_s3";
		fold_wpn = "MCX_Virtus_300_6_g_s3_fold";
		baseWeapon = "MCX_Virtus_300_6_g_s3";
		rhs_grip1_change = "MCX_Virtus_300_6_g_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_g_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_g_s3_grip3";
	};
	class MCX_Virtus_300_6_g_s3_grip: MCX_Virtus_300_6_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_g_s3_grip2: MCX_Virtus_300_6_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_g_s3_grip3: MCX_Virtus_300_6_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_g_s4: MCX_Virtus_300_6_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\6gs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_9_g_s4";
		fold_wpn = "MCX_Virtus_300_6_g_s4_fold";
		baseWeapon = "MCX_Virtus_300_6_g_s4";
		rhs_grip1_change = "MCX_Virtus_300_6_g_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_g_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_g_s4_grip3";
	};
	class MCX_Virtus_300_6_g_s4_grip: MCX_Virtus_300_6_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_g_s4_grip2: MCX_Virtus_300_6_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_g_s4_grip3: MCX_Virtus_300_6_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_g_s5: MCX_Virtus_300_6_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\6gs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_9_g_s5";
		fold_wpn = "MCX_Virtus_300_6_g_s5_fold";
		baseWeapon = "MCX_Virtus_300_6_g_s5";
		rhs_grip1_change = "MCX_Virtus_300_6_g_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_g_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_g_s5_grip3";
	};
	class MCX_Virtus_300_6_g_s5_grip: MCX_Virtus_300_6_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_g_s5_grip2: MCX_Virtus_300_6_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_g_s5_grip3: MCX_Virtus_300_6_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_g_s6: MCX_Virtus_300_6_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\6gs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_9_g_s6";
		fold_wpn = "MCX_Virtus_300_6_g_s6_fold";
		baseWeapon = "MCX_Virtus_300_6_g_s6";
		rhs_grip1_change = "MCX_Virtus_300_6_g_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_g_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_g_s6_grip3";
	};
	class MCX_Virtus_300_6_g_s6_grip: MCX_Virtus_300_6_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_g_s6_grip2: MCX_Virtus_300_6_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_g_s6_grip3: MCX_Virtus_300_6_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s1: MCX_Virtus_300_6_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\6fs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_9_f_s1";
		fold_wpn = "MCX_Virtus_300_6_f_s1_fold";
		baseWeapon = "MCX_Virtus_300_6_f_s1";
		rhs_grip1_change = "MCX_Virtus_300_6_f_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_f_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_f_s1_grip3";
	};
	class MCX_Virtus_300_6_f_s1_grip: MCX_Virtus_300_6_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s1_grip2: MCX_Virtus_300_6_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_f_s1_grip3: MCX_Virtus_300_6_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s2: MCX_Virtus_300_6_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\6fs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_9_f_s2";
		fold_wpn = "MCX_Virtus_300_6_f_s2_fold";
		baseWeapon = "MCX_Virtus_300_6_f_s2";
		rhs_grip1_change = "MCX_Virtus_300_6_f_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_f_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_f_s2_grip3";
	};
	class MCX_Virtus_300_6_f_s2_grip: MCX_Virtus_300_6_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s2_grip2: MCX_Virtus_300_6_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_f_s2_grip3: MCX_Virtus_300_6_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s3: MCX_Virtus_300_6_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\6fs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_9_f_s3";
		fold_wpn = "MCX_Virtus_300_6_f_s3_fold";
		baseWeapon = "MCX_Virtus_300_6_f_s3";
		rhs_grip1_change = "MCX_Virtus_300_6_f_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_f_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_f_s3_grip3";
	};
	class MCX_Virtus_300_6_f_s3_grip: MCX_Virtus_300_6_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s3_grip2: MCX_Virtus_300_6_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_f_s3_grip3: MCX_Virtus_300_6_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s4: MCX_Virtus_300_6_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\6fs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_9_f_s4";
		fold_wpn = "MCX_Virtus_300_6_f_s4_fold";
		baseWeapon = "MCX_Virtus_300_6_f_s4";
		rhs_grip1_change = "MCX_Virtus_300_6_f_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_f_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_f_s4_grip3";
	};
	class MCX_Virtus_300_6_f_s4_grip: MCX_Virtus_300_6_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s4_grip2: MCX_Virtus_300_6_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_f_s4_grip3: MCX_Virtus_300_6_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s5: MCX_Virtus_300_6_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\6fs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_9_f_s5";
		fold_wpn = "MCX_Virtus_300_6_f_s5_fold";
		baseWeapon = "MCX_Virtus_300_6_f_s5";
		rhs_grip1_change = "MCX_Virtus_300_6_f_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_f_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_f_s5_grip3";
	};
	class MCX_Virtus_300_6_f_s5_grip: MCX_Virtus_300_6_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s5_grip2: MCX_Virtus_300_6_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_f_s5_grip3: MCX_Virtus_300_6_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s6: MCX_Virtus_300_6_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\6fs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_9_f_s6";
		fold_wpn = "MCX_Virtus_300_6_f_s6_fold";
		baseWeapon = "MCX_Virtus_300_6_f_s6";
		rhs_grip1_change = "MCX_Virtus_300_6_f_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_f_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_f_s6_grip3";
	};
	class MCX_Virtus_300_6_f_s6_grip: MCX_Virtus_300_6_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_f_s6_grip2: MCX_Virtus_300_6_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_f_s6_grip3: MCX_Virtus_300_6_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s1: MCX_Virtus_300_6_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\6bs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_9_b_s1";
		fold_wpn = "MCX_Virtus_300_6_b_s1_fold";
		baseWeapon = "MCX_Virtus_300_6_b_s1";
		rhs_grip1_change = "MCX_Virtus_300_6_b_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_b_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_b_s1_grip3";
	};
	class MCX_Virtus_300_6_b_s1_grip: MCX_Virtus_300_6_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s1_grip2: MCX_Virtus_300_6_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_b_s1_grip3: MCX_Virtus_300_6_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s2: MCX_Virtus_300_6_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\6bs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_9_b_s1";
		fold_wpn = "MCX_Virtus_300_6_b_s2_fold";
		baseWeapon = "MCX_Virtus_300_6_b_s2";
		rhs_grip1_change = "MCX_Virtus_300_6_b_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_b_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_b_s2_grip3";
	};
	class MCX_Virtus_300_6_b_s2_grip: MCX_Virtus_300_6_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s2_grip2: MCX_Virtus_300_6_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_b_s2_grip3: MCX_Virtus_300_6_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s3: MCX_Virtus_300_6_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\6bs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_9_b_s3";
		fold_wpn = "MCX_Virtus_300_6_b_s3_fold";
		baseWeapon = "MCX_Virtus_300_6_b_s3";
		rhs_grip1_change = "MCX_Virtus_300_6_b_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_b_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_b_s3_grip3";
	};
	class MCX_Virtus_300_6_b_s3_grip: MCX_Virtus_300_6_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s3_grip2: MCX_Virtus_300_6_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_b_s3_grip3: MCX_Virtus_300_6_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s4: MCX_Virtus_300_6_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\6bs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_9_b_s4";
		fold_wpn = "MCX_Virtus_300_6_b_s4_fold";
		baseWeapon = "MCX_Virtus_300_6_b_s4";
		rhs_grip1_change = "MCX_Virtus_300_6_b_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_b_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_b_s4_grip3";
	};
	class MCX_Virtus_300_6_b_s4_grip: MCX_Virtus_300_6_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s4_grip2: MCX_Virtus_300_6_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_b_s4_grip3: MCX_Virtus_300_6_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s5: MCX_Virtus_300_6_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\6bs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_9_b_s5";
		fold_wpn = "MCX_Virtus_300_6_b_s5_fold";
		baseWeapon = "MCX_Virtus_300_6_b_s5";
		rhs_grip1_change = "MCX_Virtus_300_6_b_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_b_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_b_s5_grip3";
	};
	class MCX_Virtus_300_6_b_s5_grip: MCX_Virtus_300_6_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s5_grip2: MCX_Virtus_300_6_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_b_s5_grip3: MCX_Virtus_300_6_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s6: MCX_Virtus_300_6_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 6.75 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\6bs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_9_b_s6";
		fold_wpn = "MCX_Virtus_300_6_b_s6_fold";
		baseWeapon = "MCX_Virtus_300_6_b_s6";
		rhs_grip1_change = "MCX_Virtus_300_6_b_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_6_b_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_6_b_s6_grip3";
	};
	class MCX_Virtus_300_6_b_s6_grip: MCX_Virtus_300_6_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_6_b_s6_grip2: MCX_Virtus_300_6_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_6_b_s6_grip3: MCX_Virtus_300_6_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s1: MCX_Virtus_300_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Telescoping Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\9gs1.paa";
		model = "\MCX_Virtus\mesh\mcx_300_9.p3d";
		dexterity = 2.4;
		inertia = 0.52;
		initSpeed = -0.923;
		AB_barrelTwist = 5;
		AB_barrelLength = 9;
		ACE_barrelTwist = 254;
		ACE_barrelLength = 228.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 69.5;
		};
		class Single: Single
		{
			reloadTime = 0.075;
			dispersion = 0.00062;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.075;
			dispersion = 0.00202;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Virtus_300_9_g_s1_fold";
		baseWeapon = "MCX_Virtus_300_9_g_s1";
		bc_convert = "MCX_Virtus_11_g_s1";
		rhs_grip1_change = "MCX_Virtus_300_9_g_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_g_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_g_s1_grip3";
	};
	class MCX_Virtus_300_9_g_s1_grip: MCX_Virtus_300_9_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s1_grip2: MCX_Virtus_300_9_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_g_s1_grip3: MCX_Virtus_300_9_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s2: MCX_Virtus_300_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\9gs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_g_s2";
		fold_wpn = "MCX_Virtus_300_9_g_s2_fold";
		baseWeapon = "MCX_Virtus_300_9_g_s2";
		rhs_grip1_change = "MCX_Virtus_300_9_g_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_g_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_g_s2_grip3";
	};
	class MCX_Virtus_300_9_g_s2_grip: MCX_Virtus_300_9_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s2_grip2: MCX_Virtus_300_9_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_g_s2_grip3: MCX_Virtus_300_9_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s3: MCX_Virtus_300_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\9gs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_11_g_s3";
		fold_wpn = "MCX_Virtus_300_9_g_s3_fold";
		baseWeapon = "MCX_Virtus_300_9_g_s3";
		rhs_grip1_change = "MCX_Virtus_300_9_g_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_g_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_g_s3_grip3";
	};
	class MCX_Virtus_300_9_g_s3_grip: MCX_Virtus_300_9_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s3_grip2: MCX_Virtus_300_9_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_g_s3_grip3: MCX_Virtus_300_9_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s4: MCX_Virtus_300_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\9gs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_11_g_s4";
		fold_wpn = "MCX_Virtus_300_9_g_s4_fold";
		baseWeapon = "MCX_Virtus_300_9_g_s4";
		rhs_grip1_change = "MCX_Virtus_300_9_g_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_g_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_g_s4_grip3";
	};
	class MCX_Virtus_300_9_g_s4_grip: MCX_Virtus_300_9_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s4_grip2: MCX_Virtus_300_9_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_g_s4_grip3: MCX_Virtus_300_9_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s5: MCX_Virtus_300_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\9gs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_g_s5";
		fold_wpn = "MCX_Virtus_300_9_g_s5_fold";
		baseWeapon = "MCX_Virtus_300_9_g_s5";
		rhs_grip1_change = "MCX_Virtus_300_9_g_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_g_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_g_s5_grip3";
	};
	class MCX_Virtus_300_9_g_s5_grip: MCX_Virtus_300_9_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s5_grip2: MCX_Virtus_300_9_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_g_s5_grip3: MCX_Virtus_300_9_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s6: MCX_Virtus_300_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\9gs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10sd_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_11_g_s6";
		fold_wpn = "MCX_Virtus_300_9_g_s6_fold";
		baseWeapon = "MCX_Virtus_300_9_g_s6";
		rhs_grip1_change = "MCX_Virtus_300_9_g_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_g_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_g_s6_grip3";
	};
	class MCX_Virtus_300_9_g_s6_grip: MCX_Virtus_300_9_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_g_s6_grip2: MCX_Virtus_300_9_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_g_s6_grip3: MCX_Virtus_300_9_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s1: MCX_Virtus_300_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\9fs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_11_f_s1";
		fold_wpn = "MCX_Virtus_300_9_f_s1_fold";
		baseWeapon = "MCX_Virtus_300_9_f_s1";
		rhs_grip1_change = "MCX_Virtus_300_9_f_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_f_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_f_s1_grip3";
	};
	class MCX_Virtus_300_9_f_s1_grip: MCX_Virtus_300_9_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s1_grip2: MCX_Virtus_300_9_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_f_s1_grip3: MCX_Virtus_300_9_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s2: MCX_Virtus_300_9_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\9fs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_f_s2";
		fold_wpn = "MCX_Virtus_300_9_f_s2_fold";
		baseWeapon = "MCX_Virtus_300_9_f_s2";
		rhs_grip1_change = "MCX_Virtus_300_9_f_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_f_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_f_s2_grip3";
	};
	class MCX_Virtus_300_9_f_s2_grip: MCX_Virtus_300_9_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s2_grip2: MCX_Virtus_300_9_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_f_s2_grip3: MCX_Virtus_300_9_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s3: MCX_Virtus_300_9_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\9fs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_11_f_s3";
		fold_wpn = "MCX_Virtus_300_9_f_s3_fold";
		baseWeapon = "MCX_Virtus_300_9_f_s3";
		rhs_grip1_change = "MCX_Virtus_300_9_f_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_f_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_f_s3_grip3";
	};
	class MCX_Virtus_300_9_f_s3_grip: MCX_Virtus_300_9_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s3_grip2: MCX_Virtus_300_9_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_f_s3_grip3: MCX_Virtus_300_9_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s4: MCX_Virtus_300_9_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\9fs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_11_f_s4";
		fold_wpn = "MCX_Virtus_300_9_f_s4_fold";
		baseWeapon = "MCX_Virtus_300_9_f_s4";
		rhs_grip1_change = "MCX_Virtus_300_9_f_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_f_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_f_s4_grip3";
	};
	class MCX_Virtus_300_9_f_s4_grip: MCX_Virtus_300_9_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s4_grip2: MCX_Virtus_300_9_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_f_s4_grip3: MCX_Virtus_300_9_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s5: MCX_Virtus_300_9_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\9fs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_f_s5";
		fold_wpn = "MCX_Virtus_300_9_f_s5_fold";
		baseWeapon = "MCX_Virtus_300_9_f_s5";
		rhs_grip1_change = "MCX_Virtus_300_9_f_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_f_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_f_s5_grip3";
	};
	class MCX_Virtus_300_9_f_s5_grip: MCX_Virtus_300_9_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s5_grip2: MCX_Virtus_300_9_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_f_s5_grip3: MCX_Virtus_300_9_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s6: MCX_Virtus_300_9_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\9fs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10sd_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_11_f_s6";
		fold_wpn = "MCX_Virtus_300_9_f_s6_fold";
		baseWeapon = "MCX_Virtus_300_9_f_s6";
		rhs_grip1_change = "MCX_Virtus_300_9_f_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_f_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_f_s6_grip3";
	};
	class MCX_Virtus_300_9_f_s6_grip: MCX_Virtus_300_9_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_f_s6_grip2: MCX_Virtus_300_9_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_f_s6_grip3: MCX_Virtus_300_9_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s1: MCX_Virtus_300_9_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\9bs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_11_b_s1";
		fold_wpn = "MCX_Virtus_300_9_b_s1_fold";
		baseWeapon = "MCX_Virtus_300_9_b_s1";
		rhs_grip1_change = "MCX_Virtus_300_9_b_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_b_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_b_s1_grip3";
	};
	class MCX_Virtus_300_9_b_s1_grip: MCX_Virtus_300_9_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s1_grip2: MCX_Virtus_300_9_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_b_s1_grip3: MCX_Virtus_300_9_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s2: MCX_Virtus_300_9_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\9bs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_b_s1";
		fold_wpn = "MCX_Virtus_300_9_b_s2_fold";
		baseWeapon = "MCX_Virtus_300_9_b_s2";
		rhs_grip1_change = "MCX_Virtus_300_9_b_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_b_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_b_s2_grip3";
	};
	class MCX_Virtus_300_9_b_s2_grip: MCX_Virtus_300_9_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s2_grip2: MCX_Virtus_300_9_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_b_s2_grip3: MCX_Virtus_300_9_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s3: MCX_Virtus_300_9_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\9bs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_11_b_s3";
		fold_wpn = "MCX_Virtus_300_9_b_s3_fold";
		baseWeapon = "MCX_Virtus_300_9_b_s3";
		rhs_grip1_change = "MCX_Virtus_300_9_b_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_b_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_b_s3_grip3";
	};
	class MCX_Virtus_300_9_b_s3_grip: MCX_Virtus_300_9_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s3_grip2: MCX_Virtus_300_9_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_b_s3_grip3: MCX_Virtus_300_9_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s4: MCX_Virtus_300_9_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\9bs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_11_b_s4";
		fold_wpn = "MCX_Virtus_300_9_b_s4_fold";
		baseWeapon = "MCX_Virtus_300_9_b_s4";
		rhs_grip1_change = "MCX_Virtus_300_9_b_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_b_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_b_s4_grip3";
	};
	class MCX_Virtus_300_9_b_s4_grip: MCX_Virtus_300_9_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s4_grip2: MCX_Virtus_300_9_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_b_s4_grip3: MCX_Virtus_300_9_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s5: MCX_Virtus_300_9_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\9bs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_b_s5";
		fold_wpn = "MCX_Virtus_300_9_b_s5_fold";
		baseWeapon = "MCX_Virtus_300_9_b_s5";
		rhs_grip1_change = "MCX_Virtus_300_9_b_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_b_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_b_s5_grip3";
	};
	class MCX_Virtus_300_9_b_s5_grip: MCX_Virtus_300_9_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s5_grip2: MCX_Virtus_300_9_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_b_s5_grip3: MCX_Virtus_300_9_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s6: MCX_Virtus_300_9_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 9 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\9bs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10sd_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_11_b_s6";
		fold_wpn = "MCX_Virtus_300_9_b_s6_fold";
		baseWeapon = "MCX_Virtus_300_9_b_s6";
		rhs_grip1_change = "MCX_Virtus_300_9_b_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_9_b_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_9_b_s6_grip3";
	};
	class MCX_Virtus_300_9_b_s6_grip: MCX_Virtus_300_9_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_9_b_s6_grip2: MCX_Virtus_300_9_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp11.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_9_b_s6_grip3: MCX_Virtus_300_9_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s1: MCX_Virtus_300_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Telescoping Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\11gs1.paa";
		model = "\MCX_Virtus\mesh\mcx_300_11.p3d";
		dexterity = 2;
		inertia = 0.58;
		initSpeed = -0.95;
		AB_barrelTwist = 5;
		AB_barrelLength = 11.5;
		ACE_barrelTwist = 254;
		ACE_barrelLength = 292.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 72;
		};
		class Single: Single
		{
			reloadTime = 0.078;
			dispersion = 0.00057;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.078;
			dispersion = 0.001866;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Virtus_300_11_g_s1_fold";
		baseWeapon = "MCX_Virtus_300_11_g_s1";
		bc_convert = "MCX_Virtus_14_g_s1_grip";
		rhs_grip1_change = "MCX_Virtus_300_11_g_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_g_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_g_s1_grip3";
	};
	class MCX_Virtus_300_11_g_s1_grip: MCX_Virtus_300_11_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s1_grip2: MCX_Virtus_300_11_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_g_s1_grip3: MCX_Virtus_300_11_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s2: MCX_Virtus_300_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\11gs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_g_s2";
		fold_wpn = "MCX_Virtus_300_11_g_s2_fold";
		baseWeapon = "MCX_Virtus_300_11_g_s2";
		rhs_grip1_change = "MCX_Virtus_300_11_g_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_g_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_g_s2_grip3";
	};
	class MCX_Virtus_300_11_g_s2_grip: MCX_Virtus_300_11_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s2_grip2: MCX_Virtus_300_11_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_g_s2_grip3: MCX_Virtus_300_11_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s3: MCX_Virtus_300_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\11gs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_14_g_s3";
		fold_wpn = "MCX_Virtus_300_11_g_s3_fold";
		baseWeapon = "MCX_Virtus_300_11_g_s3";
		rhs_grip1_change = "MCX_Virtus_300_11_g_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_g_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_g_s3_grip3";
	};
	class MCX_Virtus_300_11_g_s3_grip: MCX_Virtus_300_11_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s3_grip2: MCX_Virtus_300_11_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_g_s3_grip3: MCX_Virtus_300_11_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s4: MCX_Virtus_300_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\11gs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_14_g_s4";
		fold_wpn = "MCX_Virtus_300_11_g_s4_fold";
		baseWeapon = "MCX_Virtus_300_11_g_s4";
		rhs_grip1_change = "MCX_Virtus_300_11_g_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_g_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_g_s4_grip3";
	};
	class MCX_Virtus_300_11_g_s4_grip: MCX_Virtus_300_11_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s4_grip2: MCX_Virtus_300_11_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_g_s4_grip3: MCX_Virtus_300_11_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s5: MCX_Virtus_300_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\11gs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_g_s5";
		fold_wpn = "MCX_Virtus_300_11_g_s5_fold";
		baseWeapon = "MCX_Virtus_300_11_g_s5";
		rhs_grip1_change = "MCX_Virtus_300_11_g_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_g_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_g_s5_grip3";
	};
	class MCX_Virtus_300_11_g_s5_grip: MCX_Virtus_300_11_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s5_grip2: MCX_Virtus_300_11_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_g_s5_grip3: MCX_Virtus_300_11_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s6: MCX_Virtus_300_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\11gs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_14_g_s6";
		fold_wpn = "MCX_Virtus_300_11_g_s6_fold";
		baseWeapon = "MCX_Virtus_300_11_g_s6";
		rhs_grip1_change = "MCX_Virtus_300_11_g_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_g_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_g_s6_grip3";
	};
	class MCX_Virtus_300_11_g_s6_grip: MCX_Virtus_300_11_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_g_s6_grip2: MCX_Virtus_300_11_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_g_s6_grip3: MCX_Virtus_300_11_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s1: MCX_Virtus_300_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\11fs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_14_f_s1";
		fold_wpn = "MCX_Virtus_300_11_f_s1_fold";
		baseWeapon = "MCX_Virtus_300_11_f_s1";
		rhs_grip1_change = "MCX_Virtus_300_11_f_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_f_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_f_s1_grip3";
	};
	class MCX_Virtus_300_11_f_s1_grip: MCX_Virtus_300_11_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s1_grip2: MCX_Virtus_300_11_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_f_s1_grip3: MCX_Virtus_300_11_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s2: MCX_Virtus_300_11_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\11fs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_f_s2";
		fold_wpn = "MCX_Virtus_300_11_f_s2_fold";
		baseWeapon = "MCX_Virtus_300_11_f_s2";
		rhs_grip1_change = "MCX_Virtus_300_11_f_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_f_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_f_s2_grip3";
	};
	class MCX_Virtus_300_11_f_s2_grip: MCX_Virtus_300_11_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s2_grip2: MCX_Virtus_300_11_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_f_s2_grip3: MCX_Virtus_300_11_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s3: MCX_Virtus_300_11_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\11fs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_14_f_s3";
		fold_wpn = "MCX_Virtus_300_11_f_s3_fold";
		baseWeapon = "MCX_Virtus_300_11_f_s3";
		rhs_grip1_change = "MCX_Virtus_300_11_f_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_f_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_f_s3_grip3";
	};
	class MCX_Virtus_300_11_f_s3_grip: MCX_Virtus_300_11_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s3_grip2: MCX_Virtus_300_11_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_f_s3_grip3: MCX_Virtus_300_11_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s4: MCX_Virtus_300_11_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\11fs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_14_f_s4";
		fold_wpn = "MCX_Virtus_300_11_f_s4_fold";
		baseWeapon = "MCX_Virtus_300_11_f_s4";
		rhs_grip1_change = "MCX_Virtus_300_11_f_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_f_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_f_s4_grip3";
	};
	class MCX_Virtus_300_11_f_s4_grip: MCX_Virtus_300_11_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s4_grip2: MCX_Virtus_300_11_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_f_s4_grip3: MCX_Virtus_300_11_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s5: MCX_Virtus_300_11_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\11fs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_f_s5";
		fold_wpn = "MCX_Virtus_300_11_f_s5_fold";
		baseWeapon = "MCX_Virtus_300_11_f_s5";
		rhs_grip1_change = "MCX_Virtus_300_11_f_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_f_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_f_s5_grip3";
	};
	class MCX_Virtus_300_11_f_s5_grip: MCX_Virtus_300_11_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s5_grip2: MCX_Virtus_300_11_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_f_s5_grip3: MCX_Virtus_300_11_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s6: MCX_Virtus_300_11_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\11fs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_14_f_s6";
		fold_wpn = "MCX_Virtus_300_11_f_s6_fold";
		baseWeapon = "MCX_Virtus_300_11_f_s6";
		rhs_grip1_change = "MCX_Virtus_300_11_f_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_f_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_f_s6_grip3";
	};
	class MCX_Virtus_300_11_f_s6_grip: MCX_Virtus_300_11_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_f_s6_grip2: MCX_Virtus_300_11_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_f_s6_grip3: MCX_Virtus_300_11_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s1: MCX_Virtus_300_11_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\11bs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_14_b_s1";
		fold_wpn = "MCX_Virtus_300_11_b_s1_fold";
		baseWeapon = "MCX_Virtus_300_11_b_s1";
		rhs_grip1_change = "MCX_Virtus_300_11_b_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_b_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_b_s1_grip3";
	};
	class MCX_Virtus_300_11_b_s1_grip: MCX_Virtus_300_11_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s1_grip2: MCX_Virtus_300_11_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_b_s1_grip3: MCX_Virtus_300_11_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s2: MCX_Virtus_300_11_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\11bs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_b_s1";
		fold_wpn = "MCX_Virtus_300_11_b_s2_fold";
		baseWeapon = "MCX_Virtus_300_11_b_s2";
		rhs_grip1_change = "MCX_Virtus_300_11_b_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_b_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_b_s2_grip3";
	};
	class MCX_Virtus_300_11_b_s2_grip: MCX_Virtus_300_11_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s2_grip2: MCX_Virtus_300_11_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_b_s2_grip3: MCX_Virtus_300_11_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s3: MCX_Virtus_300_11_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\11bs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_14_b_s3";
		fold_wpn = "MCX_Virtus_300_11_b_s3_fold";
		baseWeapon = "MCX_Virtus_300_11_b_s3";
		rhs_grip1_change = "MCX_Virtus_300_11_b_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_b_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_b_s3_grip3";
	};
	class MCX_Virtus_300_11_b_s3_grip: MCX_Virtus_300_11_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s3_grip2: MCX_Virtus_300_11_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_b_s3_grip3: MCX_Virtus_300_11_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s4: MCX_Virtus_300_11_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\11bs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_14_b_s4";
		fold_wpn = "MCX_Virtus_300_11_b_s4_fold";
		baseWeapon = "MCX_Virtus_300_11_b_s4";
		rhs_grip1_change = "MCX_Virtus_300_11_b_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_b_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_b_s4_grip3";
	};
	class MCX_Virtus_300_11_b_s4_grip: MCX_Virtus_300_11_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s4_grip2: MCX_Virtus_300_11_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_b_s4_grip3: MCX_Virtus_300_11_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s5: MCX_Virtus_300_11_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\11bs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_b_s5";
		fold_wpn = "MCX_Virtus_300_11_b_s5_fold";
		baseWeapon = "MCX_Virtus_300_11_b_s5";
		rhs_grip1_change = "MCX_Virtus_300_11_b_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_b_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_b_s5_grip3";
	};
	class MCX_Virtus_300_11_b_s5_grip: MCX_Virtus_300_11_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s5_grip2: MCX_Virtus_300_11_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_b_s5_grip3: MCX_Virtus_300_11_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s6: MCX_Virtus_300_11_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\11bs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_14_b_s6";
		fold_wpn = "MCX_Virtus_300_11_b_s6_fold";
		baseWeapon = "MCX_Virtus_300_11_b_s6";
		rhs_grip1_change = "MCX_Virtus_300_11_b_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_11_b_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_11_b_s6_grip3";
	};
	class MCX_Virtus_300_11_b_s6_grip: MCX_Virtus_300_11_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_11_b_s6_grip2: MCX_Virtus_300_11_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp14.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_11_b_s6_grip3: MCX_Virtus_300_11_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s1: MCX_Virtus_300_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Telescoping Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\14gs1.paa";
		model = "\MCX_Virtus\mesh\mcx_300_14.p3d";
		dexterity = 1.6;
		inertia = 0.61;
		initSpeed = -1;
		AB_barrelTwist = 5;
		AB_barrelLength = 14.5;
		ACE_barrelTwist = 254;
		ACE_barrelLength = 368.3;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 77;
		};
		class Single: Single
		{
			reloadTime = 0.08;
			dispersion = 0.00051;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.08;
			dispersion = 0.001566;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16sd_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Virtus_300_14_g_s1_fold";
		baseWeapon = "MCX_Virtus_300_14_g_s1";
		bc_convert = "MCX_Virtus_16_g_s1";
		rhs_grip1_change = "MCX_Virtus_300_14_g_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_g_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_g_s1_grip3";
	};
	class MCX_Virtus_300_14_g_s1_grip: MCX_Virtus_300_14_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s1_grip2: MCX_Virtus_300_14_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_g_s1_grip3: MCX_Virtus_300_14_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s2: MCX_Virtus_300_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\14gs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16sd_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_16_g_s2";
		fold_wpn = "MCX_Virtus_300_14_g_s2_fold";
		baseWeapon = "MCX_Virtus_300_14_g_s2";
		rhs_grip1_change = "MCX_Virtus_300_14_g_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_g_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_g_s2_grip3";
	};
	class MCX_Virtus_300_14_g_s2_grip: MCX_Virtus_300_14_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s2_grip2: MCX_Virtus_300_14_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_g_s2_grip3: MCX_Virtus_300_14_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s3: MCX_Virtus_300_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\14gs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16sd_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_16_g_s3";
		fold_wpn = "MCX_Virtus_300_14_g_s4_fold";
		baseWeapon = "MCX_Virtus_300_14_g_s3";
		rhs_grip1_change = "MCX_Virtus_300_14_g_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_g_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_g_s3_grip3";
	};
	class MCX_Virtus_300_14_g_s3_grip: MCX_Virtus_300_14_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s3_grip2: MCX_Virtus_300_14_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_g_s3_grip3: MCX_Virtus_300_14_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s4: MCX_Virtus_300_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\14gs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16sd_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_16_g_s4";
		fold_wpn = "MCX_Virtus_300_14_g_s4_fold";
		baseWeapon = "MCX_Virtus_300_14_g_s4";
		rhs_grip1_change = "MCX_Virtus_300_14_g_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_g_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_g_s4_grip3";
	};
	class MCX_Virtus_300_14_g_s4_grip: MCX_Virtus_300_14_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s4_grip2: MCX_Virtus_300_14_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_g_s4_grip3: MCX_Virtus_300_14_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s5: MCX_Virtus_300_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\14gs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16sd_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_16_g_s5";
		fold_wpn = "MCX_Virtus_300_14_g_s5_fold";
		baseWeapon = "MCX_Virtus_300_14_g_s5";
		rhs_grip1_change = "MCX_Virtus_300_14_g_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_g_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_g_s5_grip3";
	};
	class MCX_Virtus_300_14_g_s5_grip: MCX_Virtus_300_14_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s5_grip2: MCX_Virtus_300_14_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_g_s5_grip3: MCX_Virtus_300_14_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s6: MCX_Virtus_300_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\14gs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_16sd_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_16_g_s6";
		fold_wpn = "MCX_Virtus_300_14_g_s6_fold";
		baseWeapon = "MCX_Virtus_300_14_g_s6";
		rhs_grip1_change = "MCX_Virtus_300_14_g_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_g_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_g_s6_grip3";
	};
	class MCX_Virtus_300_14_g_s6_grip: MCX_Virtus_300_14_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_g_s6_grip2: MCX_Virtus_300_14_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_g_s6_grip3: MCX_Virtus_300_14_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s1: MCX_Virtus_300_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\14fs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16sd_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_16_f_s1";
		fold_wpn = "MCX_Virtus_300_14_f_s1_fold";
		baseWeapon = "MCX_Virtus_300_14_f_s1";
		rhs_grip1_change = "MCX_Virtus_300_14_f_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_f_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_f_s1_grip3";
	};
	class MCX_Virtus_300_14_f_s1_grip: MCX_Virtus_300_14_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s1_grip2: MCX_Virtus_300_14_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_f_s1_grip3: MCX_Virtus_300_14_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s2: MCX_Virtus_300_14_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\14fs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16sd_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_16_f_s2";
		fold_wpn = "MCX_Virtus_300_14_f_s2_fold";
		baseWeapon = "MCX_Virtus_300_14_f_s2";
		rhs_grip1_change = "MCX_Virtus_300_14_f_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_f_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_f_s2_grip3";
	};
	class MCX_Virtus_300_14_f_s2_grip: MCX_Virtus_300_14_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s2_grip2: MCX_Virtus_300_14_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_f_s2_grip3: MCX_Virtus_300_14_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s3: MCX_Virtus_300_14_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\14fs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16sd_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_16_f_s3";
		fold_wpn = "MCX_Virtus_300_14_f_s3_fold";
		baseWeapon = "MCX_Virtus_300_14_f_s3";
		rhs_grip1_change = "MCX_Virtus_300_14_f_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_f_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_f_s3_grip3";
	};
	class MCX_Virtus_300_14_f_s3_grip: MCX_Virtus_300_14_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s3_grip2: MCX_Virtus_300_14_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_f_s3_grip3: MCX_Virtus_300_14_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s4: MCX_Virtus_300_14_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\14fs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16sd_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_16_f_s4";
		fold_wpn = "MCX_Virtus_300_14_f_s4_fold";
		baseWeapon = "MCX_Virtus_300_14_f_s4";
		rhs_grip1_change = "MCX_Virtus_300_14_f_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_f_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_f_s4_grip3";
	};
	class MCX_Virtus_300_14_f_s4_grip: MCX_Virtus_300_14_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s4_grip2: MCX_Virtus_300_14_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_f_s4_grip3: MCX_Virtus_300_14_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s5: MCX_Virtus_300_14_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\14fs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16sd_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_16_f_s5";
		fold_wpn = "MCX_Virtus_300_14_f_s5_fold";
		baseWeapon = "MCX_Virtus_300_14_f_s5";
		rhs_grip1_change = "MCX_Virtus_300_14_f_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_f_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_f_s5_grip3";
	};
	class MCX_Virtus_300_14_f_s5_grip: MCX_Virtus_300_14_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s5_grip2: MCX_Virtus_300_14_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_f_s5_grip3: MCX_Virtus_300_14_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s6: MCX_Virtus_300_14_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\14fs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_16sd_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_16_f_s6";
		fold_wpn = "MCX_Virtus_300_14_f_s6_fold";
		baseWeapon = "MCX_Virtus_300_14_f_s6";
		rhs_grip1_change = "MCX_Virtus_300_14_f_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_f_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_f_s6_grip3";
	};
	class MCX_Virtus_300_14_f_s6_grip: MCX_Virtus_300_14_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_f_s6_grip2: MCX_Virtus_300_14_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_f_s6_grip3: MCX_Virtus_300_14_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s1: MCX_Virtus_300_14_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\14bs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16sd_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_16_b_s1";
		fold_wpn = "MCX_Virtus_300_14_b_s1_fold";
		baseWeapon = "MCX_Virtus_300_14_b_s1";
		rhs_grip1_change = "MCX_Virtus_300_14_b_s1_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_b_s1_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_b_s1_grip3";
	};
	class MCX_Virtus_300_14_b_s1_grip: MCX_Virtus_300_14_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s1_grip2: MCX_Virtus_300_14_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_b_s1_grip3: MCX_Virtus_300_14_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s2: MCX_Virtus_300_14_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\14bs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16sd_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_16_b_s1";
		fold_wpn = "MCX_Virtus_300_14_b_s2_fold";
		baseWeapon = "MCX_Virtus_300_14_b_s2";
		rhs_grip1_change = "MCX_Virtus_300_14_b_s2_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_b_s2_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_b_s2_grip3";
	};
	class MCX_Virtus_300_14_b_s2_grip: MCX_Virtus_300_14_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s2_grip2: MCX_Virtus_300_14_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_b_s2_grip3: MCX_Virtus_300_14_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s3: MCX_Virtus_300_14_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\14bs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16sd_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_16_b_s3";
		fold_wpn = "MCX_Virtus_300_14_b_s3_fold";
		baseWeapon = "MCX_Virtus_300_14_b_s3";
		rhs_grip1_change = "MCX_Virtus_300_14_b_s3_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_b_s3_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_b_s3_grip3";
	};
	class MCX_Virtus_300_14_b_s3_grip: MCX_Virtus_300_14_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s3_grip2: MCX_Virtus_300_14_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_b_s3_grip3: MCX_Virtus_300_14_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s4: MCX_Virtus_300_14_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\14bs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16sd_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_16_b_s4";
		fold_wpn = "MCX_Virtus_300_14_b_s4_fold";
		baseWeapon = "MCX_Virtus_300_14_b_s4";
		rhs_grip1_change = "MCX_Virtus_300_14_b_s4_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_b_s4_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_b_s4_grip3";
	};
	class MCX_Virtus_300_14_b_s4_grip: MCX_Virtus_300_14_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s4_grip2: MCX_Virtus_300_14_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_b_s4_grip3: MCX_Virtus_300_14_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s5: MCX_Virtus_300_14_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\14bs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16sd_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_16_b_s5";
		fold_wpn = "MCX_Virtus_300_14_b_s5_fold";
		baseWeapon = "MCX_Virtus_300_14_b_s5";
		rhs_grip1_change = "MCX_Virtus_300_14_b_s5_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_b_s5_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_b_s5_grip3";
	};
	class MCX_Virtus_300_14_b_s5_grip: MCX_Virtus_300_14_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s5_grip2: MCX_Virtus_300_14_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_b_s5_grip3: MCX_Virtus_300_14_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s6: MCX_Virtus_300_14_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 14.5 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\14bs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_16sd_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_16sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_16_b_s6";
		fold_wpn = "MCX_Virtus_300_14_b_s6_fold";
		baseWeapon = "MCX_Virtus_300_14_b_s6";
		rhs_grip1_change = "MCX_Virtus_300_14_b_s6_grip";
		rhs_grip2_change = "MCX_Virtus_300_14_b_s6_grip2";
		rhs_grip3_change = "MCX_Virtus_300_14_b_s6_grip3";
	};
	class MCX_Virtus_300_14_b_s6_grip: MCX_Virtus_300_14_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_300_14_b_s6_grip2: MCX_Virtus_300_14_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_mp.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Virtus_300_14_b_s6_grip3: MCX_Virtus_300_14_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Virtus_14_gl_g_s1: MCX_Virtus_556_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Telescoping Stock (Grey)";
		descriptionShort = "Carbine<br/>Caliber: 5.56x45mm";
		picture = "\MCX_Virtus_cfg\ui\glgs1.paa";
		model = "\MCX_Virtus\mesh\mcx_14_gl.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\hand_m320.rtm"};
		dexterity = 1.3;
		inertia = 0.65;
		initSpeed = -0.98;
		AB_barrelTwist = 7;
		AB_barrelLength = 14.5;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368.3;
		muzzles[] = {"this","M320","Setting_L","BC_UnFold"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot{};
			class GripodSlot{};
			mass = 93;
		};
		class Single: Single
		{
			reloadTime = 0.08;
			dispersion = 0.0004;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00155;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_g_s1";
		fold_wpn = "MCX_Virtus_14_gl_g_s1_fold";
		baseWeapon = "MCX_Virtus_14_gl_g_s1";
	};
	class MCX_Virtus_14_gl_g_s2: MCX_Virtus_14_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\glgs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_g_s2";
		fold_wpn = "MCX_Virtus_14_gl_g_s2_fold";
		baseWeapon = "MCX_Virtus_14_gl_g_s2";
	};
	class MCX_Virtus_14_gl_g_s3: MCX_Virtus_14_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\glgs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_g_s3";
		fold_wpn = "MCX_Virtus_14_gl_g_s3_fold";
		baseWeapon = "MCX_Virtus_14_gl_g_s3";
	};
	class MCX_Virtus_14_gl_g_s4: MCX_Virtus_14_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\glgs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_g_s4";
		fold_wpn = "MCX_Virtus_14_gl_g_s4_fold";
		baseWeapon = "MCX_Virtus_14_gl_g_s4";
	};
	class MCX_Virtus_14_gl_g_s5: MCX_Virtus_14_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\glgs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_g_s5";
		fold_wpn = "MCX_Virtus_14_gl_g_s5_fold";
		baseWeapon = "MCX_Virtus_14_gl_g_s5";
	};
	class MCX_Virtus_14_gl_g_s6: MCX_Virtus_14_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\glgs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_11_gl_g_s6";
		fold_wpn = "MCX_Virtus_14_gl_g_s6_fold";
		baseWeapon = "MCX_Virtus_14_gl_g_s6";
	};
	class MCX_Virtus_14_gl_f_s1: MCX_Virtus_14_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\glfs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_f_s1";
		fold_wpn = "MCX_Virtus_14_gl_f_s1_fold";
		baseWeapon = "MCX_Virtus_14_gl_f_s1";
	};
	class MCX_Virtus_14_gl_f_s2: MCX_Virtus_14_gl_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\glfs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_f_s2";
		fold_wpn = "MCX_Virtus_14_gl_f_s2_fold";
		baseWeapon = "MCX_Virtus_14_gl_f_s2";
	};
	class MCX_Virtus_14_gl_f_s3: MCX_Virtus_14_gl_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\glfs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_f_s3";
		fold_wpn = "MCX_Virtus_14_gl_f_s3_fold";
		baseWeapon = "MCX_Virtus_14_gl_f_s3";
	};
	class MCX_Virtus_14_gl_f_s4: MCX_Virtus_14_gl_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\glfs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_f_s4";
		fold_wpn = "MCX_Virtus_14_gl_f_s4_fold";
		baseWeapon = "MCX_Virtus_14_gl_f_s4";
	};
	class MCX_Virtus_14_gl_f_s5: MCX_Virtus_14_gl_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\glfs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_f_s5";
		fold_wpn = "MCX_Virtus_14_gl_f_s5_fold";
		baseWeapon = "MCX_Virtus_14_gl_f_s5";
	};
	class MCX_Virtus_14_gl_f_s6: MCX_Virtus_14_gl_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\glfs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_11_gl_f_s6";
		fold_wpn = "MCX_Virtus_14_gl_f_s6_fold";
		baseWeapon = "MCX_Virtus_14_gl_f_s6";
	};
	class MCX_Virtus_14_gl_b_s1: MCX_Virtus_14_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\glbs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_b_s1";
		fold_wpn = "MCX_Virtus_14_gl_b_s1_fold";
		baseWeapon = "MCX_Virtus_14_gl_b_s1";
	};
	class MCX_Virtus_14_gl_b_s2: MCX_Virtus_14_gl_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\glbs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_b_s2";
		fold_wpn = "MCX_Virtus_14_gl_b_s2_fold";
		baseWeapon = "MCX_Virtus_14_gl_b_s2";
	};
	class MCX_Virtus_14_gl_b_s3: MCX_Virtus_14_gl_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\glbs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_b_s3";
		fold_wpn = "MCX_Virtus_14_gl_b_s3_fold";
		baseWeapon = "MCX_Virtus_14_gl_b_s3";
	};
	class MCX_Virtus_14_gl_b_s4: MCX_Virtus_14_gl_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\glbs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_b_s4";
		fold_wpn = "MCX_Virtus_14_gl_b_s4_fold";
		baseWeapon = "MCX_Virtus_14_gl_b_s4";
	};
	class MCX_Virtus_14_gl_b_s5: MCX_Virtus_14_gl_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\glbs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_gl_b_s5";
		fold_wpn = "MCX_Virtus_14_gl_b_s5_fold";
		baseWeapon = "MCX_Virtus_14_gl_b_s5";
	};
	class MCX_Virtus_14_gl_b_s6: MCX_Virtus_14_gl_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 14.5 M320 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\glbs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_11_gl_b_s6";
		fold_wpn = "MCX_Virtus_14_gl_b_s6_fold";
		baseWeapon = "MCX_Virtus_14_gl_b_s6";
	};
	class MCX_Virtus_11_six12_g_s1: MCX_Virtus_556_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Telescoping Stock (Grey)";
		descriptionShort = "Carbine<br/>Caliber: 5.56x45mm";
		picture = "\MCX_Virtus_cfg\ui\sixgs1.paa";
		model = "\MCX_Virtus\mesh\mcx_11_six12.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\hand_six12.rtm"};
		muzzles[] = {"this","BC_SIX12","Setting_L","BC_UnFold"};
		dexterity = 1.35;
		inertia = 0.63;
		initSpeed = -0.93;
		AB_barrelTwist = 7;
		AB_barrelLength = 11.5;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 292.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot{};
			class GripodSlot{};
			mass = 90;
		};
		class Single: Single
		{
			reloadTime = 0.075;
			dispersion = 0.0005;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.075;
			dispersion = 0.0017;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_g_s1";
		fold_wpn = "MCX_Virtus_11_six12_g_s1_fold";
		baseWeapon = "MCX_Virtus_11_six12_g_s1";
	};
	class MCX_Virtus_11_six12_g_s2: MCX_Virtus_11_six12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\sixgs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_g_s2";
		fold_wpn = "MCX_Virtus_11_six12_g_s2_fold";
		baseWeapon = "MCX_Virtus_11_six12_g_s2";
	};
	class MCX_Virtus_11_six12_g_s3: MCX_Virtus_11_six12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\sixgs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_g_s3";
		fold_wpn = "MCX_Virtus_11_six12_g_s3_fold";
		baseWeapon = "MCX_Virtus_11_six12_g_s3";
	};
	class MCX_Virtus_11_six12_g_s4: MCX_Virtus_11_six12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\sixgs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_g_s4";
		fold_wpn = "MCX_Virtus_11_six12_g_s4_fold";
		baseWeapon = "MCX_Virtus_11_six12_g_s4";
	};
	class MCX_Virtus_11_six12_g_s5: MCX_Virtus_11_six12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\sixgs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_g_s5";
		fold_wpn = "MCX_Virtus_11_six12_g_s5_fold";
		baseWeapon = "MCX_Virtus_11_six12_g_s5";
	};
	class MCX_Virtus_11_six12_g_s6: MCX_Virtus_11_six12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\sixgs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_10_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_11_six12_g_s6";
		fold_wpn = "MCX_Virtus_11_six12_g_s6_fold";
		baseWeapon = "MCX_Virtus_11_six12_g_s6";
	};
	class MCX_Virtus_11_six12_f_s1: MCX_Virtus_11_six12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\sixfs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_f_s1";
		fold_wpn = "MCX_Virtus_11_six12_f_s1_fold";
		baseWeapon = "MCX_Virtus_11_six12_f_s1";
	};
	class MCX_Virtus_11_six12_f_s2: MCX_Virtus_11_six12_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\sixfs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_f_s2";
		fold_wpn = "MCX_Virtus_11_six12_f_s2_fold";
		baseWeapon = "MCX_Virtus_11_six12_f_s2";
	};
	class MCX_Virtus_11_six12_f_s3: MCX_Virtus_11_six12_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\sixfs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_f_s3";
		fold_wpn = "MCX_Virtus_11_six12_f_s3_fold";
		baseWeapon = "MCX_Virtus_11_six12_f_s3";
	};
	class MCX_Virtus_11_six12_f_s4: MCX_Virtus_11_six12_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\sixfs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_f_s4";
		fold_wpn = "MCX_Virtus_11_six12_f_s4_fold";
		baseWeapon = "MCX_Virtus_11_six12_f_s4";
	};
	class MCX_Virtus_11_six12_f_s5: MCX_Virtus_11_six12_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\sixfs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_f_s5";
		fold_wpn = "MCX_Virtus_11_six12_f_s5_fold";
		baseWeapon = "MCX_Virtus_11_six12_f_s5";
	};
	class MCX_Virtus_11_six12_f_s6: MCX_Virtus_11_six12_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\sixfs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_10_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_11_six12_f_s6";
		fold_wpn = "MCX_Virtus_11_six12_f_s6_fold";
		baseWeapon = "MCX_Virtus_11_six12_f_s6";
	};
	class MCX_Virtus_11_six12_b_s1: MCX_Virtus_11_six12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\sixbs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_b_s1";
		fold_wpn = "MCX_Virtus_11_six12_b_s1_fold";
		baseWeapon = "MCX_Virtus_11_six12_b_s1";
	};
	class MCX_Virtus_11_six12_b_s2: MCX_Virtus_11_six12_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\sixbs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_b_s2";
		fold_wpn = "MCX_Virtus_11_six12_b_s2_fold";
		baseWeapon = "MCX_Virtus_11_six12_b_s2";
	};
	class MCX_Virtus_11_six12_b_s3: MCX_Virtus_11_six12_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\sixbs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_b_s3";
		fold_wpn = "MCX_Virtus_11_six12_b_s3_fold";
		baseWeapon = "MCX_Virtus_11_six12_b_s3";
	};
	class MCX_Virtus_11_six12_b_s4: MCX_Virtus_11_six12_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\sixbs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_b_s4";
		fold_wpn = "MCX_Virtus_11_six12_b_s4_fold";
		baseWeapon = "MCX_Virtus_11_six12_b_s4";
	};
	class MCX_Virtus_11_six12_b_s5: MCX_Virtus_11_six12_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\sixbs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_300_11_six12_b_s5";
		fold_wpn = "MCX_Virtus_11_six12_b_s5_fold";
		baseWeapon = "MCX_Virtus_11_six12_b_s5";
	};
	class MCX_Virtus_11_six12_b_s6: MCX_Virtus_11_six12_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Virtus 11.5 SIX12 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\sixbs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_10_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_10.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_300_11_six12_b_s6";
		fold_wpn = "MCX_Virtus_11_six12_b_s6_fold";
		baseWeapon = "MCX_Virtus_11_six12_b_s6";
	};
	class MCX_Virtus_300_11_SIX12_g_s1: MCX_Virtus_300_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Telescoping Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\sixgs1.paa";
		model = "\MCX_Virtus\mesh\mcx_300_11_six12.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\hand_six12.rtm"};
		muzzles[] = {"this","BC_SIX12","Setting_L","BC_UnFold"};
		dexterity = 1.45;
		inertia = 0.65;
		initSpeed = -0.95;
		AB_barrelTwist = 5;
		AB_barrelLength = 11.5;
		ACE_barrelTwist = 254;
		ACE_barrelLength = 292.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot{};
			class GripodSlot{};
			mass = 90;
		};
		class Single: Single
		{
			reloadTime = 0.078;
			dispersion = 0.00057;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.078;
			dispersion = 0.001866;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_11_six12_g_s1";
		fold_wpn = "MCX_Virtus_300_11_six12_g_s1_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_g_s1";
	};
	class MCX_Virtus_300_11_SIX12_g_s2: MCX_Virtus_300_11_SIX12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\sixgs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_six12_g_s2";
		fold_wpn = "MCX_Virtus_300_11_six12_g_s2_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_g_s2";
	};
	class MCX_Virtus_300_11_SIX12_g_s3: MCX_Virtus_300_11_SIX12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\sixgs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_11_six12_g_s3";
		fold_wpn = "MCX_Virtus_300_11_six12_g_s3_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_g_s3";
	};
	class MCX_Virtus_300_11_SIX12_g_s4: MCX_Virtus_300_11_SIX12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\sixgs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_11_six12_g_s4";
		fold_wpn = "MCX_Virtus_300_11_six12_g_s4_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_g_s4";
	};
	class MCX_Virtus_300_11_SIX12_g_s5: MCX_Virtus_300_11_SIX12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\sixgs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_six12_g_s5";
		fold_wpn = "MCX_Virtus_300_11_six12_g_s5_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_g_s5";
	};
	class MCX_Virtus_300_11_SIX12_g_s6: MCX_Virtus_300_11_SIX12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\sixgs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_11_six12_g_s6";
		fold_wpn = "MCX_Virtus_300_11_six12_g_s6_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_g_s6";
	};
	class MCX_Virtus_300_11_SIX12_f_s1: MCX_Virtus_300_11_SIX12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\sixfs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_11_six12_f_s1";
		fold_wpn = "MCX_Virtus_300_11_six12_f_s1_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_f_s1";
	};
	class MCX_Virtus_300_11_SIX12_f_s2: MCX_Virtus_300_11_SIX12_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\sixfs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_six12_f_s2";
		fold_wpn = "MCX_Virtus_300_11_six12_f_s2_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_f_s2";
	};
	class MCX_Virtus_300_11_SIX12_f_s3: MCX_Virtus_300_11_SIX12_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\sixfs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_11_six12_f_s3";
		fold_wpn = "MCX_Virtus_300_11_six12_f_s3_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_f_s3";
	};
	class MCX_Virtus_300_11_SIX12_f_s4: MCX_Virtus_300_11_SIX12_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\sixfs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_11_six12_f_s4";
		fold_wpn = "MCX_Virtus_300_11_six12_f_s4_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_f_s4";
	};
	class MCX_Virtus_300_11_SIX12_f_s5: MCX_Virtus_300_11_SIX12_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\sixfs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_six12_f_s5";
		fold_wpn = "MCX_Virtus_300_11_six12_f_s5_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_f_s5";
	};
	class MCX_Virtus_300_11_SIX12_f_s6: MCX_Virtus_300_11_SIX12_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\sixfs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_11_six12_f_s6";
		fold_wpn = "MCX_Virtus_300_11_six12_f_s6_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_f_s6";
	};
	class MCX_Virtus_300_11_SIX12_b_s1: MCX_Virtus_300_11_SIX12_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\sixbs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_11_six12_b_s1";
		fold_wpn = "MCX_Virtus_300_11_six12_b_s1_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_b_s1";
	};
	class MCX_Virtus_300_11_SIX12_b_s2: MCX_Virtus_300_11_SIX12_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\sixbs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_six12_b_s2";
		fold_wpn = "MCX_Virtus_300_11_six12_b_s2_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_b_s2";
	};
	class MCX_Virtus_300_11_SIX12_b_s3: MCX_Virtus_300_11_SIX12_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\sixbs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_11_six12_b_s3";
		fold_wpn = "MCX_Virtus_300_11_six12_b_s3_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_b_s3";
	};
	class MCX_Virtus_300_11_SIX12_b_s4: MCX_Virtus_300_11_SIX12_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\sixbs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_11_six12_b_s4";
		fold_wpn = "MCX_Virtus_300_11_six12_b_s4_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_b_s4";
	};
	class MCX_Virtus_300_11_SIX12_b_s5: MCX_Virtus_300_11_SIX12_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\sixbs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_11_six12_b_s5";
		fold_wpn = "MCX_Virtus_300_11_six12_b_s5_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_b_s5";
	};
	class MCX_Virtus_300_11_SIX12_b_s6: MCX_Virtus_300_11_SIX12_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 SIX12 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\sixbs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_11_six12_b_s6";
		fold_wpn = "MCX_Virtus_300_11_six12_b_s6_fold";
		baseWeapon = "MCX_Virtus_300_11_SIX12_b_s6";
	};
	class MCX_Virtus_300_11_gl_g_s1: MCX_Virtus_300_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Telescoping Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\glgs1.paa";
		model = "\MCX_Virtus\mesh\mcx_300_11_gl.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\hand_m320.rtm"};
		muzzles[] = {"this","M320","Setting_L","BC_UnFold"};
		dexterity = 1.4;
		inertia = 0.65;
		initSpeed = -0.95;
		AB_barrelTwist = 5;
		AB_barrelLength = 11.5;
		ACE_barrelTwist = 254;
		ACE_barrelLength = 292.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot{};
			class GripodSlot{};
			mass = 87;
		};
		class Single: Single
		{
			reloadTime = 0.078;
			dispersion = 0.00057;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.078;
			dispersion = 0.001866;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_14_gl_g_s1";
		fold_wpn = "MCX_Virtus_300_11_gl_g_s1_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_g_s1";
	};
	class MCX_Virtus_300_11_gl_g_s2: MCX_Virtus_300_11_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\glgs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_gl_g_s2";
		fold_wpn = "MCX_Virtus_300_11_gl_g_s2_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_g_s2";
	};
	class MCX_Virtus_300_11_gl_g_s3: MCX_Virtus_300_11_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\glgs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_14_gl_g_s3";
		fold_wpn = "MCX_Virtus_300_11_gl_g_s3_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_g_s3";
	};
	class MCX_Virtus_300_11_gl_g_s4: MCX_Virtus_300_11_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\glgs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_14_gl_g_s4";
		fold_wpn = "MCX_Virtus_300_11_gl_g_s4_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_g_s4";
	};
	class MCX_Virtus_300_11_gl_g_s5: MCX_Virtus_300_11_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\glgs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_gl_g_s5";
		fold_wpn = "MCX_Virtus_300_11_gl_g_s5_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_g_s5";
	};
	class MCX_Virtus_300_11_gl_g_s6: MCX_Virtus_300_11_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\glgs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_g_co.paa","mcx_virtus\tex\handguards\handguard_12sd_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_14_gl_g_s6";
		fold_wpn = "MCX_Virtus_300_11_gl_g_s6_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_g_s6";
	};
	class MCX_Virtus_300_11_gl_f_s1: MCX_Virtus_300_11_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\glfs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_14_gl_f_s1";
		fold_wpn = "MCX_Virtus_300_11_gl_f_s1_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_f_s1";
	};
	class MCX_Virtus_300_11_gl_f_s2: MCX_Virtus_300_11_gl_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\glfs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_gl_f_s2";
		fold_wpn = "MCX_Virtus_300_11_gl_f_s2_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_f_s2";
	};
	class MCX_Virtus_300_11_gl_f_s3: MCX_Virtus_300_11_gl_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\glfs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_14_gl_f_s3";
		fold_wpn = "MCX_Virtus_300_11_gl_f_s3_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_f_s3";
	};
	class MCX_Virtus_300_11_gl_f_s4: MCX_Virtus_300_11_gl_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\glfs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_14_gl_f_s4";
		fold_wpn = "MCX_Virtus_300_11_gl_f_s4_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_f_s4";
	};
	class MCX_Virtus_300_11_gl_f_s5: MCX_Virtus_300_11_gl_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\glfs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_gl_f_s5";
		fold_wpn = "MCX_Virtus_300_11_gl_f_s5_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_f_s5";
	};
	class MCX_Virtus_300_11_gl_f_s6: MCX_Virtus_300_11_gl_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\glfs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_f_co.paa","mcx_virtus\tex\handguards\handguard_12sd_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_14_gl_f_s6";
		fold_wpn = "MCX_Virtus_300_11_gl_f_s6_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_f_s6";
	};
	class MCX_Virtus_300_11_gl_b_s1: MCX_Virtus_300_11_gl_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\glbs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		bc_convert = "MCX_Virtus_14_gl_b_s1";
		fold_wpn = "MCX_Virtus_300_11_gl_b_s1_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_b_s1";
	};
	class MCX_Virtus_300_11_gl_b_s2: MCX_Virtus_300_11_gl_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\glbs2.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_gl_b_s2";
		fold_wpn = "MCX_Virtus_300_11_gl_b_s2_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_b_s2";
	};
	class MCX_Virtus_300_11_gl_b_s3: MCX_Virtus_300_11_gl_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\glbs3.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		bc_convert = "MCX_Virtus_14_gl_b_s3";
		fold_wpn = "MCX_Virtus_300_11_gl_b_s3_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_b_s3";
	};
	class MCX_Virtus_300_11_gl_b_s4: MCX_Virtus_300_11_gl_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\glbs4.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		bc_convert = "MCX_Virtus_14_gl_b_s4";
		fold_wpn = "MCX_Virtus_300_11_gl_b_s4_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_b_s4";
	};
	class MCX_Virtus_300_11_gl_b_s5: MCX_Virtus_300_11_gl_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\glbs5.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		bc_convert = "MCX_Virtus_14_gl_b_s5";
		fold_wpn = "MCX_Virtus_300_11_gl_b_s5_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_b_s5";
	};
	class MCX_Virtus_300_11_gl_b_s6: MCX_Virtus_300_11_gl_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX .300 11.5 M320 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\glbs6.paa";
		hiddenSelectionsTextures[] = {"mcx_virtus\tex\receiver\mcx_receiver_b_co.paa","mcx_virtus\tex\handguards\handguard_12sd_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_virtus\tex\receiver\mcx_receiver.rvmat","mcx_virtus\tex\handguards\handguard_12sd.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		bc_convert = "MCX_Virtus_14_gl_b_s6";
		fold_wpn = "MCX_Virtus_300_11_gl_b_s6_fold";
		baseWeapon = "MCX_Virtus_300_11_gl_b_s6";
	};
	class MCX_Rattler_300_g_s1: MCX_Virtus_300_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Telescoping Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\5gs1.paa";
		model = "\MCX_Rattler\mesh\mcxr.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\hand_mcx.rtm"};
		bc_convert = "MCX_Rattler_556_g_s1";
		dexterity = 3.3;
		inertia = 0.42;
		initSpeed = -0.85;
		AB_barrelTwist = 5;
		AB_barrelLength = 5.5;
		ACE_barrelTwist = 254;
		ACE_barrelLength = 139.45;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 49;
		};
		class Single: Single
		{
			reloadTime = 0.067;
			dispersion = 0.0008;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.067;
			dispersion = 0.0035;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Rattler_300_g_s1_fold";
		baseWeapon = "MCX_Rattler_300_g_s1";
		rhs_grip1_change = "MCX_Rattler_300_g_s1_grip";
		rhs_grip2_change = "MCX_Rattler_300_g_s1_grip2";
		rhs_grip3_change = "MCX_Rattler_300_g_s1_grip3";
		muzzles[] = {"this","Setting_L","BC_UnFold"};
	};
	class MCX_Rattler_300_g_s1_grip: MCX_Rattler_300_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_g_s1_grip2: MCX_Rattler_300_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_g_s1_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_g_s1_grip3: MCX_Rattler_300_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_g_s1_grip3";
	};
	class MCX_Rattler_300_g_s2: MCX_Rattler_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\5gs2.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		fold_wpn = "MCX_Rattler_300_g_s2_fold";
		baseWeapon = "MCX_Rattler_300_g_s2";
		bc_convert = "MCX_Rattler_556_g_s2";
		rhs_grip1_change = "MCX_Rattler_300_g_s2_grip";
		rhs_grip2_change = "MCX_Rattler_300_g_s2_grip2";
		rhs_grip3_change = "MCX_Rattler_300_g_s2_grip3";
	};
	class MCX_Rattler_300_g_s2_grip: MCX_Rattler_300_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_g_s2_grip2: MCX_Rattler_300_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_g_s2_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_g_s2_grip3: MCX_Rattler_300_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_g_s2_grip3";
	};
	class MCX_Rattler_300_g_s3: MCX_Rattler_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\5gs3.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		fold_wpn = "MCX_Rattler_300_g_s3_fold";
		baseWeapon = "MCX_Rattler_300_g_s3";
		bc_convert = "MCX_Rattler_556_g_s3";
		rhs_grip1_change = "MCX_Rattler_300_g_s3_grip";
		rhs_grip2_change = "MCX_Rattler_300_g_s3_grip2";
		rhs_grip3_change = "MCX_Rattler_300_g_s3_grip3";
	};
	class MCX_Rattler_300_g_s3_grip: MCX_Rattler_300_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_g_s3_grip2: MCX_Rattler_300_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_g_s3_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_g_s3_grip3: MCX_Rattler_300_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_g_s3_grip3";
	};
	class MCX_Rattler_300_g_s4: MCX_Rattler_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\5gs4.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		fold_wpn = "MCX_Rattler_300_g_s4_fold";
		baseWeapon = "MCX_Rattler_300_g_s4";
		bc_convert = "MCX_Rattler_556_g_s4";
		rhs_grip1_change = "MCX_Rattler_300_g_s4_grip";
		rhs_grip2_change = "MCX_Rattler_300_g_s4_grip2";
		rhs_grip3_change = "MCX_Rattler_300_g_s4_grip3";
	};
	class MCX_Rattler_300_g_s4_grip: MCX_Rattler_300_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_g_s4_grip2: MCX_Rattler_300_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_g_s4_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_g_s4_grip3: MCX_Rattler_300_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_g_s4_grip3";
	};
	class MCX_Rattler_300_g_s5: MCX_Rattler_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\5gs5.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		fold_wpn = "MCX_Rattler_300_g_s5_fold";
		baseWeapon = "MCX_Rattler_300_g_s5";
		bc_convert = "MCX_Rattler_556_g_s5";
		rhs_grip1_change = "MCX_Rattler_300_g_s5_grip";
		rhs_grip2_change = "MCX_Rattler_300_g_s5_grip2";
		rhs_grip3_change = "MCX_Rattler_300_g_s5_grip3";
	};
	class MCX_Rattler_300_g_s5_grip: MCX_Rattler_300_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_g_s5_grip2: MCX_Rattler_300_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_g_s5_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_g_s5_grip3: MCX_Rattler_300_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_g_s5_grip3";
	};
	class MCX_Rattler_300_g_s6: MCX_Rattler_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\5gs6.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		fold_wpn = "MCX_Rattler_300_g_s6_fold";
		baseWeapon = "MCX_Rattler_300_g_s6";
		bc_convert = "MCX_Rattler_556_g_s6";
		rhs_grip1_change = "MCX_Rattler_300_g_s6_grip";
		rhs_grip2_change = "MCX_Rattler_300_g_s6_grip2";
		rhs_grip3_change = "MCX_Rattler_300_g_s6_grip3";
	};
	class MCX_Rattler_300_g_s6_grip: MCX_Rattler_300_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_g_s6_grip2: MCX_Rattler_300_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_g_s6_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_g_s6_grip3: MCX_Rattler_300_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_f_s1: MCX_Rattler_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\5fs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Rattler_300_f_s1_fold";
		baseWeapon = "MCX_Rattler_300_f_s1";
		bc_convert = "MCX_Rattler_556_f_s1";
		rhs_grip1_change = "MCX_Rattler_300_f_s1_grip";
		rhs_grip2_change = "MCX_Rattler_300_f_s1_grip2";
		rhs_grip3_change = "MCX_Rattler_300_f_s1_grip3";
	};
	class MCX_Rattler_300_f_s1_grip: MCX_Rattler_300_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_f_s1_grip2: MCX_Rattler_300_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_f_s1_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_f_s1_grip3: MCX_Rattler_300_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_f_s1_grip3";
	};
	class MCX_Rattler_300_f_s2: MCX_Rattler_300_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\5fs2.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		fold_wpn = "MCX_Rattler_300_f_s2_fold";
		baseWeapon = "MCX_Rattler_300_f_s2";
		bc_convert = "MCX_Rattler_556_f_s2";
		rhs_grip1_change = "MCX_Rattler_300_f_s2_grip";
		rhs_grip2_change = "MCX_Rattler_300_f_s2_grip2";
		rhs_grip3_change = "MCX_Rattler_300_f_s2_grip3";
	};
	class MCX_Rattler_300_f_s2_grip: MCX_Rattler_300_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_f_s2_grip2: MCX_Rattler_300_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_f_s2_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_f_s2_grip3: MCX_Rattler_300_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_f_s2_grip3";
	};
	class MCX_Rattler_300_f_s3: MCX_Rattler_300_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\5fs3.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		fold_wpn = "MCX_Rattler_300_f_s3_fold";
		baseWeapon = "MCX_Rattler_300_f_s3";
		bc_convert = "MCX_Rattler_556_f_s3";
		rhs_grip1_change = "MCX_Rattler_300_f_s3_grip";
		rhs_grip2_change = "MCX_Rattler_300_f_s3_grip2";
		rhs_grip3_change = "MCX_Rattler_300_f_s3_grip3";
	};
	class MCX_Rattler_300_f_s3_grip: MCX_Rattler_300_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_f_s3_grip2: MCX_Rattler_300_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_f_s3_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_f_s3_grip3: MCX_Rattler_300_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_f_s3_grip3";
	};
	class MCX_Rattler_300_f_s4: MCX_Rattler_300_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\5fs4.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		fold_wpn = "MCX_Rattler_300_f_s4_fold";
		baseWeapon = "MCX_Rattler_300_f_s4";
		bc_convert = "MCX_Rattler_556_f_s4";
		rhs_grip1_change = "MCX_Rattler_300_f_s4_grip";
		rhs_grip2_change = "MCX_Rattler_300_f_s4_grip2";
		rhs_grip3_change = "MCX_Rattler_300_f_s4_grip3";
	};
	class MCX_Rattler_300_f_s4_grip: MCX_Rattler_300_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_f_s4_grip2: MCX_Rattler_300_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_f_s4_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_f_s4_grip3: MCX_Rattler_300_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_f_s4_grip3";
	};
	class MCX_Rattler_300_f_s5: MCX_Rattler_300_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\5fs5.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		fold_wpn = "MCX_Rattler_300_f_s5_fold";
		baseWeapon = "MCX_Rattler_300_f_s5";
		bc_convert = "MCX_Rattler_556_f_s5";
		rhs_grip1_change = "MCX_Rattler_300_f_s5_grip";
		rhs_grip2_change = "MCX_Rattler_300_f_s5_grip2";
		rhs_grip3_change = "MCX_Rattler_300_f_s5_grip3";
	};
	class MCX_Rattler_300_f_s5_grip: MCX_Rattler_300_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_f_s5_grip2: MCX_Rattler_300_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_f_s5_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_f_s5_grip3: MCX_Rattler_300_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_f_s5_grip3";
	};
	class MCX_Rattler_300_f_s6: MCX_Rattler_300_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\5fs6.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		fold_wpn = "MCX_Rattler_300_f_s6_fold";
		baseWeapon = "MCX_Rattler_300_f_s6";
		bc_convert = "MCX_Rattler_556_f_s6";
		rhs_grip1_change = "MCX_Rattler_300_f_s6_grip";
		rhs_grip2_change = "MCX_Rattler_300_f_s6_grip2";
		rhs_grip3_change = "MCX_Rattler_300_f_s6_grip3";
	};
	class MCX_Rattler_300_f_s6_grip: MCX_Rattler_300_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_f_s6_grip2: MCX_Rattler_300_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_f_s6_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_f_s6_grip3: MCX_Rattler_300_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_f_s6_grip3";
	};
	class MCX_Rattler_300_b_s1: MCX_Rattler_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\5bs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Rattler_300_b_s1_fold";
		baseWeapon = "MCX_Rattler_300_b_s1";
		bc_convert = "MCX_Rattler_556_b_s1";
		rhs_grip1_change = "MCX_Rattler_300_b_s1_grip";
		rhs_grip2_change = "MCX_Rattler_300_b_s1_grip2";
		rhs_grip3_change = "MCX_Rattler_300_b_s1_grip3";
	};
	class MCX_Rattler_300_b_s1_grip: MCX_Rattler_300_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_b_s1_grip2: MCX_Rattler_300_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_b_s1_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_b_s1_grip3: MCX_Rattler_300_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_b_s1_grip3";
	};
	class MCX_Rattler_300_b_s2: MCX_Rattler_300_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\5bs2.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		fold_wpn = "MCX_Rattler_300_b_s2_fold";
		baseWeapon = "MCX_Rattler_300_b_s2";
		bc_convert = "MCX_Rattler_556_b_s2";
		rhs_grip1_change = "MCX_Rattler_300_b_s2_grip";
		rhs_grip2_change = "MCX_Rattler_300_b_s2_grip2";
		rhs_grip3_change = "MCX_Rattler_300_b_s2_grip3";
	};
	class MCX_Rattler_300_b_s2_grip: MCX_Rattler_300_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_b_s2_grip2: MCX_Rattler_300_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_b_s2_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_b_s2_grip3: MCX_Rattler_300_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_b_s2_grip3";
	};
	class MCX_Rattler_300_b_s3: MCX_Rattler_300_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\5bs3.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		fold_wpn = "MCX_Rattler_300_b_s3_fold";
		baseWeapon = "MCX_Rattler_300_b_s3";
		bc_convert = "MCX_Rattler_556_b_s3";
		rhs_grip1_change = "MCX_Rattler_300_b_s3_grip";
		rhs_grip2_change = "MCX_Rattler_300_b_s3_grip2";
		rhs_grip3_change = "MCX_Rattler_300_b_s3_grip3";
	};
	class MCX_Rattler_300_b_s3_grip: MCX_Rattler_300_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_b_s3_grip2: MCX_Rattler_300_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_b_s3_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_b_s3_grip3: MCX_Rattler_300_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_b_s3_grip3";
	};
	class MCX_Rattler_300_b_s4: MCX_Rattler_300_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\5bs4.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		fold_wpn = "MCX_Rattler_300_b_s4_fold";
		baseWeapon = "MCX_Rattler_300_b_s4";
		bc_convert = "MCX_Rattler_556_b_s4";
		rhs_grip1_change = "MCX_Rattler_300_b_s4_grip";
		rhs_grip2_change = "MCX_Rattler_300_b_s4_grip2";
		rhs_grip3_change = "MCX_Rattler_300_b_s4_grip3";
	};
	class MCX_Rattler_300_b_s4_grip: MCX_Rattler_300_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_b_s4_grip2: MCX_Rattler_300_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_b_s4_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_b_s4_grip3: MCX_Rattler_300_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_b_s4_grip3";
	};
	class MCX_Rattler_300_b_s5: MCX_Rattler_300_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\5bs5.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		fold_wpn = "MCX_Rattler_300_b_s5_fold";
		baseWeapon = "MCX_Rattler_300_b_s5";
		bc_convert = "MCX_Rattler_556_b_s5";
		rhs_grip1_change = "MCX_Rattler_300_b_s5_grip";
		rhs_grip2_change = "MCX_Rattler_300_b_s5_grip2";
		rhs_grip3_change = "MCX_Rattler_300_b_s5_grip3";
	};
	class MCX_Rattler_300_b_s5_grip: MCX_Rattler_300_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_b_s5_grip2: MCX_Rattler_300_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_b_s5_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_b_s5_grip3: MCX_Rattler_300_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_b_s5_grip3";
	};
	class MCX_Rattler_300_b_s6: MCX_Rattler_300_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler .300 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\5bs6.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		fold_wpn = "MCX_Rattler_300_b_s6_fold";
		baseWeapon = "MCX_Rattler_300_b_s6";
		bc_convert = "MCX_Rattler_556_b_s6";
		rhs_grip1_change = "MCX_Rattler_300_b_s6_grip";
		rhs_grip2_change = "MCX_Rattler_300_b_s6_grip2";
		rhs_grip3_change = "MCX_Rattler_300_b_s6_grip3";
	};
	class MCX_Rattler_300_b_s6_grip: MCX_Rattler_300_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_300_b_s6_grip2: MCX_Rattler_300_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_556_b_s6_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_300_b_s6_grip3: MCX_Rattler_300_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_556_b_s6_grip3";
	};
	class MCX_Canebrake_300_g_s1: MCX_Virtus_300_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Telescoping Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\cgs1.paa";
		model = "\MCX_Rattler\mesh\mcxc.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\hand_mcx.rtm"};
		dexterity = 3;
		inertia = 0.45;
		initSpeed = -0.9;
		AB_barrelTwist = 5;
		AB_barrelLength = 5.5;
		ACE_barrelTwist = 254;
		ACE_barrelLength = 139.45;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 54;
		};
		class Single: Single
		{
			reloadTime = 0.067;
			dispersion = 0.0008;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.067;
			dispersion = 0.0035;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Canebrake_300_g_s1_fold";
		baseWeapon = "MCX_Canebrake_300_g_s1";
		rhs_grip1_change = "MCX_Canebrake_300_g_s1_grip";
		rhs_grip2_change = "MCX_Canebrake_300_g_s1_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_g_s1_grip3";
		muzzles[] = {"this","Setting_L","BC_UnFold"};
	};
	class MCX_Canebrake_300_g_s1_grip: MCX_Canebrake_300_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_g_s1_grip2: MCX_Canebrake_300_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_g_s1_grip3: MCX_Canebrake_300_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_g_s2: MCX_Canebrake_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\cgs2.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		fold_wpn = "MCX_Canebrake_300_g_s2_fold";
		baseWeapon = "MCX_Canebrake_300_g_s2";
		rhs_grip1_change = "MCX_Canebrake_300_g_s2_grip";
		rhs_grip2_change = "MCX_Canebrake_300_g_s2_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_g_s2_grip3";
	};
	class MCX_Canebrake_300_g_s2_grip: MCX_Canebrake_300_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_g_s2_grip2: MCX_Canebrake_300_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_g_s2_grip3: MCX_Canebrake_300_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_g_s3: MCX_Canebrake_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\cgs3.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		fold_wpn = "MCX_Canebrake_300_g_s3_fold";
		baseWeapon = "MCX_Canebrake_300_g_s3";
		rhs_grip1_change = "MCX_Canebrake_300_g_s3_grip";
		rhs_grip2_change = "MCX_Canebrake_300_g_s3_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_g_s3_grip3";
	};
	class MCX_Canebrake_300_g_s3_grip: MCX_Canebrake_300_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_g_s3_grip2: MCX_Canebrake_300_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_g_s3_grip3: MCX_Canebrake_300_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_g_s4: MCX_Canebrake_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\cgs4.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		fold_wpn = "MCX_Canebrake_300_g_s4_fold";
		baseWeapon = "MCX_Canebrake_300_g_s4";
		rhs_grip1_change = "MCX_Canebrake_300_g_s4_grip";
		rhs_grip2_change = "MCX_Canebrake_300_g_s4_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_g_s4_grip3";
	};
	class MCX_Canebrake_300_g_s4_grip: MCX_Canebrake_300_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_g_s4_grip2: MCX_Canebrake_300_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_g_s4_grip3: MCX_Canebrake_300_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_g_s5: MCX_Canebrake_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\cgs5.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		fold_wpn = "MCX_Canebrake_300_g_s5_fold";
		baseWeapon = "MCX_Canebrake_300_g_s5";
		rhs_grip1_change = "MCX_Canebrake_300_g_s5_grip";
		rhs_grip2_change = "MCX_Canebrake_300_g_s5_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_g_s5_grip3";
	};
	class MCX_Canebrake_300_g_s5_grip: MCX_Canebrake_300_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_g_s5_grip2: MCX_Canebrake_300_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_g_s5_grip3: MCX_Canebrake_300_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_g_s6: MCX_Canebrake_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\300\cgs6.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		fold_wpn = "MCX_Canebrake_300_g_s6_fold";
		baseWeapon = "MCX_Canebrake_300_g_s6";
		rhs_grip1_change = "MCX_Canebrake_300_g_s6_grip";
		rhs_grip2_change = "MCX_Canebrake_300_g_s6_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_g_s6_grip3";
	};
	class MCX_Canebrake_300_g_s6_grip: MCX_Canebrake_300_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_g_s6_grip2: MCX_Canebrake_300_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_g_s6_grip3: MCX_Canebrake_300_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s1: MCX_Canebrake_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\cfs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Canebrake_300_f_s1_fold";
		baseWeapon = "MCX_Canebrake_300_f_s1";
		rhs_grip1_change = "MCX_Canebrake_300_f_s1_grip";
		rhs_grip2_change = "MCX_Canebrake_300_f_s1_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_f_s1_grip3";
	};
	class MCX_Canebrake_300_f_s1_grip: MCX_Canebrake_300_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s1_grip2: MCX_Canebrake_300_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_f_s1_grip3: MCX_Canebrake_300_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s2: MCX_Canebrake_300_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\cfs2.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		fold_wpn = "MCX_Canebrake_300_f_s2_fold";
		baseWeapon = "MCX_Canebrake_300_f_s2";
		rhs_grip1_change = "MCX_Canebrake_300_f_s2_grip";
		rhs_grip2_change = "MCX_Canebrake_300_f_s2_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_f_s2_grip3";
	};
	class MCX_Canebrake_300_f_s2_grip: MCX_Canebrake_300_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s2_grip2: MCX_Canebrake_300_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_f_s2_grip3: MCX_Canebrake_300_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s3: MCX_Canebrake_300_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\cfs3.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		fold_wpn = "MCX_Canebrake_300_f_s3_fold";
		baseWeapon = "MCX_Canebrake_300_f_s3";
		rhs_grip1_change = "MCX_Canebrake_300_f_s3_grip";
		rhs_grip2_change = "MCX_Canebrake_300_f_s3_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_f_s3_grip3";
	};
	class MCX_Canebrake_300_f_s3_grip: MCX_Canebrake_300_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s3_grip2: MCX_Canebrake_300_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_f_s3_grip3: MCX_Canebrake_300_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s4: MCX_Canebrake_300_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\cfs4.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		fold_wpn = "MCX_Canebrake_300_f_s4_fold";
		baseWeapon = "MCX_Canebrake_300_f_s4";
		rhs_grip1_change = "MCX_Canebrake_300_f_s4_grip";
		rhs_grip2_change = "MCX_Canebrake_300_f_s4_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_f_s4_grip3";
	};
	class MCX_Canebrake_300_f_s4_grip: MCX_Canebrake_300_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s4_grip2: MCX_Canebrake_300_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_f_s4_grip3: MCX_Canebrake_300_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s5: MCX_Canebrake_300_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\cfs5.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		fold_wpn = "MCX_Canebrake_300_f_s5_fold";
		baseWeapon = "MCX_Canebrake_300_f_s5";
		rhs_grip1_change = "MCX_Canebrake_300_f_s5_grip";
		rhs_grip2_change = "MCX_Canebrake_300_f_s5_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_f_s5_grip3";
	};
	class MCX_Canebrake_300_f_s5_grip: MCX_Canebrake_300_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s5_grip2: MCX_Canebrake_300_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_f_s5_grip3: MCX_Canebrake_300_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s6: MCX_Canebrake_300_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\300\cfs6.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		fold_wpn = "MCX_Canebrake_300_f_s6_fold";
		baseWeapon = "MCX_Canebrake_300_f_s6";
		rhs_grip1_change = "MCX_Canebrake_300_f_s6_grip";
		rhs_grip2_change = "MCX_Canebrake_300_f_s6_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_f_s6_grip3";
	};
	class MCX_Canebrake_300_f_s6_grip: MCX_Canebrake_300_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_f_s6_grip2: MCX_Canebrake_300_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_f_s6_grip3: MCX_Canebrake_300_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s1: MCX_Canebrake_300_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\cbs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Canebrake_300_b_s1_fold";
		baseWeapon = "MCX_Canebrake_300_b_s1";
		rhs_grip1_change = "MCX_Canebrake_300_b_s1_grip";
		rhs_grip2_change = "MCX_Canebrake_300_b_s1_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_b_s1_grip3";
	};
	class MCX_Canebrake_300_b_s1_grip: MCX_Canebrake_300_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s1_grip2: MCX_Canebrake_300_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_b_s1_grip3: MCX_Canebrake_300_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s2: MCX_Canebrake_300_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\cbs2.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		fold_wpn = "MCX_Canebrake_300_b_s2_fold";
		baseWeapon = "MCX_Canebrake_300_b_s2";
		rhs_grip1_change = "MCX_Canebrake_300_b_s2_grip";
		rhs_grip2_change = "MCX_Canebrake_300_b_s2_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_b_s2_grip3";
	};
	class MCX_Canebrake_300_b_s2_grip: MCX_Canebrake_300_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s2_grip2: MCX_Canebrake_300_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_b_s2_grip3: MCX_Canebrake_300_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s3: MCX_Canebrake_300_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\cbs3.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		fold_wpn = "MCX_Canebrake_300_b_s3_fold";
		baseWeapon = "MCX_Canebrake_300_b_s3";
		rhs_grip1_change = "MCX_Canebrake_300_b_s3_grip";
		rhs_grip2_change = "MCX_Canebrake_300_b_s3_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_b_s3_grip3";
	};
	class MCX_Canebrake_300_b_s3_grip: MCX_Canebrake_300_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s3_grip2: MCX_Canebrake_300_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_b_s3_grip3: MCX_Canebrake_300_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s4: MCX_Canebrake_300_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\cbs4.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		fold_wpn = "MCX_Canebrake_300_b_s4_fold";
		baseWeapon = "MCX_Canebrake_300_b_s4";
		rhs_grip1_change = "MCX_Canebrake_300_b_s4_grip";
		rhs_grip2_change = "MCX_Canebrake_300_b_s4_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_b_s4_grip3";
	};
	class MCX_Canebrake_300_b_s4_grip: MCX_Canebrake_300_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s4_grip2: MCX_Canebrake_300_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_b_s4_grip3: MCX_Canebrake_300_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s5: MCX_Canebrake_300_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\cbs5.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		fold_wpn = "MCX_Canebrake_300_b_s5_fold";
		baseWeapon = "MCX_Canebrake_300_b_s5";
		rhs_grip1_change = "MCX_Canebrake_300_b_s5_grip";
		rhs_grip2_change = "MCX_Canebrake_300_b_s5_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_b_s5_grip3";
	};
	class MCX_Canebrake_300_b_s5_grip: MCX_Canebrake_300_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s5_grip2: MCX_Canebrake_300_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_b_s5_grip3: MCX_Canebrake_300_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s6: MCX_Canebrake_300_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Canebrake .300 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\300\cbs6.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		fold_wpn = "MCX_Canebrake_300_b_s6_fold";
		baseWeapon = "MCX_Canebrake_300_b_s6";
		rhs_grip1_change = "MCX_Canebrake_300_b_s6_grip";
		rhs_grip2_change = "MCX_Canebrake_300_b_s6_grip2";
		rhs_grip3_change = "MCX_Canebrake_300_b_s6_grip3";
	};
	class MCX_Canebrake_300_b_s6_grip: MCX_Canebrake_300_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Canebrake_300_b_s6_grip2: MCX_Canebrake_300_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Canebrake_300_b_s6_grip3: MCX_Canebrake_300_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_g_s1: MCX_Virtus_556_base
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Telescoping Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\5gs1.paa";
		model = "\MCX_Rattler\mesh\mcxr.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\hand_mcx.rtm"};
		bc_convert = "MCX_Rattler_300_g_s1";
		dexterity = 3.3;
		inertia = 0.42;
		initSpeed = -0.8;
		AB_barrelTwist = 7;
		AB_barrelLength = 5.5;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 139.45;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 47;
		};
		class Single: Single
		{
			reloadTime = 0.065;
			dispersion = 0.00082;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.065;
			dispersion = 0.0035;
		};
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Rattler_556_g_s1_fold";
		baseWeapon = "MCX_Rattler_556_g_s1";
		rhs_grip1_change = "MCX_Rattler_556_g_s1_grip";
		rhs_grip2_change = "MCX_Rattler_556_g_s1_grip2";
		rhs_grip3_change = "MCX_Rattler_556_g_s1_grip3";
		muzzles[] = {"this","Setting_L","BC_UnFold"};
	};
	class MCX_Rattler_556_g_s1_grip: MCX_Rattler_556_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_g_s1_grip2: MCX_Rattler_556_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_g_s1_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_g_s1_grip3: MCX_Rattler_556_g_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_g_s1_grip3";
	};
	class MCX_Rattler_556_g_s2: MCX_Rattler_556_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Collapsing Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\5gs2.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		fold_wpn = "MCX_Rattler_556_g_s2_fold";
		baseWeapon = "MCX_Rattler_556_g_s2";
		bc_convert = "MCX_Rattler_300_g_s2";
		rhs_grip1_change = "MCX_Rattler_556_g_s2_grip";
		rhs_grip2_change = "MCX_Rattler_556_g_s2_grip2";
		rhs_grip3_change = "MCX_Rattler_556_g_s2_grip3";
	};
	class MCX_Rattler_556_g_s2_grip: MCX_Rattler_556_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_g_s2_grip2: MCX_Rattler_556_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_g_s2_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_g_s2_grip3: MCX_Rattler_556_g_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_g_s2_grip3";
	};
	class MCX_Rattler_556_g_s3: MCX_Rattler_556_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Minimalist Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\5gs3.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		fold_wpn = "MCX_Rattler_556_g_s3_fold";
		baseWeapon = "MCX_Rattler_556_g_s3";
		bc_convert = "MCX_Rattler_300_g_s3";
		rhs_grip1_change = "MCX_Rattler_556_g_s3_grip";
		rhs_grip2_change = "MCX_Rattler_556_g_s3_grip2";
		rhs_grip3_change = "MCX_Rattler_556_g_s3_grip3";
	};
	class MCX_Rattler_556_g_s3_grip: MCX_Rattler_556_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_g_s3_grip2: MCX_Rattler_556_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_g_s3_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_g_s3_grip3: MCX_Rattler_556_g_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_g_s3_grip3";
	};
	class MCX_Rattler_556_g_s4: MCX_Rattler_556_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Minimalist Mini Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\5gs4.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		fold_wpn = "MCX_Rattler_556_g_s4_fold";
		baseWeapon = "MCX_Rattler_556_g_s4";
		bc_convert = "MCX_Rattler_300_g_s4";
		rhs_grip1_change = "MCX_Rattler_556_g_s4_grip";
		rhs_grip2_change = "MCX_Rattler_556_g_s4_grip2";
		rhs_grip3_change = "MCX_Rattler_556_g_s4_grip3";
	};
	class MCX_Rattler_556_g_s4_grip: MCX_Rattler_556_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_g_s4_grip2: MCX_Rattler_556_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_g_s4_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_g_s4_grip3: MCX_Rattler_556_g_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_g_s4_grip3";
	};
	class MCX_Rattler_556_g_s5: MCX_Rattler_556_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Visor Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\5gs5.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		fold_wpn = "MCX_Rattler_556_g_s5_fold";
		baseWeapon = "MCX_Rattler_556_g_s5";
		bc_convert = "MCX_Rattler_300_g_s5";
		rhs_grip1_change = "MCX_Rattler_556_g_s5_grip";
		rhs_grip2_change = "MCX_Rattler_556_g_s5_grip2";
		rhs_grip3_change = "MCX_Rattler_556_g_s5_grip3";
	};
	class MCX_Rattler_556_g_s5_grip: MCX_Rattler_556_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_g_s5_grip2: MCX_Rattler_556_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_g_s5_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_g_s5_grip3: MCX_Rattler_556_g_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_g_s5_grip3";
	};
	class MCX_Rattler_556_g_s6: MCX_Rattler_556_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 CTR Stock (Grey)";
		picture = "\MCX_Virtus_cfg\ui\5gs6.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_g_co.paa","mcx_rattler\tex\handguards\handguard_rattler_g_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		fold_wpn = "MCX_Rattler_556_g_s6_fold";
		baseWeapon = "MCX_Rattler_556_g_s6";
		bc_convert = "MCX_Rattler_300_g_s6";
		rhs_grip1_change = "MCX_Rattler_556_g_s6_grip";
		rhs_grip2_change = "MCX_Rattler_556_g_s6_grip2";
		rhs_grip3_change = "MCX_Rattler_556_g_s6_grip3";
	};
	class MCX_Rattler_556_g_s6_grip: MCX_Rattler_556_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_g_s6_grip2: MCX_Rattler_556_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_g_s6_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_g_s6_grip3: MCX_Rattler_556_g_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_g_s6_grip3";
	};
	class MCX_Rattler_556_f_s1: MCX_Rattler_556_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Telescoping Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\5fs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_f_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Rattler_556_f_s1_fold";
		baseWeapon = "MCX_Rattler_556_f_s1";
		bc_convert = "MCX_Rattler_300_f_s1";
		rhs_grip1_change = "MCX_Rattler_556_f_s1_grip";
		rhs_grip2_change = "MCX_Rattler_556_f_s1_grip2";
		rhs_grip3_change = "MCX_Rattler_556_f_s1_grip3";
	};
	class MCX_Rattler_556_f_s1_grip: MCX_Rattler_556_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_f_s1_grip2: MCX_Rattler_556_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_f_s1_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_f_s1_grip3: MCX_Rattler_556_f_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_f_s1_grip3";
	};
	class MCX_Rattler_556_f_s2: MCX_Rattler_556_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Collapsing Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\5fs2.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		fold_wpn = "MCX_Rattler_556_f_s2_fold";
		baseWeapon = "MCX_Rattler_556_f_s2";
		bc_convert = "MCX_Rattler_300_f_s2";
		rhs_grip1_change = "MCX_Rattler_556_f_s2_grip";
		rhs_grip2_change = "MCX_Rattler_556_f_s2_grip2";
		rhs_grip3_change = "MCX_Rattler_556_f_s2_grip3";
	};
	class MCX_Rattler_556_f_s2_grip: MCX_Rattler_556_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_f_s2_grip2: MCX_Rattler_556_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_f_s2_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_f_s2_grip3: MCX_Rattler_556_f_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_f_s2_grip3";
	};
	class MCX_Rattler_556_f_s3: MCX_Rattler_556_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Minimalist Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\5fs3.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		fold_wpn = "MCX_Rattler_556_f_s3_fold";
		baseWeapon = "MCX_Rattler_556_f_s3";
		bc_convert = "MCX_Rattler_300_f_s3";
		rhs_grip1_change = "MCX_Rattler_556_f_s3_grip";
		rhs_grip2_change = "MCX_Rattler_556_f_s3_grip2";
		rhs_grip3_change = "MCX_Rattler_556_f_s3_grip3";
	};
	class MCX_Rattler_556_f_s3_grip: MCX_Rattler_556_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_f_s3_grip2: MCX_Rattler_556_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_f_s3_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_f_s3_grip3: MCX_Rattler_556_f_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_f_s3_grip3";
	};
	class MCX_Rattler_556_f_s4: MCX_Rattler_556_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Minimalist Mini Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\5fs4.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		fold_wpn = "MCX_Rattler_556_f_s6_fold";
		baseWeapon = "MCX_Rattler_556_f_s4";
		bc_convert = "MCX_Rattler_300_f_s4";
		rhs_grip1_change = "MCX_Rattler_556_f_s4_grip";
		rhs_grip2_change = "MCX_Rattler_556_f_s4_grip2";
		rhs_grip3_change = "MCX_Rattler_556_f_s4_grip3";
	};
	class MCX_Rattler_556_f_s4_grip: MCX_Rattler_556_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_f_s4_grip2: MCX_Rattler_556_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_f_s4_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_f_s4_grip3: MCX_Rattler_556_f_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_f_s4_grip3";
	};
	class MCX_Rattler_556_f_s5: MCX_Rattler_556_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Visor Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\5fs5.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		fold_wpn = "MCX_Rattler_556_f_s5_fold";
		baseWeapon = "MCX_Rattler_556_f_s5";
		bc_convert = "MCX_Rattler_300_f_s5";
		rhs_grip1_change = "MCX_Rattler_556_f_s5_grip";
		rhs_grip2_change = "MCX_Rattler_556_f_s5_grip2";
		rhs_grip3_change = "MCX_Rattler_556_f_s5_grip3";
	};
	class MCX_Rattler_556_f_s5_grip: MCX_Rattler_556_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_f_s5_grip2: MCX_Rattler_556_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_f_s5_grip3: MCX_Rattler_556_f_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_f_s5_grip3";
	};
	class MCX_Rattler_556_f_s6: MCX_Rattler_556_f_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 CTR Stock (FDE)";
		picture = "\MCX_Virtus_cfg\ui\5fs6.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_f_co.paa","mcx_rattler\tex\handguards\handguard_rattler_f_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_CTR_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		fold_wpn = "MCX_Rattler_556_f_s6_fold";
		baseWeapon = "MCX_Rattler_556_f_s6";
		bc_convert = "MCX_Rattler_300_f_s6";
		rhs_grip1_change = "MCX_Rattler_556_f_s6_grip";
		rhs_grip2_change = "MCX_Rattler_556_f_s6_grip2";
		rhs_grip3_change = "MCX_Rattler_556_f_s6_grip3";
	};
	class MCX_Rattler_556_f_s6_grip: MCX_Rattler_556_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_f_s6_grip2: MCX_Rattler_556_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_f_s6_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_f_s6_grip3: MCX_Rattler_556_f_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_f_s6_grip3";
	};
	class MCX_Rattler_556_b_s1: MCX_Rattler_556_g_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Telescoping Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\5bs1.paa";
		hiddenSelections[] = {"Body","Handguard","Stock1","Stock2","Stock3","Stock4","Stock5","Stock_bf","Stock_buffer_milspec","Stock_ctr"};
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","mcx_virtus\tex\stocks\stock_folding_collapsible_co.paa","","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","mcx_virtus\tex\stocks\stock_folding_collapsible.rvmat","","","","","","",""};
		fold_wpn = "MCX_Rattler_556_b_s1_fold";
		baseWeapon = "MCX_Rattler_556_b_s1";
		bc_convert = "MCX_Rattler_300_b_s1";
		rhs_grip1_change = "MCX_Rattler_556_b_s1_grip";
		rhs_grip2_change = "MCX_Rattler_556_b_s1_grip2";
		rhs_grip3_change = "MCX_Rattler_556_b_s1_grip3";
	};
	class MCX_Rattler_556_b_s1_grip: MCX_Rattler_556_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_b_s1_grip2: MCX_Rattler_556_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_b_s1_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_b_s1_grip3: MCX_Rattler_556_b_s1
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_b_s1_grip3";
	};
	class MCX_Rattler_556_b_s2: MCX_Rattler_556_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Collapsing Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\5bs2.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","mcx_virtus\tex\stocks\stock_collapsible_co.paa","","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","mcx_virtus\tex\stocks\stock_collapsible.rvmat","","",""};
		fold_wpn = "MCX_Rattler_556_b_s2_fold";
		baseWeapon = "MCX_Rattler_556_b_s2";
		bc_convert = "MCX_Rattler_300_b_s2";
		rhs_grip1_change = "MCX_Rattler_556_b_s2_grip";
		rhs_grip2_change = "MCX_Rattler_556_b_s2_grip2";
		rhs_grip3_change = "MCX_Rattler_556_b_s2_grip3";
	};
	class MCX_Rattler_556_b_s2_grip: MCX_Rattler_556_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_b_s2_grip2: MCX_Rattler_556_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_b_s2_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_b_s2_grip3: MCX_Rattler_556_b_s2
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_b_s2_grip3";
	};
	class MCX_Rattler_556_b_s3: MCX_Rattler_556_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Minimalist Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\5bs3.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","mcx_virtus\tex\stocks\stock_folding_skeletal_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","mcx_virtus\tex\stocks\stock_folding_skeletal.rvmat","","","","",""};
		fold_wpn = "MCX_Rattler_556_b_s3_fold";
		baseWeapon = "MCX_Rattler_556_b_s3";
		bc_convert = "MCX_Rattler_300_b_s3";
		rhs_grip1_change = "MCX_Rattler_556_b_s3_grip";
		rhs_grip2_change = "MCX_Rattler_556_b_s3_grip2";
		rhs_grip3_change = "MCX_Rattler_556_b_s3_grip3";
	};
	class MCX_Rattler_556_b_s3_grip: MCX_Rattler_556_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_b_s3_grip2: MCX_Rattler_556_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_b_s3_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_b_s3_grip3: MCX_Rattler_556_b_s3
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_b_s3_grip3";
	};
	class MCX_Rattler_556_b_s4: MCX_Rattler_556_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Minimalist Mini Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\5bs4.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","mcx_virtus\tex\stocks\stock_folding_skeletal_min.rvmat","","","",""};
		fold_wpn = "MCX_Rattler_556_b_s4_fold";
		baseWeapon = "MCX_Rattler_556_b_s4";
		bc_convert = "MCX_Rattler_300_b_s4";
		rhs_grip1_change = "MCX_Rattler_556_b_s4_grip";
		rhs_grip2_change = "MCX_Rattler_556_b_s4_grip2";
		rhs_grip3_change = "MCX_Rattler_556_b_s4_grip3";
	};
	class MCX_Rattler_556_b_s4_grip: MCX_Rattler_556_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_b_s4_grip2: MCX_Rattler_556_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_b_s4_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_b_s4_grip3: MCX_Rattler_556_b_s4
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_b_s4_grip3";
	};
	class MCX_Rattler_556_b_s5: MCX_Rattler_556_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 Visor Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\5bs5.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","","","mcx_virtus\tex\stocks\stock_folding_visor_co.paa","","",""};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","mcx_virtus\tex\stocks\stock_folding_visor.rvmat","","",""};
		fold_wpn = "MCX_Rattler_556_b_s5_fold";
		baseWeapon = "MCX_Rattler_556_b_s5";
		bc_convert = "MCX_Rattler_300_b_s5";
		rhs_grip1_change = "MCX_Rattler_556_b_s5_grip";
		rhs_grip2_change = "MCX_Rattler_556_b_s5_grip2";
		rhs_grip3_change = "MCX_Rattler_556_b_s5_grip3";
	};
	class MCX_Rattler_556_b_s5_grip: MCX_Rattler_556_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_b_s5_grip2: MCX_Rattler_556_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_b_s5_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_b_s5_grip3: MCX_Rattler_556_b_s5
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_b_s5_grip3";
	};
	class MCX_Rattler_556_b_s6: MCX_Rattler_556_b_s1
	{
		author = "RobinDX";
		scope = 2;
		displayName = "MCX Rattler 5.56 CTR Stock (Black)";
		picture = "\MCX_Virtus_cfg\ui\5bs6.paa";
		hiddenSelectionsTextures[] = {"mcx_rattler\tex\receiver\mcx_receiver_b_co.paa","mcx_rattler\tex\handguards\handguard_rattler_b_co.paa","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer_co.paa","mcx_virtus\tex\stocks\buffer_milspec_co.paa","mcx_virtus\tex\stocks\ar15\magpul_ctr_co.paa"};
		hiddenSelectionsMaterials[] = {"mcx_rattler\tex\receiver\mcx_receiver.rvmat","mcx_rattler\tex\handguards\handguard_rattler.rvmat","","","","","","mcx_virtus\tex\stocks\stock_folding_buffer.rvmat","mcx_virtus\tex\stocks\buffer_milspec.rvmat","mcx_virtus\tex\stocks\ar15\magpul_ctr.rvmat"};
		fold_wpn = "MCX_Rattler_556_b_s6_fold";
		baseWeapon = "MCX_Rattler_556_b_s6";
		bc_convert = "MCX_Rattler_300_b_s6";
		rhs_grip1_change = "MCX_Rattler_556_b_s6_grip";
		rhs_grip2_change = "MCX_Rattler_556_b_s6_grip2";
		rhs_grip3_change = "MCX_Rattler_556_b_s6_grip3";
	};
	class MCX_Rattler_556_b_s6_grip: MCX_Rattler_556_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
	};
	class MCX_Rattler_556_b_s6_grip2: MCX_Rattler_556_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Virtus\anim\mcx_afg.rtm"};
		bc_convert = "MCX_Rattler_300_b_s6_grip2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: mcx_gripod_slot2{};
		};
	};
	class MCX_Rattler_556_b_s6_grip3: MCX_Rattler_556_b_s6
	{
		handAnim[] = {"OFP2_ManSkeleton","\MCX_Rattler\anim\s\mcx_gp.rtm"};
		bc_convert = "MCX_Rattler_300_b_s6_grip3";
	};