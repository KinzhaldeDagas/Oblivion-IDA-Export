int __usercall _setlocale_get_all@<eax>(const char *a1@<edi>, int a2@<esi>)
{
  int result; // eax
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
  void *Memory; // [esp+10h] [ebp-4h]

  v12 = 1;
  result = unknown_libname_72();
  Memory = (void *)result;
  if ( result )
  {
    v9 = a1;
    v3 = (char *)(result + 4);
    *(_BYTE *)(result + 4) = 0;
    *(_DWORD *)result = 1;
    v4 = a2 + 0x10;
    v11 = 1;
    v5 = (const char **)(a2 + 0x58);
    _strcats((const char *)a2, (char *)(result + 4), 0x300000351uLL);
    v10 = &off_AA486C;
    do
    {
      HIDWORD(v8) = ";";
      LODWORD(v8) = 0x351;
      if ( strcat_s(v3, v8, v9) )
        _invoke_watson(0, v6, v7, (int)v5, (int)v3, a2);
      if ( strcmp(*v5, *(const char **)(v4 + 0x58)) )
        v12 = 0;
      ++v11;
      v10 += 3;
      v4 = 0x10 * v11 + a2;
      v5 = (const char **)(v4 + 0x48);
      _strcats((const char *)a2, v3, 0x300000351uLL);
    }
    while ( (int)v10 < (int)off_AA489C );
    if ( v12 )
    {
      free(Memory);
      if ( *(_DWORD *)(a2 + 0x50) )
      {
        if ( !InterlockedDecrement(*(volatile LONG **)(a2 + 0x50)) )
          free(*(void **)(a2 + 0x50));
      }
      if ( *(_DWORD *)(a2 + 0x54) )
      {
        if ( !InterlockedDecrement(*(volatile LONG **)(a2 + 0x54)) )
          free(*(void **)(a2 + 0x54));
      }
      result = *(_DWORD *)(a2 + 0x68);
      *(_DWORD *)(a2 + 0x50) = 0;
      *(_DWORD *)(a2 + 0x48) = 0;
    }
    else
    {
      if ( *(_DWORD *)(a2 + 0x50) )
      {
        if ( !InterlockedDecrement(*(volatile LONG **)(a2 + 0x50)) )
          free(*(void **)(a2 + 0x50));
      }
      if ( *(_DWORD *)(a2 + 0x54) )
      {
        if ( !InterlockedDecrement(*(volatile LONG **)(a2 + 0x54)) )
          free(*(void **)(a2 + 0x54));
      }
      *(_DWORD *)(a2 + 0x50) = Memory;
      *(_DWORD *)(a2 + 0x48) = v3;
      result = (int)v3;
    }
    *(_DWORD *)(a2 + 0x4C) = 0;
    *(_DWORD *)(a2 + 0x54) = 0;
  }
  return result;
}
