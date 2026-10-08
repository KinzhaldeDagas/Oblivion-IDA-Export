// Verified (Oblivion): ActiveEffect_Register_TELE_Factory passes FourCC TELE (0x454C4554) and TelekinesisEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_TELE_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x454C4554u, TelekinesisEffect_Make); /*0x9fedaa*/
  unk_B3C0E9 = result; /*0x9fedb2*/
  return result; /*0x9fedb7*/
}
