int __thiscall sub_7154B0(float *this, signed int a2)
{
  signed int v3; // edi
  void (__cdecl *v4)(int, float *, int, signed int *, int); // edx
  void (__cdecl *v5)(int, float *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, float *, int, signed int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, float *, int, signed int *, int); // edx
  int v10; // [esp-3Ch] [ebp-48h]
  int v11; // [esp-28h] [ebp-34h]
  int v12; // [esp-14h] [ebp-20h]

  sub_7152A0(this);
  v3 = a2;
  v4 = *(void (__cdecl **)(int, float *, int, signed int *, int))(*(_DWORD *)(a2 + 0x220) + 8);
  v12 = *(_DWORD *)(a2 + 0x220);
  a2 = 4;
  v4(v12, this, 4, &a2, 1);
  v11 = *(_DWORD *)(v3 + 0x220);
  v5 = *(void (__cdecl **)(int, float *, int, signed int *, int))(v11 + 8);
  a2 = 4;
  v5(v11, this + 1, 4, &a2, 1);
  v10 = *(_DWORD *)(v3 + 0x220);
  v6 = *(void (__cdecl **)(int, float *, int, signed int *, int))(v10 + 8);
  a2 = 4;
  v6(v10, this + 2, 4, &a2, 1);
  v7 = *(_DWORD *)(v3 + 0x220);
  v8 = *(int (__cdecl **)(int, float *, int, signed int *, int))(v7 + 8);
  a2 = 4;
  return v8(v7, this + 3, 4, &a2, 1);
}
