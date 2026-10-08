SInt32 __thiscall TESContainer_GetFormCount(TESContainer *this, TESForm *a2)
{
  TESContainer_Entry *p_list; // eax

  p_list = &this->list; /*0x469ca4*/
  if ( !this->list.data ) /*0x469ca0*/
    return 0; /*0x469cbe*/
  while ( p_list->data->type != a2 ) /*0x469cb5*/
  {
    p_list = p_list->next; /*0x469cb7*/
    if ( !p_list ) /*0x469cbc*/
      return 0; /*0x469cbc*/
  }
  return p_list->data->count; /*0x469cc0*/
}
