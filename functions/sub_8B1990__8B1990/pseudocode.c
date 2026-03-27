char *sub_8B1990(char **a1, char *Format, ...)
{
  char *v2; // eax
  int v3; // ecx
  char *v4; // eax
  int *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  char *result; // eax
  size_t v15; // [esp-Ch] [ebp-1Ch]
  va_list v16; // [esp+0h] [ebp-10h]
  va_list Args; // [esp+1Ch] [ebp+Ch] BYREF

  va_start(Args, Format);
  v2 = *a1;
  if ( *((int *)*a1 + 0xFFFFFFFF) <= 0 && *((_DWORD *)v2 + 0xFFFFFFFE) + 0xD >= 0x33 )
    goto LABEL_7;
  v3 = *((_DWORD *)v2 + 0xFFFFFFFF);
  v4 = v2 + 0xFFFFFFF4;
  *((_DWORD *)v4 + 2) = --v3;
  if ( v3 < 0 )
    (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      v4,
      *((_DWORD *)v4 + 1) + 0xD,
      0x13);
  v5 = (int *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10C, 0x13);
  *v5 = 0xFF;
  for ( v5[1] = 0xFF; ; v5[1] = v13 )
  {
    v5[2] = 0;
    *a1 = (char *)(v5 + 3);
LABEL_7:
    HIDWORD(v15) = Format;
    v6 = *((_DWORD *)*a1 + 0xFFFFFFFE) + 0xD;
    LODWORD(v15) = v6 / 2;
    v7 = _vsnprintf(*a1, v15, Args, v16);
    v8 = v7;
    if ( v7 >= 0 )
      break;
    v11 = (int)(*a1 + 0xFFFFFFF4);
    v12 = *((_DWORD *)*a1 + 0xFFFFFFFF) - 1;
    *(_DWORD *)(v11 + 8) = v12;
    if ( v12 < 0 )
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
        dword_BA7D98,
        v11,
        *(_DWORD *)(v11 + 4) + 0xD,
        0x13);
    v8 = 2 * v6;
    if ( 2 * v6 <= 0xFF )
      v8 = 0xFF;
LABEL_15:
    v13 = v8;
    if ( v8 < 0x33 )
      v13 = 0x33;
    v5 = (int *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, v13 + 0xD, 0x13);
    *v5 = v8;
  }
  if ( v7 >= v6 )
  {
    v9 = (int)(*a1 + 0xFFFFFFF4);
    v10 = *((_DWORD *)*a1 + 0xFFFFFFFF) - 1;
    *(_DWORD *)(v9 + 8) = v10;
    if ( v10 < 0 )
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
        dword_BA7D98,
        v9,
        *(_DWORD *)(v9 + 4) + 0xD,
        0x13);
    goto LABEL_15;
  }
  result = *a1;
  *((_DWORD *)*a1 + 0xFFFFFFFD) = v8;
  return result;
}
