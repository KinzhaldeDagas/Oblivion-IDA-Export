int __thiscall sub_88F2D0(char *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int (__cdecl *v5)(int, char *, int, signed int *, int); // edx
  int result; // eax
  void (__cdecl *v7)(int, _BYTE *, int, signed int *, int); // eax
  int v8; // esi
  int (__cdecl *v9)(int, _BYTE *, int, signed int *, int); // eax
  int v10; // [esp-28h] [ebp-38h]
  int v11; // [esp-14h] [ebp-24h]
  int v12; // [esp-14h] [ebp-24h]
  _BYTE v13[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x88f2d3*/
  sub_89E940(a2); /*0x88f2db*/
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x88f2f7*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v11 + 4); /*0x88f2f8*/
  a2 = 4; /*0x88f2fb*/
  v4(v11, this + 0x14, 4, &a2, 1); /*0x88f2ff*/
  v5 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x88f307*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x88f316*/
  a2 = 4; /*0x88f317*/
  result = v5(v10, this + 0x18, 4, &a2, 1); /*0x88f31b*/
  if ( *(_DWORD *)(v2 + 4) < 8u ) /*0x88f324*/
  {
    v12 = *(_DWORD *)(v2 + 0x21C); /*0x88f339*/
    v7 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v12 + 4); /*0x88f33a*/
    a2 = 4; /*0x88f33d*/
    v7(v12, v13, 4, &a2, 1); /*0x88f341*/
    v8 = *(_DWORD *)(v2 + 0x21C); /*0x88f343*/
    v9 = *(int (__cdecl **)(int, _BYTE *, int, signed int *, int))(v8 + 4); /*0x88f349*/
    a2 = 4; /*0x88f35a*/
    return v9(v8, v13, 4, &a2, 1); /*0x88f35e*/
  }
  return result; /*0x88f363*/
}
