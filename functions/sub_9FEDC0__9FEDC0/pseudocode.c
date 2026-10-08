// Verified (Oblivion): ActiveEffect_Register_TURN_Factory passes FourCC TURN (0x4E525554) and TurnUndeadEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
bool __cdecl ActiveEffect_Register_TURN_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4E525554u, TurnUndeadEffect_Make); /*0x9fedca*/
  unk_B3C0EA = result; /*0x9fedd2*/
  return result; /*0x9fedd7*/
}
