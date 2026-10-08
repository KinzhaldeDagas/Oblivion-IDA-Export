_DWORD *__thiscall sub_70AB90(NiNode *this, int a2)
{
  _DWORD *result; // eax
  NiTList_Entry *i; // esi
  void *data; // eax
  unsigned int j; // esi
  int v7; // ecx

  result = sub_707A40(this, a2); /*0x70ab9a*/
  for ( i = this->members.effects.head; /*0x70aba7*/
        i;
        result = (_DWORD *)(*(int (__thiscall **)(int, void *))(*(_DWORD *)a2 + 0xBC))(a2, data) )
  {
    data = i->data; /*0x70abbb*/
    i = i->next; /*0x70abbd*/
  }
  for ( j = 0; j < this->members.children.end; ++j ) /*0x70abca*/
  {
    result = this->members.children.data; /*0x70abd3*/
    v7 = result[j]; /*0x70abd9*/
    if ( v7 ) /*0x70abde*/
      result = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x80))(v7, a2); /*0x70abe9*/
  }
  return result; /*0x70abf9*/
}
