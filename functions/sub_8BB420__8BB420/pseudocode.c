int sub_8BB420()
{
  int v0; // esi
  bool v1; // zf
  int result; // eax
  int *v3; // edi
  int v4; // eax
  int i; // ebx
  int j; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h]
  unsigned int v12; // [esp+14h] [ebp-4h]

  v0 = unk_BA8188; /*0x8bb425*/
  v1 = unk_BA8188 == 0; /*0x8bb42d*/
  result = 0x80000000; /*0x8bb42f*/
  v3 = &unk_BA8188; /*0x8bb435*/
  v10 = 0; /*0x8bb43a*/
  v11 = 0; /*0x8bb43e*/
  v12 = 0x80000000; /*0x8bb442*/
  if ( !v1 ) /*0x8bb446*/
  {
    while ( 1 ) /*0x8bb448*/
    {
      if ( !**(_DWORD **)(v0 + 8) ) /*0x8bb44b*/
      {
        v4 = (*(int (**)(void))v0)(); /*0x8bb44f*/
        if ( !v4 ) /*0x8bb453*/
        {
          if ( v11 == (v12 & 0x3FFFFFFF) ) /*0x8bb4ff*/
            sub_8A6EE0((const void **)&v10, 4); /*0x8bb508*/
          v10[v11++] = v0; /*0x8bb518*/
          v0 = *(_DWORD *)(v0 + 4); /*0x8bb521*/
          *(_DWORD *)(*v3 + 4) = 0; /*0x8bb524*/
          *v3 = v0; /*0x8bb527*/
          goto LABEL_6; /*0x8bb529*/
        }
        **(_DWORD **)(v0 + 8) = v4; /*0x8bb45c*/
      }
      v3 = (int *)(v0 + 4); /*0x8bb45e*/
      v0 = *(_DWORD *)(v0 + 4); /*0x8bb461*/
LABEL_6:
      if ( !v0 ) /*0x8bb465*/
      {
        for ( i = v11; v11; i = v11 ) /*0x8bb46e*/
        {
          for ( j = i - 1; j >= 0; --j ) /*0x8bb473*/
          {
            v7 = v10[j]; /*0x8bb479*/
            v8 = (*(int (**)(void))v7)(); /*0x8bb47c*/
            if ( v8 ) /*0x8bb480*/
            {
              **(_DWORD **)(v7 + 8) = v8; /*0x8bb485*/
              *v3 = v7; /*0x8bb487*/
              --v11; /*0x8bb492*/
              v3 = (int *)(v7 + 4); /*0x8bb499*/
              v10[j] = v10[v11]; /*0x8bb49c*/
            }
          }
        }
        result = v12; /*0x8bb4aa*/
        break; /*0x8bb4aa*/
      }
    }
  }
  if ( result >= 0 ) /*0x8bb4b1*/
  {
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8bb4c3*/
    if ( !v9 ) /*0x8bb4cb*/
      v9 = unk_BA7D9C; /*0x8bb4cd*/
    return sub_8A75D0(v9, v10, 4 * result, 0x14); /*0x8bb4e3*/
  }
  return result; /*0x8bb4e8*/
}
