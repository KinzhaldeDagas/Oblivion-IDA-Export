bool __thiscall TESForm_GetQuestItem(TESForm *this)
{
  return (this->member.flags & 0x400) != 0;
}
