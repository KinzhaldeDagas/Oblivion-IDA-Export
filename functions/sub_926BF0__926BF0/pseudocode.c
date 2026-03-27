int __thiscall sub_926BF0(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  int v4; // esi
  void (__cdecl *v5)(int, signed int *, int, int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, int, int, int *, int); // edx
  int v9; // [esp-14h] [ebp-20h]
  int v10; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_8B3180(this, a2);
  v4 = *(this + 1);
  LOBYTE(a2) = *(_BYTE *)(v4 + 0x90);
  v9 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v9 + 8);
  v10 = 1;
  v5(v9, &a2, 1, &v10, 1);
  v6 = *(_DWORD *)(v2 + 0x220);
  v7 = *(int (__cdecl **)(int, int, int, int *, int))(v6 + 8);
  v10 = 1;
  return v7(v6, v4 + 0x91, 1, &v10, 1);
}
