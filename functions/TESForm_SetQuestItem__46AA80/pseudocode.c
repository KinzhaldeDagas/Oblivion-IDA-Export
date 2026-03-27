int __thiscall TESForm_SetQuestItem(TESForm *this, char a2)
{
  if ( a2 )
    this->member.flags |= 0x400u;
  else
    this->member.flags &= ~0x400u;
  return ((int (__thiscall *)(TESForm *, int))this->vtbl->MarkAsModified)(this, 1);
}
