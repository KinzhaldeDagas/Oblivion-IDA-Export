// Verified (Oblivion): ActiveEffect_Register_COCR_Factory passes FourCC COCR (0x52434F43) and CommandCreatureEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_COCR_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x52434F43u, CommandCreatureEffect_Make); /*0x9feafa*/
  unk_B3C0A7 = result; /*0x9feb02*/
  return result; /*0x9feb07*/
}
