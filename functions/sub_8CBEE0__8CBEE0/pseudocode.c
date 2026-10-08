int __cdecl sub_8CBEE0(int a1, int a2, const void **a3)
{
  int result; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  int v7; // edi
  _WORD *v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  char *v12; // [esp+8h] [ebp-4Ch] BYREF
  int v13; // [esp+Ch] [ebp-48h]
  unsigned int v14; // [esp+10h] [ebp-44h]
  char v15; // [esp+14h] [ebp-40h] BYREF

  result = a2; /*0x8cbee3*/
  v12 = &v15; /*0x8cbeec*/
  v4 = *(_DWORD *)(a2 + 0xBC); /*0x8cbef0*/
  v5 = 0; /*0x8cbef6*/
  v6 = 0x80000010; /*0x8cbefa*/
  v7 = *(_DWORD *)(a2 + 0x54); /*0x8cbf00*/
  v13 = 0; /*0x8cbf03*/
  v14 = 0x80000010; /*0x8cbf07*/
  if ( v4 > 0 ) /*0x8cbf0b*/
  {
    do /*0x8cbff7*/
    {
      v8 = *(_WORD **)(*(_DWORD *)(result + 0xB8) + 4 * v5); /*0x8cbf26*/
      if ( v8 ) /*0x8cbf2b*/
      {
        (*(void (__thiscall **)(_WORD *, char **))(*(_DWORD *)v8 + 0xC))(v8, &v12); /*0x8cbf3a*/
        v9 = 0; /*0x8cbf41*/
        if ( v13 <= 0 ) /*0x8cbf45*/
        {
LABEL_7:
          if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) ) /*0x8cbf7d*/
            sub_8A6EE0(a3, 4); /*0x8cbf82*/
          *((_DWORD *)*a3 + (_DWORD)a3[1]) = v8; /*0x8cbf90*/
          a3[1] = (char *)a3[1] + 1; /*0x8cbf93*/
          if ( v8[2] ) /*0x8cbf96*/
            ++v8[3]; /*0x8cbf9d*/
          sub_8DDC90(v7, (int)v8); /*0x8cbfa4*/
          *(_BYTE *)(v7 + 0x27) = 1; /*0x8cbfa9*/
          if ( *(_WORD *)(v7 + 0x22) == 0xFFFF ) /*0x8cbfb3*/
          {
            *(_WORD *)(v7 + 0x22) = *(_WORD *)(a1 + 0x54); /*0x8cbfc0*/
            if ( *(_DWORD *)(a1 + 0x54) == (*(_DWORD *)(a1 + 0x58) & 0x3FFFFFFF) ) /*0x8cbfd2*/
              sub_8A6EE0((const void **)(a1 + 0x50), 4); /*0x8cbfd7*/
            *(_DWORD *)(*(_DWORD *)(a1 + 0x50) + 4 * (*(_DWORD *)(a1 + 0x54))++) = v7; /*0x8cbfe4*/
          }
        }
        else
        {
          while ( 1 ) /*0x8cbf54*/
          {
            v10 = *(_DWORD *)&v12[4 * v9]; /*0x8cbf54*/
            if ( !*(_BYTE *)(v10 + 0x91) && v10 != a2 ) /*0x8cbf64*/
              break; /*0x8cbf64*/
            if ( ++v9 >= v13 ) /*0x8cbf6d*/
              goto LABEL_7; /*0x8cbf6d*/
          }
        }
      }
      result = a2; /*0x8cbfea*/
      ++v5; /*0x8cbff4*/
    }
    while ( v5 < *(_DWORD *)(a2 + 0xBC) ); /*0x8cbff7*/
    v6 = v14; /*0x8cbffd*/
  }
  if ( v6 >= 0 ) /*0x8cc007*/
  {
    v11 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8cc018*/
    if ( !v11 ) /*0x8cc020*/
      v11 = unk_BA7D9C; /*0x8cc022*/
    return sub_8A75D0(v11, v12, 4 * v6, 0x14); /*0x8cc039*/
  }
  return result; /*0x8cc005*/
}
