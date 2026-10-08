int __thiscall sub_6FF350(const char **this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, const char **, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6ff352*/
  sub_752E40(this, a2); /*0x6ff359*/
  v4 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6ff364*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x6ff374*/
  a2 = 4; /*0x6ff375*/
  return v4(v6, this + 8, 4, &a2, 1); /*0x6ff382*/
}
