int __thiscall sub_70ECD0(char *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  unsigned int i; // ebp
  int v7; // edx
  int v8; // eax
  void (__cdecl *v9)(int, int, int, signed int *, int); // eax
  void (__cdecl *v10)(int, int, int, signed int *, int); // eax
  void (__cdecl *v11)(int, int, int, signed int *, int); // eax
  void (__cdecl *v12)(int, char *, int, signed int *, int); // edx
  int v13; // edi
  int (__cdecl *v14)(int, int, int, signed int *, int); // edx
  int v16; // [esp-3Ch] [ebp-4Ch]
  int v17; // [esp-38h] [ebp-48h]
  int v18; // [esp-38h] [ebp-48h]
  int v19; // [esp-34h] [ebp-44h]
  int v20; // [esp-28h] [ebp-38h]
  int v21; // [esp-28h] [ebp-38h]
  int v22; // [esp-28h] [ebp-38h]
  int v23; // [esp-24h] [ebp-34h]
  int v24; // [esp-14h] [ebp-24h]
  int v25; // [esp-14h] [ebp-24h]
  int v26; // [esp-10h] [ebp-20h]

  v2 = (_DWORD *)a2;
  nullsub_returnvVoid_1arg(a2);
  sub_70F7B0(this + 8, (signed int)v2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0x13));
  v24 = v2[0x88];
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v24 + 8);
  a2 = 4;
  v4(v24, this + 0x60, 4, &a2, 1);
  v20 = v2[0x88];
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v20 + 8);
  a2 = 4;
  v5(v20, this + 0x64, 4, &a2, 1);
  for ( i = 0; i < *((_DWORD *)this + 0x18); ++i )
  {
    v7 = *((_DWORD *)this + 0x15);
    v8 = v2[0x88];
    a2 = 4;
    (*(void (__cdecl **)(int, unsigned int, int, signed int *, int))(v8 + 8))(v8, 4 * i + v7, 4, &a2, 1);
    v23 = 4 * i + *((_DWORD *)this + 0x16);
    v21 = v2[0x88];
    v9 = *(void (__cdecl **)(int, int, int, signed int *, int))(v21 + 8);
    a2 = 4;
    v9(v21, v23, 4, &a2, 1);
    v17 = 4 * i + *((_DWORD *)this + 0x17);
    v16 = v2[0x88];
    v10 = *(void (__cdecl **)(int, int, int, signed int *, int))(v16 + 8);
    a2 = 4;
    v10(v16, v17, 4, &a2, 1);
  }
  v26 = *((_DWORD *)this + 0x17) + 4 * *((_DWORD *)this + 0x18);
  v25 = v2[0x88];
  v11 = *(void (__cdecl **)(int, int, int, signed int *, int))(v25 + 8);
  a2 = 4;
  v11(v25, v26, 4, &a2, 1);
  v12 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v2[0x88] + 8);
  v22 = v2[0x88];
  a2 = 4;
  v12(v22, this + 0x6C, 4, &a2, 1);
  v13 = v2[0x88];
  v14 = *(int (__cdecl **)(int, int, int, signed int *, int))(v13 + 8);
  v19 = *((_DWORD *)this + 0x1B) * *(_DWORD *)(*((_DWORD *)this + 0x17) + 4 * *((_DWORD *)this + 0x18));
  v18 = *((_DWORD *)this + 0x14);
  a2 = 1;
  return v14(v13, v18, v19, &a2, 1);
}
