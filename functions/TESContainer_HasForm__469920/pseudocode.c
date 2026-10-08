bool __thiscall TESContainer_HasForm(TESContainer *this, TESForm *a2)
{
  TESContainer_Entry *p_list; // eax

  if ( (this->type & 1) == 0 ) /*0x469924*/
    return 0; /*0x469924*/
  p_list = &this->list; /*0x46992a*/
  if ( !this->list.data ) /*0x469926*/
    return 0; /*0x469941*/
  while ( p_list->data->type != a2 ) /*0x469938*/
  {
    p_list = p_list->next; /*0x46993a*/
    if ( !p_list ) /*0x46993f*/
      return 0; /*0x46993f*/
  }
  return 1; /*0x469943*/
}
