// Verified (Oblivion): ActiveEffect_Register_CALM_Factory passes FourCC CALM (0x4D4C4143) and CalmEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_CALM_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4D4C4143u, CalmEffect_Make); /*0x9feaba*/
  unk_B3C0A5 = result; /*0x9feac2*/
  return result; /*0x9feac7*/
}
