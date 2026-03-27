int __thiscall sub_8C3230(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  int v4; // esi
  void (__cdecl *v5)(int, int, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, int, int, signed int *, int); // edx
  int v9; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_8A0C80(this, a2);
  v4 = *(this + 1);
  v9 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v9 + 8);
  a2 = 0x10;
  v5(v9, v4 + 0x10, 0x10, &a2, 1);
  v6 = *(_DWORD *)(v2 + 0x220);
  v7 = *(int (__cdecl **)(int, int, int, signed int *, int))(v6 + 8);
  a2 = 0x10;
  return v7(v6, v4 + 0x20, 0x10, &a2, 1);
}
