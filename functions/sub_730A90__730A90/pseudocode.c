int __thiscall sub_730A90(const char **this, int a2)
{
  int v2; // edi
  int (__cdecl *v4)(int, const char **, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x730a92*/
  sub_6FE000(this, (_DWORD *)a2); /*0x730a99*/
  v4 = *(int (__cdecl **)(int, const char **, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x730aa4*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x730ab4*/
  a2 = 4; /*0x730ab5*/
  return v4(v6, this + 3, 4, &a2, 1); /*0x730ac2*/
}
