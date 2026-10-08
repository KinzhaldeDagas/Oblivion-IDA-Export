// Verified (Oblivion): ActiveEffect_Register_PARA_Factory passes FourCC PARA (0x41524150) and ParalysisEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_PARA_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x41524150u, ParalysisEffect_Make); /*0x9fed2a*/
  unk_B3C0DE = result; /*0x9fed32*/
  return result; /*0x9fed37*/
}
