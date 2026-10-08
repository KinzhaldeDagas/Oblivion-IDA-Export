// Verified (Oblivion): ActiveEffect_Register_DIAR_Factory passes FourCC DIAR (0x52414944) and DisintegrateArmorEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_DIAR_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x52414944u, DisintegrateArmorEffect_Make); /*0x9feb9a*/
  unk_B3C0AD = result; /*0x9feba2*/
  return result; /*0x9feba7*/
}
