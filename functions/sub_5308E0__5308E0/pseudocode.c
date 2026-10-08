// Destroy every TESResponse and responseText owned by this list. CollectResponses creates a clone first, so this cleanup releases the caller's temporary snapshot without clearing the shared global cache.
void __thiscall TESResponseList::Clear(TESResponseListView *this)
{
  TESResponse *first; // edi
  TESResponseNode *next; // eax

  if ( this ) /*0x5308e5*/
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)this) ) /*0x5308f1*/
    {
      first = this->first; /*0x5308f3*/
      if ( this->first ) /*0x5308f3*/
      {
        TESResponse::Destroy(this->first); /*0x5308fb*/
        FormHeapFree((unsigned int)first); /*0x530901*/
      }
      next = this->next; /*0x530909*/
      if ( next ) /*0x53090e*/
      {
        this->next = next->next; /*0x530913*/
        this->first = next->item; /*0x530919*/
        FormHeapFree((unsigned int)next); /*0x53091b*/
      }
      else
      {
        this->first = 0; /*0x530925*/
      }
    }
  }
}
