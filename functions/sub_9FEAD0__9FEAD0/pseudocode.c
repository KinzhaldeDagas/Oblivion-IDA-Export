// Verified (Oblivion): ActiveEffect_Register_CHML_Factory passes FourCC CHML (0x4C4D4843) and ChameleonEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_CHML_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4C4D4843u, ChameleonEffect_Make); /*0x9feada*/
  unk_B3C0A6 = result; /*0x9feae2*/
  return result; /*0x9feae7*/
}
