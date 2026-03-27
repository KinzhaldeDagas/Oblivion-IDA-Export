unsigned int __thiscall sub_536E50(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned int v2; // edi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // esi
  unsigned int result; // eax
  unsigned int v7; // esi

  v1 = this;
  v2 = *(this + 6);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 0x10);
      v4 = *(_DWORD *)(v2 + 4);
      if ( v3 )
      {
        do
        {
          v5 = *(_DWORD *)(v3 + 4);
          MemoryHeap_Free_checked((void *)(v3 - *(unsigned __int8 *)(v3 - 1)));
          v3 = v5;
        }
        while ( v5 );
        v1 = this;
      }
      *(_DWORD *)(v2 + 0x10) = 0;
      FormHeapFree(v2);
      v2 = v4;
    }
    while ( v4 );
  }
  result = v1[7];
  v1[6] = 0;
  if ( result )
  {
    do
    {
      v7 = *(_DWORD *)(result + 4);
      FormHeapFree(result);
      result = v7;
    }
    while ( v7 );
    *(this + 7) = 0;
  }
  else
  {
    v1[7] = 0;
  }
  return result;
}
