signed int __fastcall sub_918AA0(int a1, int a2, int a3)
{
  int *v5; // eax
  int *v6; // esi
  int v7; // edx

  if ( sub_9186D0((int *)(a1 - 8), a3) >= 0 ) /*0x918ab3*/
    return 0; /*0x918ab6*/
  v5 = (int *)sub_947AC0((LPCRITICAL_SECTION *)unk_BA950C, a3, a1 + 0x3C); /*0x918ac7*/
  v6 = v5; /*0x918acc*/
  if ( !v5 ) /*0x918ad0*/
    return 1; /*0x918b32*/
  v5[2] = *(_DWORD *)(a1 + 0xC); /*0x918ada*/
  v5[3] = *(_DWORD *)(a1 + 0x10); /*0x918ae4*/
  v7 = *v5; /*0x918ae7*/
  v5[5] = a1 != 8 ? a1 : 0;
  v5[4] = *(_DWORD *)(a1 + 0x14); /*0x918af2*/
  (*(void (__thiscall **)(int *))(v7 + 0x10))(v5); /*0x918af5*/
  if ( *(_DWORD *)(a1 + 0x34) == (*(_DWORD *)(a1 + 0x38) & 0x3FFFFFFF) ) /*0x918b08*/
    sub_8A6EE0((const void **)(a1 + 0x30), 4); /*0x918b0d*/
  *(_DWORD *)(*(_DWORD *)(a1 + 0x30) + 4 * (*(_DWORD *)(a1 + 0x34))++) = v6; /*0x918b1a*/
  sub_947EE0((char **)(a1 + 0x1C), v6); /*0x918b24*/
  return 0; /*0x918ab5*/
}
