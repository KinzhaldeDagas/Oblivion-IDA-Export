int __thiscall sub_74D050(const char **this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, const char **, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_753060(this, a2);
  v4 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v6 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  return v4(v6, this + 0x15, 4, &a2, 1);
}
