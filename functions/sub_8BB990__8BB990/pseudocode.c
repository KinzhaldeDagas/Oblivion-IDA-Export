int sub_8BB990()
{
  int v0; // esi
  int v1; // ecx
  int result; // eax
  int v3; // esi
  int *v4; // edx
  int v5; // ecx
  int v6; // ecx
  char *v7; // [esp+4h] [ebp-20Ch] BYREF
  int v8; // [esp+8h] [ebp-208h]
  unsigned int i; // [esp+Ch] [ebp-204h]
  char v10; // [esp+10h] [ebp-200h] BYREF

  v0 = unk_BA8188; /*0x8bb99b*/
  v7 = &v10; /*0x8bb9a1*/
  v1 = 0; /*0x8bb9a5*/
  result = 0x80000080; /*0x8bb9a9*/
  v8 = 0; /*0x8bb9ae*/
  for ( i = 0x80000080; v0; v0 = *(_DWORD *)(v0 + 4) ) /*0x8bb9b6*/
  {
    if ( v1 == (result & 0x3FFFFFFF) ) /*0x8bb9c7*/
    {
      sub_8A6EE0((const void **)&v7, 4); /*0x8bb9d0*/
      v1 = v8; /*0x8bb9d5*/
    }
    *(_DWORD *)&v7[4 * v1] = v0; /*0x8bb9e0*/
    result = i; /*0x8bb9e7*/
    v1 = ++v8; /*0x8bb9eb*/
  }
  v3 = v1 - 1; /*0x8bb9f7*/
  if ( v1 - 1 >= 0 ) /*0x8bb9fc*/
  {
    do /*0x8bba36*/
    {
      v4 = *(int **)(*(_DWORD *)&v7[4 * v3] + 8); /*0x8bba07*/
      v5 = *v4; /*0x8bba0a*/
      if ( *(_WORD *)(*v4 + 4) ) /*0x8bba0c*/
      {
        if ( !--*(_WORD *)(v5 + 6) ) /*0x8bba17*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x8bba22*/
      }
      --v3; /*0x8bba24*/
      **(_DWORD **)(*(_DWORD *)&v7[4 * v3 + 4] + 8) = 0; /*0x8bba30*/
    }
    while ( v3 >= 0 ); /*0x8bba36*/
    result = i; /*0x8bba38*/
  }
  if ( result >= 0 ) /*0x8bba3f*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8bba51*/
    if ( !v6 ) /*0x8bba59*/
      v6 = unk_BA7D9C; /*0x8bba5b*/
    return sub_8A75D0(v6, v7, 4 * result, 0x14); /*0x8bba70*/
  }
  return result; /*0x8bba3e*/
}
