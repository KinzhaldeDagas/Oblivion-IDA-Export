int __thiscall sub_6FADD0(const char **this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, const char **, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6fadd2*/
  sub_752E40(this, a2); /*0x6fadd9*/
  v4 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6fade4*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x6fadf4*/
  a2 = 4; /*0x6fadf5*/
  return v4(v6, this + 6, 4, &a2, 1); /*0x6fae02*/
}
