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

  if ( *(_BYTE *)(this + 0x10) ) /*0x8bab64*/
  {
    for ( i = 0; i < *(_DWORD *)(this + 0x104); ++i ) /*0x8bab77*/
      WaitForSingleObject_0(v8, v9); /*0x8bab82*/
    *(_BYTE *)(this + 0x10) = 0; /*0x8bab92*/
  }
  result = *(_DWORD *)(this + 0x104); /*0x8bab96*/
  v4 = 0; /*0x8bab9c*/
  if ( result > 0 ) /*0x8baba0*/
  {
    v5 = this + 0x30; /*0x8baba2*/
    do /*0x8babda*/
    {
      v6 = *(const void **)v5; /*0x8baba5*/
      if ( *(_DWORD *)v5 ) /*0x8baba5*/
      {
        v7 = *(_DWORD *)(v5 + 4) - (_DWORD)v6; /*0x8babae*/
        sub_8B1890(*(void **)(v5 - 8), v6, v7); /*0x8babb6*/
        *(_DWORD *)(v5 - 4) = v7 + *(_DWORD *)(v5 - 8); /*0x8babc3*/
      }
      else
      {
        *(_DWORD *)(v5 - 4) = *(_DWORD *)(v5 - 8); /*0x8babcb*/
      }
      result = *(_DWORD *)(this + 0x104); /*0x8babce*/
      ++v4; /*0x8babd4*/
      v5 += 0x28; /*0x8babd5*/
    }
    while ( v4 < result ); /*0x8babda*/
  }
  return result; /*0x8babdc*/
}
