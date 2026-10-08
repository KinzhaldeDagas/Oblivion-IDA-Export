int __thiscall TESForm_destr(TESForm *this)
{
  TESForm::ModReferenceList *next; // edi
  int result; // eax

  this->vtbl = (TESFormVtbl *)&TESForm::`vftable'; /*0x46c283*/
  TESForm_RemoveFromGlobalLists(this); /*0x46c289*/
  if ( this->member.modlist.next ) /*0x46c28e*/
  {
    do /*0x46c2a9*/
    {
      next = this->member.modlist.next->next; /*0x46c298*/
      FormHeapFree((unsigned int)this->member.modlist.next); /*0x46c29c*/
      this->member.modlist.next = next; /*0x46c2a6*/
    }
    while ( next ); /*0x46c2a9*/
  }
  this->member.modlist.data = 0; /*0x46c2ac*/
  result = (unsigned int)this->member.flags >> 0xE; /*0x46c2b6*/
  if ( (this->member.flags & 0x4000) == 0 ) /*0x46c2bb*/
  {
    if ( g_TESSaveLoadGame ) /*0x46c2bd*/
    {
      sub_45B780((TESForm *)g_TESSaveLoadGame, (unsigned int)this, 0); /*0x46c2ca*/
      TESSaveLoadGame_RemoveDeferredDeletion(g_TESSaveLoadGame, this); /*0x46c2d6*/
    }
  }
  return result; /*0x46c2db*/
}
