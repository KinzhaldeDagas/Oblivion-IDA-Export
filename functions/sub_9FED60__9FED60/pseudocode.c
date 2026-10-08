// Verified (Oblivion): ActiveEffect_Register_STRP_Factory passes FourCC STRP (0x50525453) and SoulTrapEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_STRP_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x50525453u, SoulTrapEffect_Make); /*0x9fed6a*/
  unk_B3C0E0 = result; /*0x9fed72*/
  return result; /*0x9fed77*/
}
