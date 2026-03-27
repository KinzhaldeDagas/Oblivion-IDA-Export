signed int __fastcall sub_918AA0(int a1, int a2, int a3)
{
  int *v5; // eax
  int *v6; // esi
  int v7; // edx

  if ( sub_9186D0((int *)(a1 - 8), a3) >= 0 )
    return 0;
  v5 = (int *)sub_947AC0((LPCRITICAL_SECTION *)dword_BA950C, a3, a1 + 0x3C);
  v6 = v5;
  if ( !v5 )
    return 1;
  v5[2] = *(_DWORD *)(a1 + 0xC);
  v5[3] = *(_DWORD *)(a1 + 0x10);
  v7 = *v5;
  v5[5] = a1 != 8 ? a1 : 0;
  v5[4] = *(_DWORD *)(a1 + 0x14);
  (*(void (__thiscall **)(int *))(v7 + 0x10))(v5);
  if ( *(_DWORD *)(a1 + 0x34) == (*(_DWORD *)(a1 + 0x38) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)(a1 + 0x30), 4);
  *(_DWORD *)(*(_DWORD *)(a1 + 0x30) + 4 * (*(_DWORD *)(a1 + 0x34))++) = v6;
  sub_947EE0((char *)(a1 + 0x1C), v6);
  return 0;
}
