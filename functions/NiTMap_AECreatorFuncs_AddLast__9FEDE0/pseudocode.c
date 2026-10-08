// Verified (Oblivion): ActiveEffect_Register_VAMP_Factory passes FourCC VAMP (0x504D4156) and VampirismEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_VAMP_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x504D4156u, VampirismEffect_Make); /*0x9fedea*/
  unk_B3C0EB = result; /*0x9fedf2*/
  return result; /*0x9fedf7*/
}
