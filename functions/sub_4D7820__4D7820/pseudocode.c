// Verified per-reference seed read. Missing ExtraData_Seed yields index 0xFF, which calls TESObjectTREE_GetRandomSeed. If the tree seed array is empty, that fallback returns 0. Thus an empty array makes getter results 0 and concrete seed writes no-op; runtime array population outside the TREE record loader remains Unknown.
int __thiscall TESObjectREFR_GetTreeSeed(TESObjectREFR *this)
{
  TESForm *v2; // edi
  unsigned __int8 SeedIndex; // [esp+8h] [ebp-4h]

  if ( this->vtbl->GetBaseForm(this)->member.type != kFormType_Tree ) /*0x4d7835*/
    return 0; /*0x4d7874*/
  v2 = this->vtbl->GetBaseForm(this); /*0x4d7844*/
  if ( !v2 ) /*0x4d7848*/
    return 0; /*0x4d786e*/
  SeedIndex = ExtraDataList_GetSeedIndex(&this->member.baseExtraList); /*0x4d7852*/
  return v2->vtbl[1].GetSaveSize(v2, SeedIndex);// Verified: dispatches to TESObjectTREE_GetSeedAtIndex (vtable +0x128), with the ExtraData_Seed byte. If that byte is 0xFF or the form has no seed table, the accessor uses TESObjectTREE_GetRandomSeed (vtable +0x130). /*0x4d7868*/
}
