int __thiscall TESForm_destr(TESForm *this)
{
  TESForm::ModReferenceList *next; // edi
  int result; // eax

  this->vtbl = (TESFormVtbl *)&TESForm::`vftable';
  TESForm_RemoveFromGlobalLists(this);
  if ( this->member.modlist.next )
  {
    do
    {
      next = this->member.modlist.next->next;
      FormHeapFree((unsigned int)this->member.modlist.next);
      this->member.modlist.next = next;
    }
    while ( next );
  }
  this->member.modlist.data = 0;
  result = (unsigned int)this->member.flags >> 0xE;
  if ( (this->member.flags & 0x4000) == 0 )
  {
    if ( SaveLoad_CurrentSavegame )
    {
      sub_45B780((TESForm *)SaveLoad_CurrentSavegame, (int)this, 0);
      TESForm_RemoveFromList((TESForm *)SaveLoad_CurrentSavegame, (TESFormVtbl *)this);
    }
  }
  return result;
}
