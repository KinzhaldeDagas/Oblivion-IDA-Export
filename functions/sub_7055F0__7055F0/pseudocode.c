int __thiscall sub_7055F0(NiTexturingProperty_Map *this, int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, NiTexturingProperty_Map *, int, int *, int); // eax
  void (__cdecl *v5)(int, char *, int, int *, int); // eax
  void (__cdecl *v6)(int, char *, int, int *, int); // eax
  void (__cdecl *v7)(int, char *, int, int *, int); // eax
  void (__cdecl *v8)(int, NiTexturingProperty_Map *, int, int *, int); // eax
  int v9; // edi
  int (__cdecl *v10)(int, char *, int, int *, int); // edx
  int v12; // [esp-50h] [ebp-5Ch]
  int v13; // [esp-3Ch] [ebp-48h]
  int v14; // [esp-28h] [ebp-34h]
  int v15; // [esp-14h] [ebp-20h]
  int v16; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2;
  sub_7052F0(this, a2);
  v15 = v2[0x87];
  v4 = *(void (__cdecl **)(int, NiTexturingProperty_Map *, int, int *, int))(v15 + 4);
  a2 = 4;
  v4(v15, this + 1, 4, &a2, 1);
  v14 = v2[0x87];
  v5 = *(void (__cdecl **)(int, char *, int, int *, int))(v14 + 4);
  a2 = 4;
  v5(v14, (char *)this + 0x14, 4, &a2, 1);
  v13 = v2[0x87];
  v6 = *(void (__cdecl **)(int, char *, int, int *, int))(v13 + 4);
  a2 = 4;
  v6(v13, (char *)this + 0x18, 4, &a2, 1);
  v12 = v2[0x87];
  v7 = *(void (__cdecl **)(int, char *, int, int *, int))(v12 + 4);
  a2 = 4;
  v7(v12, (char *)this + 0x1C, 4, &a2, 1);
  v16 = v2[0x87];
  v8 = *(void (__cdecl **)(int, NiTexturingProperty_Map *, int, int *, int))(v16 + 4);
  a2 = 4;
  v8(v16, this + 2, 4, &a2, 1);
  v9 = v2[0x87];
  v10 = *(int (__cdecl **)(int, char *, int, int *, int))(v9 + 4);
  a2 = 4;
  return v10(v9, (char *)this + 0x24, 4, &a2, 1);
}
