// Verified base load path reads duration, elapsed and parent-cell FormID; resolves FormID, RTTI-casts to TESObjectCELL, stores at +0x0C, and succeeds only if the cell has a NiNode.
bool __thiscall BSTempEffect_LoadGame(BSTempEffect *self)
{
  TESForm *v2; // eax
  TESObjectCELL *v3; // eax
  UInt32 a1; // [esp+0h] [ebp-Ch]
  unsigned int Dst; // [esp+8h] [ebp-4h] BYREF

  SaveLoad_LoadData(g_TESSaveLoadGame, &self->durationSeconds, 4u); /*0x56bcb3*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->elapsedSeconds, 4u); /*0x56bcc4*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &Dst, 4u); /*0x56bcd6*/
  v2 = TESForm_LookupByFormID(a1); /*0x56bcee*/
  v3 = (TESObjectCELL *)OblivionDynamicCast( /*0x56bcf7*/
                          v2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
  self->parentCell = v3; /*0x56bd01*/
  return v3 && TESObjectCELL_GetNiNode_(v3); /*0x56bd11*/
}
