// Verified (Oblivion): ActiveEffect_Register_DTCT_Factory passes FourCC DTCT (0x54435444) and DetectLifeEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_DTCT_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x54435444u, DetectLifeEffect_Make); /*0x9feb7a*/
  unk_B3C0AC = result; /*0x9feb82*/
  return result; /*0x9feb87*/
}
