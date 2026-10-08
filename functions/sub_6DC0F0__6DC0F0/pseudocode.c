int __thiscall sub_6DC0F0(_DWORD *this, signed int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, _DWORD *, int, signed int *, int); // eax
  int v10; // [esp-50h] [ebp-58h]
  int v11; // [esp-3Ch] [ebp-44h]
  int v12; // [esp-28h] [ebp-30h]
  int v13; // [esp-14h] [ebp-1Ch]
  int v14; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2; /*0x6dc0f1*/
  j_j_nullsub_3(a2); /*0x6dc0f9*/
  v13 = v2[0x88]; /*0x6dc111*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v13 + 8); /*0x6dc112*/
  a2 = 2; /*0x6dc115*/
  v4(v13, this + 3, 2, &a2, 1); /*0x6dc11d*/
  v12 = v2[0x88]; /*0x6dc132*/
  v5 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v12 + 8); /*0x6dc133*/
  a2 = 4; /*0x6dc136*/
  v5(v12, this + 0xE, 4, &a2, 1); /*0x6dc13e*/
  v11 = v2[0x88]; /*0x6dc153*/
  v6 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v11 + 8); /*0x6dc154*/
  a2 = 4; /*0x6dc157*/
  v6(v11, this + 0xA, 4, &a2, 1); /*0x6dc15f*/
  v10 = v2[0x88]; /*0x6dc174*/
  v7 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v10 + 8); /*0x6dc175*/
  a2 = 4; /*0x6dc178*/
  v7(v10, this + 0xB, 4, &a2, 1); /*0x6dc180*/
  v14 = v2[0x88]; /*0x6dc198*/
  v8 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v14 + 8); /*0x6dc199*/
  a2 = 2; /*0x6dc19c*/
  v8(v14, this + 0xC, 2, &a2, 1); /*0x6dc1a4*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 6)); /*0x6dc1b4*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 7)); /*0x6dc1c3*/
}
