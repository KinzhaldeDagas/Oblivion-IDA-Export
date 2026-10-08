// TESForm_GetQuestItem: returns TESForm flags bit 0x400. Plugin IsStealableForm uses this, so quest items are skipped before RemoveItem.
bool __thiscall TESForm_GetQuestItem(TESForm *this)
{
  return (this->member.flags & 0x400) != 0; /*0x4d7038*/
}
