// Verified Oblivion TESObjectTREE layout through +0x7F. The embedded NiTArray<unsigned int> at +0x48 has data +0x4C, capacity +0x50, end/seed count +0x52, numObjects +0x54, and growSize +0x56; constructor initializes these to 0,0,0,1. The scalar fields +0x58..+0x68 are curveScalar/minimumLeafAngle/maximumLeafAngle/branchDimming/leafDimming, with directly verified consumers/defaults matching Fallout. +0x6C/+0x70/+0x74 remain Unknown; billboard size names at +0x78/+0x7C remain Probable.
TESObjectTREE_OblivionLayout_080_NiTArrayVerified *__thiscall TESObjectTREE_ctor(
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this)
{
  double v2; // st7
  double v3; // st7

  sub_4B31F0((TESForm *)this); /*0x4b9dcb*/
  TESModel::TESModel((TESModel *)&this->prefix_000_047[0x24]); /*0x4b9ddb*/
  *(_DWORD *)&this->prefix_000_047[0x24] = &TESModelTree::`vftable'; /*0x4b9de0*/
  TESTexture_constr((TESTexture *)&this->prefix_000_047[0x3C]); /*0x4b9df0*/
  *(_DWORD *)&this->prefix_000_047[0x3C] = &TESIconTree::`vftable'; /*0x4b9df5*/
  v2 = flt_A45128; /*0x4b9dfc*/
  *(_DWORD *)this->prefix_000_047 = &TESObjectTREE::`vftable'{for `TESObjectTREE'}; /*0x4b9e02*/
  *(_DWORD *)&this->prefix_000_047[0x24] = &TESObjectTREE::`vftable'{for `TESModelTree'}; /*0x4b9e08*/
  *(_DWORD *)&this->prefix_000_047[0x3C] = &TESObjectTREE::`vftable'{for `TESIconTree'}; /*0x4b9e0e*/
  this->seedArrayVftable = &NiTArray<unsigned int>::`vftable';// Verified constructor initializes an embedded NiTArray<unsigned int> at TESObjectTREE+0x48, with empty data pointer at +0x4C and zero count at +0x52. Fallout also owns a seed array and serializes it as SNAM; Oblivion's loader has no SNAM branch, so later population is Unknown. /*0x4b9e15*/
  this->seedCapacity = 0;                       // Verified embedded NiTArray<unsigned int>. Constructor initializes capacity +0x50 to zero. /*0x4b9e1c*/
  this->seedGrowSize = 1;                       // Verified embedded NiTArray<unsigned int>. Constructor initializes growSize +0x56 to 1. /*0x4b9e20*/
  this->seedCount = 0;                          // Verified embedded NiTArray<unsigned int>. Constructor initializes end/seed count +0x52 to zero; all three seed accessors use this count. /*0x4b9e26*/
  this->seedNumObjects = 0;                     // Verified embedded NiTArray<unsigned int>. Constructor initializes numObjects +0x54 to zero. /*0x4b9e2a*/
  this->seedValues = 0;                         // Verified embedded NiTArray<unsigned int>. Constructor initializes data pointer +0x4C to null; destructor frees the backing allocation. /*0x4b9e2e*/
  this->curveScalar = v2;                       // Verified TESObjectTREE+0x58 curveScalar constructor default is 2.5; matches Fallout's named Data.fCurveScalar default. BSTreeModel_ApplyBaseObject passes this value to the CSpeedTree curve-scalar configuration when the INI override is negative. /*0x4b9e31*/
  v3 = flt_A31E2C; /*0x4b9e34*/
  this->prefix_000_047[4] = 0x1E; /*0x4b9e3a*/
  this->minimumLeafAngle = v3;                  // Verified TESObjectTREE+0x5C minimumLeafAngle default is 5.0; matches Fallout's named minimum-angle default and Oblivion's CSpeedTree minimum bud-angle fallback. /*0x4b9e3e*/
  this->maximumLeafAngle = flt_A44F70;          // Verified TESObjectTREE+0x60 maximumLeafAngle default is 85.0; matches Fallout's named maximum-angle default and Oblivion's CSpeedTree maximum bud-angle fallback. /*0x4b9e47*/
  this->branchDimming = kHeadBodyNormalMatchRadius;// Verified TESObjectTREE+0x64 branchDimming default is 0.5; the virtual getter feeds CSpeedTreeRT_SetBranchDimmingScalar when the INI override is invalid. Fallout's named field/getter agrees. /*0x4b9e50*/
  this->leafDimming = flt_A41724;               // Verified TESObjectTREE+0x68 leafDimming default is 0.7; the virtual getter feeds CSpeedTreeRT_SetLeafDimmingScalar when the INI override is invalid. Fallout's named field/getter agrees. /*0x4b9e59*/
  this->unknown_070 = 1.0;                      // Unknown: this float is initialized to 1.0 at +0x70. No semantic consumer was established in the current tree path. /*0x4b9e5e*/
  this->unknown_074 = 1.0;                      // Unknown: this float is initialized to 1.0 at +0x74. No semantic consumer was established in the current tree path. /*0x4b9e61*/
  this->BillboardSizeX_Probable = g_TESObjectTREE_InitialBillboardSizeX;// Probable mapping: constructor copies global value into BillboardSizeX at +0x78. Direct billboard predicate/geometry use and Fallout's named BillboardSize.x support the member role; the source/initialization of this global at runtime is Unknown. /*0x4b9e69*/
  this->BillboardSizeY_Probable = g_TESObjectTREE_InitialBillboardSizeY;// Probable mapping: constructor copies global value into BillboardSizeY at +0x7C. Direct billboard predicate/geometry use and Fallout's named BillboardSize.y support the member role; the source/initialization of this global at runtime is Unknown. /*0x4b9e72*/
  return this; /*0x4b9e77*/
}
