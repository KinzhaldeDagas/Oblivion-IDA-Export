// Verified (Oblivion): ActiveEffect_Register_REAN_Factory passes FourCC REAN (0x4E414552) and ReanimateEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_REAN_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4E414552u, ReanimateEffect_Make); /*0x9fed4a*/
  unk_B3C0DF = result; /*0x9fed52*/
  return result; /*0x9fed57*/
}
