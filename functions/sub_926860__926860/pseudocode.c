int __thiscall sub_926860(char *this, int a2)
{
  int v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, int *, int); // eax
  void (__cdecl *v6)(int, int, int, int *, int); // eax
  int v8; // [esp-28h] [ebp-30h]
  int v9; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x926861*/
  sub_8A0C30(this, a2); /*0x926869*/
  v4 = *((_DWORD *)this + 1); /*0x92686e*/
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x926884*/
  v5 = *(void (__cdecl **)(int, int, int, int *, int))(v9 + 4); /*0x926885*/
  a2 = 4; /*0x926888*/
  v5(v9, v4 + 0x10, 4, &a2, 1); /*0x926890*/
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x9268a5*/
  v6 = *(void (__cdecl **)(int, int, int, int *, int))(v8 + 4); /*0x9268a6*/
  a2 = 1; /*0x9268a9*/
  v6(v8, v4 + 0x14, 1, &a2, 1); /*0x9268b1*/
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x9268c7*/
    *(_DWORD *)(v2 + 0x21C),
    v4 + 0x20,
    0x40,
    0,
    0);
  return (*(int (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x9268e2*/
           *(_DWORD *)(v2 + 0x21C),
           v4 + 0x60,
           0x40,
           0,
           0);
}
