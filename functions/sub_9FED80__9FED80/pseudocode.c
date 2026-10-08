// Verified (Oblivion): ActiveEffect_Register_SUDG_Factory passes FourCC SUDG (0x47445553) and SunDamageEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_SUDG_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x47445553u, SunDamageEffect_Make); /*0x9fed8a*/
  unk_B3C0E8 = result; /*0x9fed92*/
  return result; /*0x9fed97*/
}
