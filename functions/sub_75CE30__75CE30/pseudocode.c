int __thiscall sub_75CE30(int *this, unsigned int *a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  void (__cdecl *v6)(int, unsigned int **, int, int *, int); // eax
  void (__cdecl *v7)(int, unsigned int **, int, int *, int); // edx
  void (__cdecl *v8)(int, unsigned int **, int, int *, int); // eax
  int v9; // edi
  int (__cdecl *v10)(int, int *, int, int *, int); // eax
  int v12; // [esp-50h] [ebp-60h]
  int v13; // [esp-3Ch] [ebp-4Ch]
  int v14; // [esp-28h] [ebp-38h]
  int v15; // [esp-14h] [ebp-24h]
  int v16; // [esp-14h] [ebp-24h]
  int v17; // [esp+Ch] [ebp-4h] BYREF

  v2 = (signed int)a2; /*0x75ce34*/
  sub_75E920((NiRenderer *)this, a2); /*0x75ce3b*/
  sub_709430((char *)this + 0x40, v2); /*0x75ce46*/
  sub_75C1C0((float *)this, (float *)this + 0x10); /*0x75ce4e*/
  v15 = *(_DWORD *)(v2 + 0x21C); /*0x75ce6a*/
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v15 + 4); /*0x75ce6b*/
  v17 = 4; /*0x75ce6e*/
  v4(v15, this + 0x16, 4, &v17, 1); /*0x75ce76*/
  v14 = *(_DWORD *)(v2 + 0x21C); /*0x75ce8a*/
  v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v14 + 4); /*0x75ce8b*/
  v17 = 4; /*0x75ce8e*/
  v5(v14, this + 0x17, 4, &v17, 1); /*0x75ce96*/
  v13 = *(_DWORD *)(v2 + 0x21C); /*0x75ceaa*/
  v6 = *(void (__cdecl **)(int, unsigned int **, int, int *, int))(v13 + 4); /*0x75ceab*/
  v17 = 1; /*0x75ceae*/
  v6(v13, &a2, 1, &v17, 1); /*0x75ceb2*/
  *((_BYTE *)this + 0x60) = (_BYTE)a2 != 0; /*0x75cec2*/
  v7 = *(void (__cdecl **)(int, unsigned int **, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x75cecb*/
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x75ced4*/
  v17 = 1; /*0x75ced5*/
  v7(v12, &a2, 1, &v17, 1); /*0x75ced9*/
  *((_BYTE *)this + 0x61) = (_BYTE)a2 != 0; /*0x75ceec*/
  v16 = *(_DWORD *)(v2 + 0x21C); /*0x75cefb*/
  v8 = *(void (__cdecl **)(int, unsigned int **, int, int *, int))(v16 + 4); /*0x75cefc*/
  v17 = 1; /*0x75ceff*/
  v8(v16, &a2, 1, &v17, 1); /*0x75cf03*/
  *((_BYTE *)this + 0x62) = (_BYTE)a2 != 0; /*0x75cf0d*/
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x75cf10*/
  v10 = *(int (__cdecl **)(int, int *, int, int *, int))(v9 + 4); /*0x75cf16*/
  v17 = 4; /*0x75cf26*/
  return v10(v9, this + 0x19, 4, &v17, 1); /*0x75cf33*/
}
