// Verified (Oblivion): ActiveEffect_Register_DIWE_Factory passes FourCC DIWE (0x45574944) and DisintegrateWeaponEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_DIWE_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x45574944u, DisintegrateWeaponEffect_Make); /*0x9febba*/
  unk_B3C0AE = result; /*0x9febc2*/
  return result; /*0x9febc7*/
}
