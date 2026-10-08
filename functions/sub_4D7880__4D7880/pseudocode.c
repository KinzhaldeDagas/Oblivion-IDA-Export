// Verified per-reference seed writer. For a TREE form, maps the requested uint32 seed through TESObjectTREE_GetIndexForSeed and stores the byte in ExtraData_Seed. If the tree seed array is empty or the seed is absent, the index is 0xFF; ExtraDataList_SetOrRemoveTreeSeed treats 0xFF as remove, so no concrete per-reference seed is retained. Whether another runtime path populates Oblivion's array remains Unknown.
void __thiscall TESObjectREFR_SetTreeSeedByValue(TESObjectREFR *this, int seedValue)
{
  ExtraDataList *p_baseExtraList; // edi
  TESForm *v4; // eax
  signed __int8 seedValuea; // [esp+Ch] [ebp+4h]

  p_baseExtraList = &this->member.baseExtraList; /*0x4d7884*/
  if ( this != (TESObjectREFR *)0xFFFFFFBC && this->vtbl->GetBaseForm(this)->member.type == kFormType_Tree ) /*0x4d7899*/
  {
    v4 = this->vtbl->GetBaseForm(this); /*0x4d78a5*/
    if ( v4 ) /*0x4d78a9*/
    {
      seedValuea = ((int (__thiscall *)(TESForm *, int))v4->vtbl[1].Unk_12)(v4, seedValue); /*0x4d78bc*/
      ExtraDataList_SetOrRemoveTreeSeed(p_baseExtraList, seedValuea); /*0x4d78c7*/
    }
  }
}
