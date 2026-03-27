int __thiscall sub_6D7090(_BYTE *this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  void (__cdecl *v5)(int, _BYTE *, int, int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, _BYTE *, int, int *, int); // edx
  int v9; // [esp-28h] [ebp-34h]
  int v10; // [esp-14h] [ebp-20h]
  int v11; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_6EC5B0(a2);
  LOBYTE(a2) = *(this + 0x48);
  v10 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 8);
  v11 = 1;
  v4(v10, &a2, 1, &v11, 1);
  v9 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(v9 + 8);
  v11 = 4;
  v5(v9, this + 0x4C, 4, &v11, 1);
  v6 = *(_DWORD *)(v2 + 0x220);
  v7 = *(int (__cdecl **)(int, _BYTE *, int, int *, int))(v6 + 8);
  v11 = 4;
  return v7(v6, this + 0x50, 4, &v11, 1);
}
