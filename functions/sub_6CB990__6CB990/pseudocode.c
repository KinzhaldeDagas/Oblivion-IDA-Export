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

  v2 = a2;
  sub_709430(this, a2);
  sub_715420(this + 0xC, v2);
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v10 = *(_DWORD *)(v2 + 0x21C);
  a2 = 4;
  result = v4(v10, this + 0x1C, 4, &a2, 1);
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA01006Eu )
  {
    v11 = *(_DWORD *)(v2 + 0x21C);
    v6 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v11 + 4);
    v13 = 1;
    v6(v11, &a2, 1, &v13, 1);
    if ( !(_BYTE)a2 )
      *(float *)this = -flt_A7DEB4;
    v12 = *(_DWORD *)(v2 + 0x21C);
    v7 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v12 + 4);
    v13 = 1;
    v7(v12, &a2, 1, &v13, 1);
    if ( !(_BYTE)a2 )
      *((float *)this + 4) = -flt_A7DEB4;
    v8 = *(_DWORD *)(v2 + 0x21C);
    v9 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v8 + 4);
    v13 = 1;
    result = v9(v8, &a2, 1, &v13, 1);
    if ( !(_BYTE)a2 )
      *((float *)this + 7) = -flt_A7DEB4;
  }
  return result;
}
