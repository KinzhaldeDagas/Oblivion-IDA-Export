// Verified (Oblivion): ActiveEffect_Register_DARK_Factory passes FourCC DARK (0x4B524144) and DarknessEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_DARK_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4B524144u, DarknessEffect_Make); /*0x9feb3a*/
  unk_B3C0A9 = result; /*0x9feb42*/
  return result; /*0x9feb47*/
}
