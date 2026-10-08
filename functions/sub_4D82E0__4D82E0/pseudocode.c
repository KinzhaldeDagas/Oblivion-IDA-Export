void __thiscall TESObjectREFR_ClearActionFlagBits(TESObjectREFR *this, unsigned int mask)
{
  int v3; // eax
  ExtraDataList *p_baseExtraList; // ecx
  bool v5; // al
  bool v6; // zf
  TESObjectREFRVtbl *vtbl; // eax

  if ( mask == 4 ) /*0x4d82eb*/
  {
    v3 = sub_4533F0(g_TESSaveLoadGame, (int)this, 0); /*0x4d82f6*/
    p_baseExtraList = &this->member.baseExtraList; /*0x4d8302*/
    if ( (v3 & 0x40000) != 0 ) /*0x4d8305*/
      v5 = !ExtraDataList_TestActionFlagBits(p_baseExtraList, 8u); /*0x4d830e*/
    else
      v5 = ExtraDataList_TestActionFlagBits(p_baseExtraList, 8u); /*0x4d8313*/
    v6 = !v5; /*0x4d8318*/
    vtbl = this->vtbl; /*0x4d831a*/
    if ( !v6 ) /*0x4d8323*/
    {
      vtbl->super.MarkAsModified((TESForm *)this, 0x80000); /*0x4d8328*/
      ExtraDataList_ClearActionFlagBits(&this->member.baseExtraList, 4u); /*0x4d832e*/
      return; /*0x4d8335*/
    }
    vtbl->super.ClearModified((TESForm *)this, 0x80000); /*0x4d833b*/
  }
  ExtraDataList_ClearActionFlagBits(&this->member.baseExtraList, mask); /*0x4d8341*/
}
