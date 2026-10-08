char __thiscall sub_70ACF0(NiNode *this, NiStream *a2)
{
  char result; // al
  unsigned int i; // esi
  NiAVObject *v5; // ecx
  NiTList_Entry *head; // esi
  void *data; // ecx

  result = sub_707AF0(this, (int)a2); /*0x70acf9*/
  if ( result ) /*0x70ad00*/
  {
    for ( i = 0; this->members.children.end > i; ++i ) /*0x70ad07*/
    {
      v5 = this->members.children.data[i]; /*0x70ad1f*/
      if ( v5 ) /*0x70ad24*/
        v5->vtbl->super.FindNodes((NiObject *)v5, a2); /*0x70ad2c*/
    }
    head = this->members.effects.head; /*0x70ad3c*/
    while ( head ) /*0x70ad44*/
    {
      data = head->data; /*0x70ad46*/
      head = head->next; /*0x70ad4e*/
      if ( data ) /*0x70ad50*/
        (*(void (__thiscall **)(void *, NiStream *))(*(_DWORD *)data + 0x24))(data, a2); /*0x70ad58*/
    }
    return 1; /*0x70ad60*/
  }
  return result; /*0x70ad02*/
}
