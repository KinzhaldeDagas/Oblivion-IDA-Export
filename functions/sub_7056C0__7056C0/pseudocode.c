int __thiscall sub_7056C0(NiTexturingProperty_Map *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, NiTexturingProperty_Map *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, NiTexturingProperty_Map *, int, signed int *, int); // eax
  int v9; // edi
  int (__cdecl *v10)(int, char *, int, signed int *, int); // edx
  int v12; // [esp-50h] [ebp-5Ch]
  int v13; // [esp-3Ch] [ebp-48h]
  int v14; // [esp-28h] [ebp-34h]
  int v15; // [esp-14h] [ebp-20h]
  int v16; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x7056c3*/
  sub_7054D0(this, a2); /*0x7056ca*/
  v15 = *(_DWORD *)(v2 + 0x220); /*0x7056e6*/
  v4 = *(void (__cdecl **)(int, NiTexturingProperty_Map *, int, signed int *, int))(v15 + 8); /*0x7056e7*/
  a2 = 4; /*0x7056ea*/
  v4(v15, this + 1, 4, &a2, 1); /*0x7056ee*/
  v14 = *(_DWORD *)(v2 + 0x220); /*0x705702*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 8); /*0x705703*/
  a2 = 4; /*0x705706*/
  v5(v14, (char *)this + 0x14, 4, &a2, 1); /*0x70570a*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x70571e*/
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v13 + 8); /*0x70571f*/
  a2 = 4; /*0x705722*/
  v6(v13, (char *)this + 0x18, 4, &a2, 1); /*0x705726*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x70573a*/
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v12 + 8); /*0x70573b*/
  a2 = 4; /*0x70573e*/
  v7(v12, (char *)this + 0x1C, 4, &a2, 1); /*0x705742*/
  v16 = *(_DWORD *)(v2 + 0x220); /*0x705759*/
  v8 = *(void (__cdecl **)(int, NiTexturingProperty_Map *, int, signed int *, int))(v16 + 8); /*0x70575a*/
  a2 = 4; /*0x70575d*/
  v8(v16, this + 2, 4, &a2, 1); /*0x705761*/
  v9 = *(_DWORD *)(v2 + 0x220); /*0x705763*/
  v10 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v9 + 8); /*0x705769*/
  a2 = 4; /*0x705779*/
  return v10(v9, (char *)this + 0x24, 4, &a2, 1); /*0x705782*/
}
