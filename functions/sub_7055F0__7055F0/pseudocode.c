int __thiscall sub_7055F0(NiTexturingProperty_Map *this, int a2)
{
  int v2; // edi
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

  v2 = a2; /*0x7055f3*/
  sub_7052F0(this, a2); /*0x7055fa*/
  v15 = *(_DWORD *)(v2 + 0x21C); /*0x705616*/
  v4 = *(void (__cdecl **)(int, NiTexturingProperty_Map *, int, int *, int))(v15 + 4); /*0x705617*/
  a2 = 4; /*0x70561a*/
  v4(v15, this + 1, 4, &a2, 1); /*0x70561e*/
  v14 = *(_DWORD *)(v2 + 0x21C); /*0x705632*/
  v5 = *(void (__cdecl **)(int, char *, int, int *, int))(v14 + 4); /*0x705633*/
  a2 = 4; /*0x705636*/
  v5(v14, (char *)this + 0x14, 4, &a2, 1); /*0x70563a*/
  v13 = *(_DWORD *)(v2 + 0x21C); /*0x70564e*/
  v6 = *(void (__cdecl **)(int, char *, int, int *, int))(v13 + 4); /*0x70564f*/
  a2 = 4; /*0x705652*/
  v6(v13, (char *)this + 0x18, 4, &a2, 1); /*0x705656*/
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x70566a*/
  v7 = *(void (__cdecl **)(int, char *, int, int *, int))(v12 + 4); /*0x70566b*/
  a2 = 4; /*0x70566e*/
  v7(v12, (char *)this + 0x1C, 4, &a2, 1); /*0x705672*/
  v16 = *(_DWORD *)(v2 + 0x21C); /*0x705689*/
  v8 = *(void (__cdecl **)(int, NiTexturingProperty_Map *, int, int *, int))(v16 + 4); /*0x70568a*/
  a2 = 4; /*0x70568d*/
  v8(v16, this + 2, 4, &a2, 1); /*0x705691*/
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x705693*/
  v10 = *(int (__cdecl **)(int, char *, int, int *, int))(v9 + 4); /*0x705699*/
  a2 = 4; /*0x7056a9*/
  return v10(v9, (char *)this + 0x24, 4, &a2, 1); /*0x7056b2*/
}
