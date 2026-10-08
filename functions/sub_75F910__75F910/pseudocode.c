int __thiscall sub_75F910(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, char *, int, signed int *, int); // eax
  int v8; // edi
  int (__cdecl *v9)(int, char *, int, signed int *, int); // edx
  int v11; // [esp-50h] [ebp-5Ch]
  int v12; // [esp-3Ch] [ebp-48h]
  int v13; // [esp-28h] [ebp-34h]
  int v14; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x75f913*/
  sub_7094A0(this, a2); /*0x75f91a*/
  v14 = *(_DWORD *)(v2 + 0x220); /*0x75f936*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 8); /*0x75f937*/
  a2 = 4; /*0x75f93a*/
  v4(v14, this + 0xC, 4, &a2, 1); /*0x75f93e*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x75f952*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v13 + 8); /*0x75f953*/
  a2 = 4; /*0x75f956*/
  v5(v13, this + 0x10, 4, &a2, 1); /*0x75f95a*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x75f96e*/
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v12 + 8); /*0x75f96f*/
  a2 = 4; /*0x75f972*/
  v6(v12, this + 0x14, 4, &a2, 1); /*0x75f976*/
  v11 = *(_DWORD *)(v2 + 0x220); /*0x75f98f*/
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v11 + 8); /*0x75f990*/
  a2 = 2; /*0x75f993*/
  v7(v11, this + 0x18, 2, &a2, 1); /*0x75f997*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x75f999*/
  v9 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v8 + 8); /*0x75f99f*/
  a2 = 2; /*0x75f9b2*/
  return v9(v8, this + 0x1A, 2, &a2, 1); /*0x75f9bb*/
}
