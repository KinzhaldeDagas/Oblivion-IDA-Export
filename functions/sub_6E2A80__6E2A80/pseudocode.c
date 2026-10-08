int __thiscall sub_6E2A80(_DWORD *this, int a2)
{
  int v2; // edi
  int (__cdecl *v4)(int, _DWORD *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e2a82*/
  sub_6ECCB0(this, (_DWORD *)a2); /*0x6e2a89*/
  v4 = *(int (__cdecl **)(int, _DWORD *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6e2a94*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x6e2aa4*/
  a2 = 4; /*0x6e2aa5*/
  return v4(v6, this + 0x12, 4, &a2, 1); /*0x6e2ab2*/
}
