int __thiscall sub_7386E0(int *this, int a2)
{
  int v3; // edi
  int (__cdecl *v4)(int, int *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v3 = a2; /*0x7386e4*/
  sub_713620((_DWORD *)a2, (int)(this + 2)); /*0x7386ee*/
  v4 = *(int (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v3 + 0x21C) + 4); /*0x7386f9*/
  v6 = *(_DWORD *)(v3 + 0x21C); /*0x738709*/
  a2 = 4; /*0x73870a*/
  return v4(v6, this + 3, 4, &a2, 1); /*0x738717*/
}
