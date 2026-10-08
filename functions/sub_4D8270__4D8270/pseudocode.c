// Set reference action-state bits and synchronize special bit 0x04 with loaded/runtime open-state handling. ONAM itself represents action flag 0x08; PostLinkModifiedForm tests that bit before selecting set/clear paths.
void __thiscall TESObjectREFR_SetActionFlagBits(TESObjectREFR *this, unsigned int mask)
{
  int v3; // eax
  ExtraDataList *p_baseExtraList; // ecx
  bool v5; // al
  bool v6; // zf
  TESObjectREFRVtbl *vtbl; // eax

  if ( mask == 4 ) /*0x4d827b*/
  {
    v3 = sub_4533F0(g_TESSaveLoadGame, (int)this, 0); /*0x4d8286*/
    p_baseExtraList = &this->member.baseExtraList; /*0x4d8292*/
    if ( (v3 & 0x40000) != 0 ) /*0x4d8295*/
      v5 = !ExtraDataList_TestActionFlagBits(p_baseExtraList, 8u); /*0x4d829e*/
    else
      v5 = ExtraDataList_TestActionFlagBits(p_baseExtraList, 8u); /*0x4d82a3*/
    v6 = !v5; /*0x4d82a8*/
    vtbl = this->vtbl; /*0x4d82aa*/
    if ( !v6 ) /*0x4d82b3*/
    {
      vtbl->super.ClearModified((TESForm *)this, 0x80000); /*0x4d82b8*/
      ExtraDataList_SetActionFlagBits(&this->member.baseExtraList, 4u); /*0x4d82be*/
      return; /*0x4d82c5*/
    }
    vtbl->super.MarkAsModified((TESForm *)this, 0x80000); /*0x4d82cb*/
  }
  ExtraDataList_SetActionFlagBits(&this->member.baseExtraList, mask); /*0x4d82d1*/
}
