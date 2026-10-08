NiTPointerList_Node_void *__thiscall sub_7C1F50(BSTextureManager *this, int a2, char a3)
{
  NiTPointerList_Node_void *i; // eax
  NiTPointerList_Node_void *result; // eax
  _BYTE *data; // edi
  int v7; // esi
  void *node; // [esp+8h] [ebp-4h] BYREF

  for ( i = this->unk10.start; i; i = i->next ) /*0x7c1f5c*/
  {
    if ( !a3 ) /*0x7c1f64*/
      *((_BYTE *)i->data + 0x10) = 0; /*0x7c1f69*/
  }
  node = this->unk00.start; /*0x7c1f77*/
  result = (NiTPointerList_Node_void *)node; /*0x7c1f72*/
  if ( node ) /*0x7c1f7b*/
  {
    do /*0x7c1f84*/
    {
      data = result->data; /*0x7c1f84*/
      if ( !a3 ) /*0x7c1f87*/
      {
        if ( !data[0x10] && (data[0xC] & 0x20) == 0 ) /*0x7c1f92*/
        {
          NiTPointerList_RemoveNode(this, &node); /*0x7c1f9b*/
          v7 = *(_DWORD *)data; /*0x7c1fa0*/
          if ( *(_DWORD *)data ) /*0x7c1fa0*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x7c1faa*/
            {
              if ( v7 ) /*0x7c1fb6*/
                (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7c1fc0*/
            }
          }
          FormHeapFree((unsigned int)data); /*0x7c1fc3*/
          result = (NiTPointerList_Node_void *)node; /*0x7c1fc8*/
          continue; /*0x7c1fcf*/
        }
        data[0x10] = 0; /*0x7c1fd1*/
      }
      result = result->next; /*0x7c1fd4*/
      node = result; /*0x7c1fd6*/
    }
    while ( result ); /*0x7c1f84*/
  }
  return result; /*0x7c1fe0*/
}
