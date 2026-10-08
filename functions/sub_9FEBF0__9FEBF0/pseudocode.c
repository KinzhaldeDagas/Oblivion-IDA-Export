// Verified (Oblivion): ActiveEffect_Register_FRNZ_Factory passes FourCC FRNZ (0x5A4E5246) and FrenzyEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_FRNZ_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x5A4E5246u, FrenzyEffect_Make); /*0x9febfa*/
  unk_B3C0B0 = result; /*0x9fec02*/
  return result; /*0x9fec07*/
}
