int __thiscall sub_74F240(int *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v9)(int, int *, int, signed int *, int); // eax
  int v10; // eax
  void (__cdecl *v11)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v12)(int, int *, int, signed int *, int); // eax
  int v13; // edi
  int (__cdecl *v14)(int, int *, int, signed int *, int); // edx
  int v16; // [esp-50h] [ebp-5Ch]
  int v17; // [esp-3Ch] [ebp-48h]
  int v18; // [esp-28h] [ebp-34h]
  int v19; // [esp-28h] [ebp-34h]
  int v20; // [esp-14h] [ebp-20h]
  int v21; // [esp-14h] [ebp-20h]
  int v22; // [esp-14h] [ebp-20h]
  int v23; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x74f243*/
  sub_752DC0((NiRenderer *)this, (unsigned int *)a2); /*0x74f24a*/
  v20 = *(_DWORD *)(v2 + 0x21C); /*0x74f266*/
  v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v20 + 4); /*0x74f267*/
  a2 = 4; /*0x74f26a*/
  v4(v20, this + 6, 4, &a2, 1); /*0x74f26e*/
  v18 = *(_DWORD *)(v2 + 0x21C); /*0x74f282*/
  v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v18 + 4); /*0x74f283*/
  a2 = 4; /*0x74f286*/
  v5(v18, this + 7, 4, &a2, 1); /*0x74f28a*/
  v17 = *(_DWORD *)(v2 + 0x21C); /*0x74f29e*/
  v6 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v17 + 4); /*0x74f29f*/
  a2 = 4; /*0x74f2a2*/
  v6(v17, this + 8, 4, &a2, 1); /*0x74f2a6*/
  v16 = *(_DWORD *)(v2 + 0x21C); /*0x74f2ba*/
  v7 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v16 + 4); /*0x74f2bb*/
  a2 = 4; /*0x74f2be*/
  v7(v16, this + 9, 4, &a2, 1); /*0x74f2c2*/
  v21 = *(_DWORD *)(v2 + 0x21C); /*0x74f2d9*/
  v8 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v21 + 4); /*0x74f2da*/
  a2 = 4; /*0x74f2dd*/
  v8(v21, this + 0xA, 4, &a2, 1); /*0x74f2e1*/
  v19 = *(_DWORD *)(v2 + 0x21C); /*0x74f2f5*/
  v9 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v19 + 4); /*0x74f2f6*/
  a2 = 4; /*0x74f2f9*/
  v9(v19, this + 0xB, 4, &a2, 1); /*0x74f2fd*/
  sub_715420((char *)this + 0x30, v2); /*0x74f306*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x74f30b*/
  a2 = 4; /*0x74f311*/
  (*(void (__cdecl **)(int, int *, int, signed int *, int))(v10 + 4))(v10, this + 0x10, 4, &a2, 1); /*0x74f325*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA030002u ) /*0x74f334*/
  {
    v22 = *(_DWORD *)(v2 + 0x21C); /*0x74f348*/
    v11 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v22 + 4); /*0x74f349*/
    a2 = 4; /*0x74f34c*/
    v11(v22, this + 0x11, 4, &a2, 1); /*0x74f350*/
  }
  v23 = *(_DWORD *)(v2 + 0x21C); /*0x74f367*/
  v12 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v23 + 4); /*0x74f368*/
  a2 = 4; /*0x74f36b*/
  v12(v23, this + 0x12, 4, &a2, 1); /*0x74f36f*/
  v13 = *(_DWORD *)(v2 + 0x21C); /*0x74f371*/
  v14 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v13 + 4); /*0x74f377*/
  a2 = 4; /*0x74f387*/
  return v14(v13, this + 0x13, 4, &a2, 1); /*0x74f390*/
}
