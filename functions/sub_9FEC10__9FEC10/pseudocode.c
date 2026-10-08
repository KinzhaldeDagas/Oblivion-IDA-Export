// Verified (Oblivion): ActiveEffect_Register_INVI_Factory passes FourCC INVI (0x49564E49) and InvisibilityEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_INVI_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x49564E49u, InvisibilityEffect_Make); /*0x9fec1a*/
  unk_B3C0B1 = result; /*0x9fec22*/
  return result; /*0x9fec27*/
}
