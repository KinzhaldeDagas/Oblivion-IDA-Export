bool __thiscall TESContainer_HasForm(TESContainer *this, TESForm *a2)
{
  TESContainer_Entry *p_list; // eax

  if ( (this->type & 1) == 0 )
    return 0;
  p_list = &this->list;
  if ( !this->list.data )
    return 0;
  while ( p_list->data->type != a2 )
  {
    p_list = p_list->next;
    if ( !p_list )
      return 0;
  }
  return 1;
}
