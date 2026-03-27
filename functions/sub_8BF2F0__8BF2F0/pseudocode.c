int __thiscall sub_8BF2F0(_DWORD *this, signed int a2)
{
  int v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, signed int *, int); // eax
  int v6; // esi
  int (__cdecl *v7)(int, int, int, signed int *, int); // edx
  int v9; // [esp-1Ch] [ebp-24h]

  v2 = a2;
  sub_8A0C80(this, a2);
  v4 = *(this + 1);
  sub_8E80C0(v2, *(_DWORD *)(v4 + 0xC));
  v9 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v9 + 8);
  a2 = 4;
  v5(v9, v4 + 0x10, 4, &a2, 1);
  v6 = *(_DWORD *)(v2 + 0x220);
  v7 = *(int (__cdecl **)(int, int, int, signed int *, int))(v6 + 8);
  a2 = 4;
  return v7(v6, v4 + 0x14, 4, &a2, 1);
}
