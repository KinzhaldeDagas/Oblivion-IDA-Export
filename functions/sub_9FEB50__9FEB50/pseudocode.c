// Verified (Oblivion): ActiveEffect_Register_DEMO_Factory passes FourCC DEMO (0x4F4D4544) and DemoralizeEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_DEMO_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4F4D4544u, DemoralizeEffect_Make); /*0x9feb5a*/
  unk_B3C0AA = result; /*0x9feb62*/
  return result; /*0x9feb67*/
}
