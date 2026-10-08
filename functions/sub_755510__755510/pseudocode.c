int __thiscall sub_755510(const char **this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, const char **, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x755512*/
  sub_75E9E0(this, (_DWORD *)a2); /*0x755519*/
  v4 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x755524*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x755534*/
  a2 = 4; /*0x755535*/
  return v4(v6, this + 0xC, 4, &a2, 1); /*0x755542*/
}
