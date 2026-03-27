_DWORD *__thiscall sub_70AB90(NiNode *this, int a2)
{
  _DWORD *result; // eax
  NiTList_Entry *i; // esi
  void *data; // eax
  unsigned int j; // esi
  int v7; // ecx

  result = sub_707A40(this, a2);
  for ( i = this->members.effects.head;
        i;
        result = (_DWORD *)(*(int (__thiscall **)(int, void *))(*(_DWORD *)a2 + 0xBC))(a2, data) )
  {
    data = i->data;
    i = i->next;
  }
  for ( j = 0; j < this->members.children.end; ++j )
  {
    result = &this->members.children.data->vtbl;
    v7 = result[j];
    if ( v7 )
      result = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x80))(v7, a2);
  }
  return result;
}
