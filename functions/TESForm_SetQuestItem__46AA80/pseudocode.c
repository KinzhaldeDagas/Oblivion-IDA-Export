// TESForm_SetQuestItem: toggles TESForm flags bit 0x400 and marks modified. Confirms quest-item bit used by 0x4D7030.
int __thiscall TESForm_SetQuestItem(TESForm *this, char a2)
{
  if ( a2 ) /*0x46aa85*/
    this->member.flags |= 0x400u; /*0x46aa87*/
  else
    this->member.flags &= ~0x400u; /*0x46aa90*/
  return ((int (__thiscall *)(TESForm *, int))this->vtbl->MarkAsModified)(this, 1);
}
