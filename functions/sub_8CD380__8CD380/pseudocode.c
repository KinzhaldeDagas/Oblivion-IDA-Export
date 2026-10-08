int __cdecl sub_8CD380(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  const void **v5; // edx
  int result; // eax
  int v7; // ebp
  _WORD *v8; // esi
  const void **v9; // ecx
  int i; // esi
  int v11; // eax
  int v12; // ecx
  char *v13; // [esp+Ch] [ebp-4Ch] BYREF
  int v14; // [esp+10h] [ebp-48h]
  unsigned int v15; // [esp+14h] [ebp-44h]
  char v16; // [esp+18h] [ebp-40h] BYREF
  const void **v17; // [esp+60h] [ebp+8h]

  v3 = a3[1]; /*0x8cd389*/
  v5 = *(const void ***)(a2 + 0x54); /*0x8cd395*/
  v13 = &v16; /*0x8cd398*/
  result = 0x80000010; /*0x8cd39c*/
  v7 = 0; /*0x8cd3a1*/
  v17 = v5; /*0x8cd3a5*/
  v14 = 0; /*0x8cd3a9*/
  v15 = 0x80000010; /*0x8cd3b1*/
  if ( v3 > 0 ) /*0x8cd3b5*/
  {
    while ( 1 ) /*0x8cd3c7*/
    {
      v8 = *(_WORD **)(*a3 + 4 * v7); /*0x8cd3c7*/
      v9 = *(const void ***)(a1 + 0x30); /*0x8cd3ce*/
      if ( v5 == v9 ) /*0x8cd3d4*/
      {
        sub_8DE080(v9, (int)v8); /*0x8cd464*/
        if ( v8[2] ) /*0x8cd469*/
        {
          if ( !--v8[3] ) /*0x8cd474*/
            (**(void (__thiscall ***)(_WORD *, int))v8)(v8, 1); /*0x8cd481*/
        }
      }
      else
      {
        sub_8DE080(v5, (int)v8); /*0x8cd3dc*/
        if ( v8[2] ) /*0x8cd3e1*/
        {
          if ( !--v8[3] ) /*0x8cd3ec*/
            (**(void (__thiscall ***)(_WORD *, int))v8)(v8, 1); /*0x8cd3f9*/
        }
        v14 = 0; /*0x8cd3ff*/
        (*(void (__thiscall **)(_WORD *, char **))(*(_DWORD *)v8 + 0xC))(v8, &v13); /*0x8cd40c*/
        for ( i = 0; i < v14; ++i ) /*0x8cd417*/
        {
          v11 = *(_DWORD *)&v13[4 * i]; /*0x8cd424*/
          if ( !*(_BYTE *)(v11 + 0x91) /*0x8cd449*/
            && v11 != a2
            && !*(_BYTE *)(a2 + 0x91)
            && *(_DWORD *)(v11 + 0x54) != *(_DWORD *)(a2 + 0x54) )
          {
            sub_8CD320(*(int **)(v11 + 8), v11, a2); /*0x8cd451*/
          }
        }
      }
      if ( ++v7 >= a3[1] ) /*0x8cd48d*/
        break; /*0x8cd48d*/
      v5 = v17; /*0x8cd3bd*/
    }
    result = v15; /*0x8cd493*/
  }
  if ( result >= 0 ) /*0x8cd49c*/
  {
    v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8cd4ae*/
    if ( !v12 ) /*0x8cd4b6*/
      v12 = unk_BA7D9C; /*0x8cd4b8*/
    return sub_8A75D0(v12, v13, 4 * result, 0x14); /*0x8cd4ce*/
  }
  return result; /*0x8cd499*/
}
