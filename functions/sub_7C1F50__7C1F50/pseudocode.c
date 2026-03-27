NiTPointerList_Node_void *__thiscall sub_7C1F50(BSTextureManager *this, int a2, char a3)
{
  NiTPointerList_Node_void *i; // eax
  NiTPointerList_Node_void *result; // eax
  unsigned int data; // edi
  int v7; // esi
  NiTPointerList_Node_void *start; // [esp+8h] [ebp-4h] BYREF

  for ( i = this->unk10.start; i; i = i->next )
  {
    if ( !a3 )
      *((_BYTE *)i->data + 0x10) = 0;
  }
  start = this->unk00.start;
  result = start;
  while ( result )
  {
    data = (unsigned int)result->data;
    if ( !a3 )
    {
      if ( !*(_BYTE *)(data + 0x10) && (*(_BYTE *)(data + 0xC) & 0x20) == 0 )
      {
        sub_7AA860(this, &start);
        v7 = *(_DWORD *)data;
        if ( *(_DWORD *)data )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
          {
            if ( v7 )
              (**(void (__thiscall ***)(int, int))v7)(v7, 1);
          }
        }
        FormHeapFree(data);
        result = start;
        continue;
      }
      *(_BYTE *)(data + 0x10) = 0;
    }
    result = result->next;
    start = result;
  }
  return result;
}
