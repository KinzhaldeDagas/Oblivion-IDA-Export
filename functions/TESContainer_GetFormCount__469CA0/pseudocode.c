SInt32 __thiscall TESContainer_GetFormCount(TESContainer *this, TESForm *a2)
{
  TESContainer_Entry *p_list; // eax

  p_list = &this->list;
  if ( !this->list.data )
    return 0;
  while ( p_list->data->type != a2 )
  {
    p_list = p_list->next;
    if ( !p_list )
      return 0;
  }
  return p_list->data->count;
}
