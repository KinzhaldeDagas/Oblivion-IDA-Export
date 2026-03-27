int __thiscall sub_703670(char *this, int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, char *, int, int *, int); // edx
  int v5; // ebp
  void (__cdecl *v6)(int, int, int, int *, int); // edx
  void (__cdecl *v7)(int, int, int, int *, int); // edx
  void (__cdecl *v8)(int, char *, int, int *, int); // eax
  void (__cdecl *v9)(int, char *, int, int *, int); // eax
  void (__cdecl *v10)(int, char *, int, int *, int); // eax
  int v11; // eax
  void (__cdecl *v12)(int, char *, int, int *, int); // eax
  int v13; // edi
  int (__cdecl *v14)(int, char *, int, int *, int); // edx
  int v16; // [esp-50h] [ebp-60h]
  int v17; // [esp-50h] [ebp-60h]
  int v18; // [esp-3Ch] [ebp-4Ch]
  int v19; // [esp-38h] [ebp-48h]
  int v20; // [esp-28h] [ebp-38h]
  int v21; // [esp-28h] [ebp-38h]
  int v22; // [esp-24h] [ebp-34h]
  int v23; // [esp-14h] [ebp-24h]
  int v24; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2;
  sub_7201B0(this, (_DWORD *)a2);
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v2[0x88] + 8);
  v23 = v2[0x88];
  a2 = 2;
  v4(v23, this + 0x60, 2, &a2, 1);
  v5 = *((unsigned __int16 *)this + 0x30);
  v6 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8);
  v22 = *((_DWORD *)this + 0x16);
  v20 = v2[0x88];
  a2 = 8;
  v6(v20, v22, 8 * v5, &a2, 1);
  v7 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8);
  v19 = *((_DWORD *)this + 0x17);
  v18 = v2[0x88];
  a2 = 2;
  v7(v18, v19, 2 * v5, &a2, 1);
  v16 = v2[0x88];
  v8 = *(void (__cdecl **)(int, char *, int, int *, int))(v16 + 8);
  a2 = 2;
  v8(v16, this + 0x62, 2, &a2, 1);
  v24 = v2[0x88];
  v9 = *(void (__cdecl **)(int, char *, int, int *, int))(v24 + 8);
  a2 = 2;
  v9(v24, this + 0x64, 2, &a2, 1);
  v21 = v2[0x88];
  v10 = *(void (__cdecl **)(int, char *, int, int *, int))(v21 + 8);
  a2 = 2;
  v10(v21, this + 0x66, 2, &a2, 1);
  v11 = v2[0x88];
  a2 = 2;
  (*(void (__cdecl **)(int, char *, int, int *, int))(v11 + 8))(v11, this + 0x68, 2, &a2, 1);
  v17 = v2[0x88];
  v12 = *(void (__cdecl **)(int, char *, int, int *, int))(v17 + 8);
  a2 = 2;
  v12(v17, this + 0x6A, 2, &a2, 1);
  v13 = v2[0x88];
  v14 = *(int (__cdecl **)(int, char *, int, int *, int))(v13 + 8);
  a2 = 2;
  return v14(v13, this + 0x6C, 2, &a2, 1);
}
