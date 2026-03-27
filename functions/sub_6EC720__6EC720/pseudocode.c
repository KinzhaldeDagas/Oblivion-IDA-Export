int __thiscall sub_6EC720(int *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v3)(int, int *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  v3 = *(void (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(a2 + 0x21C) + 4);
  v6 = *(_DWORD *)(a2 + 0x21C);
  a2 = 4;
  v3(v6, this, 4, &a2, 1);
  return sub_713620(v2, this + 1);
}
