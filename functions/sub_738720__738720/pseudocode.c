int __thiscall sub_738720(const char **this, int a2)
{
  int v3; // edi
  int (__cdecl *v4)(int, const char **, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v3 = a2; /*0x738727*/
  sub_713720((_DWORD *)a2, *(this + 2)); /*0x73872e*/
  v4 = *(int (__cdecl **)(int, const char **, int, int *, int))(*(_DWORD *)(v3 + 0x220) + 8); /*0x738739*/
  v6 = *(_DWORD *)(v3 + 0x220); /*0x738749*/
  a2 = 4; /*0x73874a*/
  return v4(v6, this + 3, 4, &a2, 1); /*0x738757*/
}
