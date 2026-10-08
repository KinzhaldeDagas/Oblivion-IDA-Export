unsigned int __thiscall sub_536E50(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned int v2; // edi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // esi
  unsigned int result; // eax
  unsigned int v7; // esi

  v1 = this; /*0x536e53*/
  v2 = *(this + 6); /*0x536e56*/
  if ( v2 ) /*0x536e61*/
  {
    do /*0x536e9e*/
    {
      v3 = *(_DWORD *)(v2 + 0x10); /*0x536e64*/
      v4 = *(_DWORD *)(v2 + 4); /*0x536e69*/
      if ( v3 ) /*0x536e6c*/
      {
        do /*0x536e88*/
        {
          v5 = *(_DWORD *)(v3 + 4); /*0x536e74*/
          MemoryHeap_Free_checked((void *)(v3 - *(unsigned __int8 *)(v3 - 1))); /*0x536e7f*/
          v3 = v5; /*0x536e86*/
        }
        while ( v5 ); /*0x536e88*/
        v1 = this; /*0x536e8a*/
      }
      *(_DWORD *)(v2 + 0x10) = 0; /*0x536e8f*/
      FormHeapFree(v2); /*0x536e92*/
      v2 = v4; /*0x536e9c*/
    }
    while ( v4 ); /*0x536e9e*/
  }
  result = v1[7]; /*0x536ea1*/
  v1[6] = 0; /*0x536ea6*/
  if ( result ) /*0x536ea9*/
  {
    do /*0x536ec0*/
    {
      v7 = *(_DWORD *)(result + 4); /*0x536eb0*/
      FormHeapFree(result); /*0x536eb4*/
      result = v7; /*0x536ebe*/
    }
    while ( v7 ); /*0x536ec0*/
    *(this + 7) = 0; /*0x536ec8*/
  }
  else
  {
    v1[7] = 0; /*0x536ecf*/
  }
  return result; /*0x536ec6*/
}
