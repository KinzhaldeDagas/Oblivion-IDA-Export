// Verified (Oblivion): ActiveEffect_Register_COHU_Factory passes FourCC COHU (0x55484F43) and CommandHumanoidEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_COHU_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x55484F43u, CommandHumanoidEffect_Make); /*0x9feb1a*/
  unk_B3C0A8 = result; /*0x9feb22*/
  return result; /*0x9feb27*/
}
