int __thiscall sub_6E5CB0(char *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e5cb2*/
  sub_6E4EF0(this, a2); /*0x6e5cb9*/
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6e5cc4*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x6e5cd4*/
  a2 = 4; /*0x6e5cd5*/
  return v4(v6, this + 0x48, 0x18, &a2, 1); /*0x6e5ce2*/
}
