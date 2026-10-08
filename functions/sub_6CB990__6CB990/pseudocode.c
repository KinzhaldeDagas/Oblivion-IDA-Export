int __thiscall sub_6CB990(char *this, signed int a2)
{
  signed int v2; // esi
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  int result; // eax
  void (__cdecl *v6)(int, signed int *, int, int *, int); // eax
  void (__cdecl *v7)(int, signed int *, int, int *, int); // eax
  int v8; // esi
  int (__cdecl *v9)(int, signed int *, int, int *, int); // eax
  int v10; // [esp-14h] [ebp-24h]
  int v11; // [esp-14h] [ebp-24h]
  int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x6cb993*/
  sub_709430(this, a2); /*0x6cb99b*/
  sub_715420(this + 0xC, v2); /*0x6cb9a4*/
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6cb9af*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x6cb9bf*/
  a2 = 4; /*0x6cb9c0*/
  result = v4(v10, this + 0x1C, 4, &a2, 1); /*0x6cb9c8*/
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA01006Eu ) /*0x6cb9d7*/
  {
    v11 = *(_DWORD *)(v2 + 0x21C); /*0x6cb9f1*/
    v6 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v11 + 4); /*0x6cb9f2*/
    v13 = 1; /*0x6cb9f5*/
    v6(v11, &a2, 1, &v13, 1); /*0x6cb9fd*/
    if ( !(_BYTE)a2 ) /*0x6cba07*/
      *(float *)this = -flt_A7DEB4; /*0x6cba11*/
    v12 = *(_DWORD *)(v2 + 0x21C); /*0x6cba27*/
    v7 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v12 + 4); /*0x6cba28*/
    v13 = 1; /*0x6cba2b*/
    v7(v12, &a2, 1, &v13, 1); /*0x6cba33*/
    if ( !(_BYTE)a2 ) /*0x6cba3d*/
      *((float *)this + 4) = -flt_A7DEB4; /*0x6cba47*/
    v8 = *(_DWORD *)(v2 + 0x21C); /*0x6cba4a*/
    v9 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v8 + 4); /*0x6cba50*/
    v13 = 1; /*0x6cba62*/
    result = v9(v8, &a2, 1, &v13, 1); /*0x6cba6a*/
    if ( !(_BYTE)a2 ) /*0x6cba74*/
      *((float *)this + 7) = -flt_A7DEB4; /*0x6cba7e*/
  }
  return result; /*0x6cba80*/
}
