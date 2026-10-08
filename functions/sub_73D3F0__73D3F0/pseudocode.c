int __thiscall sub_73D3F0(int *this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, int *, int, int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x73d3f2*/
  sub_725620(this, a2); /*0x73d3f9*/
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x73d414*/
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v8 + 4); /*0x73d415*/
  a2 = 4; /*0x73d418*/
  v4(v8, this + 0x48, 4, &a2, 1); /*0x73d420*/
  v5 = *(_DWORD *)(v2 + 0x21C); /*0x73d422*/
  v6 = *(int (__cdecl **)(int, int *, int, int *, int))(v5 + 4); /*0x73d428*/
  a2 = 4; /*0x73d43c*/
  return v6(v5, this + 0x49, 4, &a2, 1); /*0x73d449*/
}
