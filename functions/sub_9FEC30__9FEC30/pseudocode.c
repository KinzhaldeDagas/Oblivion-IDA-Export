// Verified (Oblivion): ActiveEffect_Register_LGHT_Factory passes FourCC LGHT (0x5448474C) and LightEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_LGHT_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x5448474Cu, LightEffect_Make); /*0x9fec3a*/
  unk_B3C0B8 = result; /*0x9fec42*/
  return result; /*0x9fec47*/
}
