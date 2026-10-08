int __thiscall sub_6E57A0(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, _DWORD *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e57a2*/
  sub_6ED500(this, a2); /*0x6e57a9*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x6e57c1*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v8 + 8); /*0x6e57c2*/
  a2 = 4; /*0x6e57c5*/
  v4(v8, this + 7, 4, &a2, 1); /*0x6e57cd*/
  v5 = *(_DWORD *)(v2 + 0x220); /*0x6e57cf*/
  v6 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(v5 + 8); /*0x6e57d5*/
  a2 = 4; /*0x6e57e6*/
  return v6(v5, this + 8, 4, &a2, 1); /*0x6e57f3*/
}
