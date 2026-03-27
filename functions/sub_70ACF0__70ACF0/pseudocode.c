char __thiscall sub_70ACF0(NiNode *this, int a2)
{
  char result; // al
  unsigned int i; // esi
  int v5; // ecx
  NiTList_Entry *head; // esi
  void *data; // ecx

  result = sub_707AF0(this, a2);
  if ( result )
  {
    for ( i = 0; this->members.children.end > i; ++i )
    {
      v5 = *((_DWORD *)&this->members.children.data->vtbl + i);
      if ( v5 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2);
    }
    head = this->members.effects.head;
    while ( head )
    {
      data = head->data;
      head = head->next;
      if ( data )
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)data + 0x24))(data, a2);
    }
    return 1;
  }
  return result;
}
