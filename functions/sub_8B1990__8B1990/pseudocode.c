char *sub_8B1990(char **a1, char *Format, ...)
{
  char *v2; // eax
  int v3; // ecx
  char *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edi
  char *v9; // eax
  int v10; // ecx
  char *v11; // eax
  int v12; // ecx
  int v13; // esi
  char *result; // eax
  size_t v15; // [esp-Ch] [ebp-1Ch]
  va_list v16; // [esp+0h] [ebp-10h]
  va_list Args; // [esp+1Ch] [ebp+Ch] BYREF

  va_start(Args, Format);
  v2 = *a1; /*0x8b1995*/
  if ( *((int *)*a1 + 0xFFFFFFFF) <= 0 && *((_DWORD *)v2 + 0xFFFFFFFE) + 0xD >= 0x33 ) /*0x8b19ac*/
    goto LABEL_7; /*0x8b19ac*/
  v3 = *((_DWORD *)v2 + 0xFFFFFFFF); /*0x8b19ae*/
  v4 = v2 + 0xFFFFFFF4; /*0x8b19b1*/
  *((_DWORD *)v4 + 2) = --v3; /*0x8b19b5*/
  if ( v3 < 0 ) /*0x8b19b8*/
    (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8b19cc*/
      unk_BA7D98,
      v4,
      *((_DWORD *)v4 + 1) + 0xD,
      0x13);
  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10C, 0x13); /*0x8b19de*/
  *(_DWORD *)v5 = 0xFF; /*0x8b19e1*/
  for ( *(_DWORD *)(v5 + 4) = 0xFF; ; *(_DWORD *)(v5 + 4) = v13 ) /*0x8b19e7*/
  {
    *(_DWORD *)(v5 + 8) = 0; /*0x8b19ee*/
    *a1 = (char *)(v5 + 0xC); /*0x8b19f4*/
LABEL_7:
    HIDWORD(v15) = Format; /*0x8b1a04*/
    v6 = *((_DWORD *)*a1 + 0xFFFFFFFE) + 0xD; /*0x8b1a05*/
    LODWORD(v15) = v6 / 2; /*0x8b1a0f*/
    v7 = _vsnprintf(*a1, v15, Args, v16); /*0x8b1a11*/
    v8 = v7; /*0x8b1a16*/
    if ( v7 >= 0 ) /*0x8b1a1d*/
      break; /*0x8b1a1d*/
    v11 = *a1 + 0xFFFFFFF4; /*0x8b1a4d*/
    v12 = *((_DWORD *)*a1 + 0xFFFFFFFF) - 1; /*0x8b1a50*/
    *((_DWORD *)v11 + 2) = v12; /*0x8b1a51*/
    if ( v12 < 0 ) /*0x8b1a54*/
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8b1a68*/
        unk_BA7D98,
        v11,
        *((_DWORD *)v11 + 1) + 0xD,
        0x13);
    v8 = 2 * v6; /*0x8b1a6b*/
    if ( 2 * v6 <= 0xFF ) /*0x8b1a74*/
      v8 = 0xFF; /*0x8b1a76*/
LABEL_15:
    v13 = v8; /*0x8b1a7b*/
    if ( v8 < 0x33 ) /*0x8b1a80*/
      v13 = 0x33; /*0x8b1a82*/
    v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, v13 + 0xD, 0x13); /*0x8b1a95*/
    *(_DWORD *)v5 = v8; /*0x8b1a98*/
  }
  if ( v7 >= v6 ) /*0x8b1a21*/
  {
    v9 = *a1 + 0xFFFFFFF4; /*0x8b1a28*/
    v10 = *((_DWORD *)*a1 + 0xFFFFFFFF) - 1; /*0x8b1a2b*/
    *((_DWORD *)v9 + 2) = v10; /*0x8b1a2c*/
    if ( v10 < 0 ) /*0x8b1a2f*/
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8b1a43*/
        unk_BA7D98,
        v9,
        *((_DWORD *)v9 + 1) + 0xD,
        0x13);
    goto LABEL_15; /*0x8b1a46*/
  }
  result = *a1; /*0x8b1aa2*/
  *((_DWORD *)*a1 + 0xFFFFFFFD) = v8; /*0x8b1aa4*/
  return result; /*0x8b1aa7*/
}
