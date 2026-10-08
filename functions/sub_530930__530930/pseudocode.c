// Deep-clone every shared TESResponse into a caller-owned response list. TESResponse::CopyFrom copies all 16 TRDT bytes and duplicates responseText; callers clear their temporary list after constructing their own DialogueResponse objects.
void __thiscall TESResponseList::CloneFrom(TESResponseListView *this, TESResponseListView *source)
{
  TESResponseListView *v2; // ebp
  const TESResponse *first; // esi
  TESResponse *v4; // eax
  TESResponse *v5; // edi
  TESResponseListView *v6; // esi
  TESResponseNode **p_next; // eax
  bool v8; // zf
  TESResponseNode *v9; // eax

  TESResponseList::Clear(this); /*0x530959*/
  v2 = source; /*0x53095e*/
  while ( v2 )
  {
    first = v2->first; /*0x530970*/
    if ( !v2->first ) /*0x530970*/
      break; /*0x530975*/
    v2 = (TESResponseListView *)v2->next; /*0x53097b*/
    v4 = (TESResponse *)FormHeapAlloc(0x18u);   // Allocate one 0x18 TESResponse clone. If allocation fails, the next unconditional TESResponse::CopyFrom receives null and dereferences it; native low-memory behavior is a crash. /*0x530980*/
    v5 = v4 ? TESResponse::TESResponse(v4) : 0;
    TESResponse::CopyFrom(v5, first); /*0x5309ac*/
    if ( v5 ) /*0x5309b3*/
    {
      v6 = this; /*0x5309b9*/
      p_next = &this->next; /*0x5309bb*/
      if ( this->next ) /*0x5309bb*/
      {
        do /*0x5309ca*/
        {
          v6 = (TESResponseListView *)*p_next; /*0x5309c2*/
          v8 = (*p_next)->next == 0; /*0x5309c4*/
          p_next = &(*p_next)->next; /*0x5309c7*/
        }
        while ( !v8 ); /*0x5309ca*/
      }
      if ( v6->first ) /*0x5309cc*/
      {
        v9 = (TESResponseNode *)FormHeapAlloc(8u);// Append a cloned response by allocating a list node. If node allocation fails, the just-created TESResponse is not linked or freed; cloning continues, so this individual authored response is omitted and leaked. /*0x5309d2*/
        if ( v9 ) /*0x5309dc*/
        {
          v9->item = v5; /*0x5309de*/
          v9->next = 0; /*0x5309e0*/
          v6->next = v9; /*0x5309e3*/
        }
        else
        {
          v6->next = 0; /*0x5309ea*/
        }
      }
      else
      {
        v6->first = v5; /*0x5309ef*/
      }
    }
  }
}
