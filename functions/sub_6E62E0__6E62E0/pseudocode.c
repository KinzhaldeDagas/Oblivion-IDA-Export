int __thiscall sub_6E62E0(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e62e2*/
  sub_6E57A0(this, a2); /*0x6e62e9*/
  v4 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6e62f4*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x6e6304*/
  a2 = 4; /*0x6e6305*/
  return v4(v6, this + 9, 8, &a2, 1); /*0x6e6312*/
}
