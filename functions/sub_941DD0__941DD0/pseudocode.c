_DWORD *__thiscall sub_941DD0(int *this, _DWORD *a2, unsigned int a3)
{
  int v4; // esi
  signed int v5; // esi
  signed int *v6; // eax
  _DWORD *v7; // ecx
  bool v8; // sf
  int v9; // eax
  _DWORD *v10; // ecx
  int v12; // [esp+Ch] [ebp-4h] BYREF

  ++unk_BA7FC0; /*0x941de3*/
  v12 = (int)&unk_BA7FC4; /*0x941de9*/
  if ( !a3 ) /*0x941df1*/
    goto LABEL_6; /*0x941df1*/
  v4 = sub_8B1550(this + 9, a3, 0xFFFFFFFF); /*0x941e01*/
  if ( v4 == 0xFFFFFFFF ) /*0x941e06*/
  {
    v4 = *(this + 0xA) + 1; /*0x941e0b*/
    sub_8B0E80((char **)this + 9, a3, v4); /*0x941e10*/
  }
  if ( v4 ) /*0x941e18*/
  {
    sub_8B1990((char **)&v12, "#%04i", v4); /*0x941e25*/
  }
  else
  {
LABEL_6:
    v5 = sub_8B1860("null"); /*0x941e36*/
    v6 = (signed int *)v12; /*0x941e38*/
    if ( *(_DWORD *)(v12 - 8) < v5 || *(int *)(v12 - 4) > 0 ) /*0x941e4b*/
    {
      v7 = (_DWORD *)(v12 - 0xC); /*0x941e4d*/
      v8 = --*(_DWORD *)(v12 - 0xC + 8) < 0; /*0x941e50*/
      if ( v8 ) /*0x941e53*/
        sub_8B1930(v7); /*0x941e55*/
      v6 = sub_8B1950(v5) + 3; /*0x941e63*/
      v12 = (int)v6; /*0x941e66*/
    }
    sub_8B1890(v6, "null", v5 + 1); /*0x941e74*/
    *(_DWORD *)(v12 - 0xC) = v5; /*0x941e7d*/
  }
  v9 = v12 - 0xC; /*0x941e8b*/
  *(_DWORD *)(v9 + 8) = *(_DWORD *)(v12 - 4) + 1; /*0x941e92*/
  v10 = (_DWORD *)(v12 - 0xC); /*0x941e9c*/
  *a2 = v9 + 0xC; /*0x941e9f*/
  v8 = --v10[2] < 0; /*0x941ea1*/
  if ( v8 ) /*0x941ea4*/
    sub_8B1930(v10); /*0x941ea6*/
  return a2; /*0x941ead*/
}
