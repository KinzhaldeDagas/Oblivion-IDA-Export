int __thiscall sub_8C4ED0(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  int v4; // eax
  _DWORD *v5; // ebp
  void (__cdecl *v6)(int, _DWORD *, int, int *, int); // edx
  int v7; // eax
  int v8; // eax
  void (__cdecl *v9)(int, _DWORD *, int, int *, int); // edx
  int v10; // eax
  int v11; // ebp
  void (__cdecl *v12)(int, _DWORD *, int, int *, int); // edx
  int v13; // eax
  int v15; // [esp-3Ch] [ebp-6Ch]
  int v16; // [esp-2Ch] [ebp-5Ch]
  int v17; // [esp-24h] [ebp-54h]
  int v18; // [esp+10h] [ebp-20h] BYREF
  _DWORD v19[7]; // [esp+14h] [ebp-1Ch] BYREF

  v2 = a2; /*0x8c4ed7*/
  v19[0] = 2; /*0x8c4eee*/
  v19[1] = 2; /*0x8c4ef2*/
  v19[2] = 2; /*0x8c4ef6*/
  v19[3] = 2; /*0x8c4efa*/
  v4 = *(_DWORD *)(a2 + 0x21C); /*0x8c4efe*/
  v5 = this + 2; /*0x8c4f05*/
  v19[4] = 4; /*0x8c4f08*/
  v19[5] = 4; /*0x8c4f0c*/
  v19[6] = 4; /*0x8c4f10*/
  v6 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(v4 + 4); /*0x8c4f14*/
  v18 = 4; /*0x8c4f19*/
  v6(v4, this + 2, 4, &v18, 1); /*0x8c4f1d*/
  v7 = FormHeapAlloc((0x14 * (unsigned __int64)(unsigned int)*v5) >> 0x20 != 0 ? 0xFFFFFFFF : 0x14 * *v5);
  v17 = 0x14 * *v5; /*0x8c4f4a*/
  *(this + 5) = v7; /*0x8c4f4b*/
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD *, int))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x8c4f59*/
    *(_DWORD *)(v2 + 0x21C),
    v7,
    v17,
    v19,
    7);
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x8c4f5b*/
  a2 = 4; /*0x8c4f6c*/
  v9 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(v8 + 4); /*0x8c4f70*/
  v18 = 4; /*0x8c4f75*/
  v9(v8, this + 3, 4, &v18, 1); /*0x8c4f79*/
  v10 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)*(this + 3)) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * *(this + 3));
  v11 = *(this + 3); /*0x8c4f97*/
  *(this + 6) = v10; /*0x8c4fa9*/
  (*(void (__cdecl **)(_DWORD, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x8c4fb8*/
    *(_DWORD *)(v2 + 0x21C),
    v10,
    0xC * v11,
    &a2,
    1);
  v12 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x8c4fc0*/
  v16 = *(_DWORD *)(v2 + 0x21C); /*0x8c4fd0*/
  v18 = 2; /*0x8c4fd1*/
  v12(v16, this + 4, 2, &v18, 1); /*0x8c4fd9*/
  v13 = FormHeapAlloc(
          (0xC * (unsigned __int64)*((unsigned __int16 *)this + 8)) >> 0x20 != 0
        ? 0xFFFFFFFF
        : 0xC * *((unsigned __int16 *)this + 8));
  v15 = 0xC * *((unsigned __int16 *)this + 8); /*0x8c5007*/
  *(this + 7) = v13; /*0x8c5008*/
  return (*(int (__cdecl **)(_DWORD, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x8c501b*/
           *(_DWORD *)(v2 + 0x21C),
           v13,
           v15,
           &a2,
           1);
}
