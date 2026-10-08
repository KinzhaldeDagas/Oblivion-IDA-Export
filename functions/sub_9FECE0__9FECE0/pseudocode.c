// Verified (Oblivion): ActiveEffect_Register_NEYE_Factory passes FourCC NEYE (0x4559454E) and NightEyeEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_NEYE_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4559454Eu, NightEyeEffect_Make); /*0x9fecea*/
  unk_B3C0DC = result; /*0x9fecf2*/
  return result; /*0x9fecf7*/
}
