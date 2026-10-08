// Verified (Oblivion): ActiveEffect_Register_DSPL_Factory passes FourCC DSPL (0x4C505344) and DispelEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_DSPL_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4C505344u, DispelEffect_Make); /*0x9febda*/
  unk_B3C0AF = result; /*0x9febe2*/
  return result; /*0x9febe7*/
}
