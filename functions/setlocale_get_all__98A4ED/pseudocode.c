char *__usercall _setlocale_get_all@<eax>(const char *a1@<edi>, int a2@<esi>)
{
  char *result; // eax
  char *v3; // edi
  int v4; // ebp
  const char **v5; // ebx
  int v6; // edx
  int v7; // ecx
  rsize_t v8; // [esp-10h] [ebp-24h]
  const char *v9; // [esp-8h] [ebp-1Ch]
  const int *v10; // [esp+4h] [ebp-10h]
  int v11; // [esp+8h] [ebp-Ch]
  int v12; // [esp+Ch] [ebp-8h]
  char *Memory; // [esp+10h] [ebp-4h]

  v12 = 1; /*0x98a4f9*/
  result = (char *)unknown_libname_72(0x355); /*0x98a4fd*/
  Memory = result; /*0x98a505*/
  if ( result ) /*0x98a509*/
  {
    v9 = a1; /*0x98a510*/
    v3 = result + 4; /*0x98a511*/
    result[4] = 0; /*0x98a514*/
    *(_DWORD *)result = 1; /*0x98a517*/
    v4 = a2 + 0x10; /*0x98a519*/
    v11 = 1; /*0x98a51c*/
    v5 = (const char **)(a2 + 0x58); /*0x98a520*/
    _strcats((const char *)a2, result + 4, 0x300000351uLL); /*0x98a538*/
    v10 = &off_AA486C; /*0x98a540*/
    do /*0x98a5be*/
    {
      HIDWORD(v8) = ";"; /*0x98a548*/
      LODWORD(v8) = 0x351; /*0x98a54d*/
      if ( strcat_s(v3, v8, v9) ) /*0x98a553*/
        _invoke_watson(0, v6, v7, (int)v5, (int)v3, a2); /*0x98a566*/
      if ( strcmp(*v5, *(const char **)(v4 + 0x58)) ) /*0x98a573*/
        v12 = 0; /*0x98a57e*/
      ++v11; /*0x98a583*/
      v10 += 3; /*0x98a58b*/
      v4 = 0x10 * v11 + a2; /*0x98a593*/
      v5 = (const char **)(v4 + 0x48); /*0x98a59a*/
      _strcats((const char *)a2, v3, 0x300000351uLL); /*0x98a5ae*/
    }
    while ( (int)v10 < (int)off_AA489C ); /*0x98a5be*/
    if ( v12 ) /*0x98a5c6*/
    {
      free(Memory); /*0x98a60e*/
      if ( *(_DWORD *)(a2 + 0x50) ) /*0x98a613*/
      {
        if ( !InterlockedDecrement(*(volatile LONG **)(a2 + 0x50)) ) /*0x98a622*/
          free(*(void **)(a2 + 0x50)); /*0x98a62b*/
      }
      if ( *(_DWORD *)(a2 + 0x54) ) /*0x98a631*/
      {
        if ( !InterlockedDecrement(*(volatile LONG **)(a2 + 0x54)) ) /*0x98a639*/
          free(*(void **)(a2 + 0x54)); /*0x98a642*/
      }
      result = *(char **)(a2 + 0x68); /*0x98a648*/
      *(_DWORD *)(a2 + 0x50) = 0; /*0x98a64b*/
      *(_DWORD *)(a2 + 0x48) = 0; /*0x98a64e*/
    }
    else
    {
      if ( *(_DWORD *)(a2 + 0x50) ) /*0x98a5c8*/
      {
        if ( !InterlockedDecrement(*(volatile LONG **)(a2 + 0x50)) ) /*0x98a5d6*/
          free(*(void **)(a2 + 0x50)); /*0x98a5df*/
      }
      if ( *(_DWORD *)(a2 + 0x54) ) /*0x98a5e5*/
      {
        if ( !InterlockedDecrement(*(volatile LONG **)(a2 + 0x54)) ) /*0x98a5ed*/
          free(*(void **)(a2 + 0x54)); /*0x98a5f6*/
      }
      *(_DWORD *)(a2 + 0x50) = Memory; /*0x98a600*/
      *(_DWORD *)(a2 + 0x48) = v3; /*0x98a603*/
      result = v3; /*0x98a606*/
    }
    *(_DWORD *)(a2 + 0x4C) = 0; /*0x98a652*/
    *(_DWORD *)(a2 + 0x54) = 0; /*0x98a655*/
  }
  return result; /*0x98a659*/
}
