int __thiscall sub_6EC760(const char **this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v3)(int, const char **, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  v3 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(*(_DWORD *)(a2 + 0x220) + 8);
  v6 = *(_DWORD *)(a2 + 0x220);
  a2 = 4;
  v3(v6, this, 4, &a2, 1);
  return sub_713720(v2, *(this + 1));
}
