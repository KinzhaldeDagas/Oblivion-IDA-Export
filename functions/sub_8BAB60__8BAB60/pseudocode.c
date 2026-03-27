// positive sp value has been detected, the output may be wrong!
int __thiscall sub_8BAB60(int this)
{
  int i; // esi
  int result; // eax
  int v4; // ebp
  int v5; // esi
  const void *v6; // eax
  unsigned int v7; // edi
  void *v8; // [esp-8h] [ebp-18h]
  DWORD v9; // [esp-4h] [ebp-14h]

  if ( *(_BYTE *)(this + 0x10) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 0x104); ++i )
      WaitForSingleObject_0(v8, v9);
    *(_BYTE *)(this + 0x10) = 0;
  }
  result = *(_DWORD *)(this + 0x104);
  v4 = 0;
  if ( result > 0 )
  {
    v5 = this + 0x30;
    do
    {
      v6 = *(const void **)v5;
      if ( *(_DWORD *)v5 )
      {
        v7 = *(_DWORD *)(v5 + 4) - (_DWORD)v6;
        sub_8B1890(*(void **)(v5 - 8), v6, v7);
        *(_DWORD *)(v5 - 4) = v7 + *(_DWORD *)(v5 - 8);
      }
      else
      {
        *(_DWORD *)(v5 - 4) = *(_DWORD *)(v5 - 8);
      }
      result = *(_DWORD *)(this + 0x104);
      ++v4;
      v5 += 0x28;
    }
    while ( v4 < result );
  }
  return result;
}
