int __thiscall sub_703500(int *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, int *, int, signed int *, int); // edx
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  void (__cdecl *v8)(int, int, int, signed int *, int); // edx
  void (__cdecl *v9)(int, int, int, signed int *, int); // edx
  void (__cdecl *v10)(int, char *, int, signed int *, int); // eax
  int v11; // eax
  void (__cdecl *v12)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v13)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v14)(int, char *, int, signed int *, int); // eax
  int v15; // edi
  int (__cdecl *v16)(int, int *, int, signed int *, int); // edx
  int v18; // [esp-50h] [ebp-60h]
  int v19; // [esp-44h] [ebp-54h]
  int v20; // [esp-40h] [ebp-50h]
  int v21; // [esp-3Ch] [ebp-4Ch]
  int v22; // [esp-30h] [ebp-40h]
  int v23; // [esp-14h] [ebp-24h]
  int v24; // [esp-14h] [ebp-24h]
  int v25; // [esp-14h] [ebp-24h]

  v2 = a2;
  sub_71FEC0(this, a2);
  v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v23 = *(_DWORD *)(v2 + 0x21C);
  a2 = 2;
  v4(v23, this + 0x18, 2, &a2, 1);
  *(this + 0x16) = FormHeapAlloc(
                     (unsigned __int64)*((unsigned __int16 *)this + 0x30) >> 0x1D != 0
                   ? 0xFFFFFFFF
                   : 8 * *((unsigned __int16 *)this + 0x30));
  v5 = FormHeapAlloc(
         (unsigned __int64)*((unsigned __int16 *)this + 0x30) >> 0x1F != 0
       ? 0xFFFFFFFF
       : 2 * *((unsigned __int16 *)this + 0x30));
  v6 = *((unsigned __int16 *)this + 0x30);
  v7 = *(this + 0x16);
  *(this + 0x17) = v5;
  v8 = *(void (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v22 = *(_DWORD *)(v2 + 0x21C);
  a2 = 8;
  v8(v22, v7, 8 * v6, &a2, 1);
  v9 = *(void (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v20 = *(this + 0x17);
  v19 = *(_DWORD *)(v2 + 0x21C);
  a2 = 2;
  v9(v19, v20, 2 * v6, &a2, 1);
  v24 = *(_DWORD *)(v2 + 0x21C);
  v10 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v24 + 4);
  a2 = 2;
  v10(v24, (char *)this + 0x62, 2, &a2, 1);
  v11 = *(_DWORD *)(v2 + 0x21C);
  a2 = 2;
  (*(void (__cdecl **)(int, int *, int, signed int *, int))(v11 + 4))(v11, this + 0x19, 2, &a2, 1);
  v21 = *(_DWORD *)(v2 + 0x21C);
  v12 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v21 + 4);
  a2 = 2;
  v12(v21, (char *)this + 0x66, 2, &a2, 1);
  v18 = *(_DWORD *)(v2 + 0x21C);
  v13 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v18 + 4);
  a2 = 2;
  v13(v18, this + 0x1A, 2, &a2, 1);
  v25 = *(_DWORD *)(v2 + 0x21C);
  v14 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v25 + 4);
  a2 = 2;
  v14(v25, (char *)this + 0x6A, 2, &a2, 1);
  v15 = *(_DWORD *)(v2 + 0x21C);
  v16 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v15 + 4);
  a2 = 2;
  return v16(v15, this + 0x1B, 2, &a2, 1);
}
