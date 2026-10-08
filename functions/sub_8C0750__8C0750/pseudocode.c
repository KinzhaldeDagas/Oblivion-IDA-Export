int __thiscall sub_8C0750(char *this, int a2)
{
  int v2; // esi
  int v4; // edi
  int v5; // esi
  int (__cdecl *v6)(int, int, int, int *, int); // ecx

  v2 = a2; /*0x8c0751*/
  sub_8A0C30(this, a2); /*0x8c0759*/
  v4 = *((_DWORD *)this + 1); /*0x8c075e*/
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x8c0775*/
    *(_DWORD *)(v2 + 0x21C),
    v4 + 0x10,
    0x10,
    0,
    0);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x8c078b*/
    *(_DWORD *)(v2 + 0x21C),
    v4 + 0x20,
    0x10,
    0,
    0);
  v5 = *(_DWORD *)(v2 + 0x21C); /*0x8c078d*/
  v6 = *(int (__cdecl **)(int, int, int, int *, int))(v5 + 4); /*0x8c0793*/
  a2 = 4; /*0x8c07a4*/
  return v6(v5, v4 + 0xC, 4, &a2, 1); /*0x8c07b1*/
}
