int __thiscall sub_752780(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v9)(int, UInt32 *, int, signed int *, int); // eax
  int v10; // eax
  int v11; // edi
  int (__cdecl *v12)(int, UInt32 *, int, signed int *, int); // edx
  int v14; // [esp-50h] [ebp-5Ch]
  int v15; // [esp-3Ch] [ebp-48h]
  int v16; // [esp-28h] [ebp-34h]
  int v17; // [esp-28h] [ebp-34h]
  int v18; // [esp-14h] [ebp-20h]
  int v19; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x752783*/
  sub_752DC0(this, (unsigned int *)a2); /*0x75278a*/
  v18 = *(_DWORD *)(v2 + 0x21C); /*0x7527a2*/
  v4 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v18 + 4); /*0x7527a3*/
  a2 = 2; /*0x7527a6*/
  v4(v18, &this->members.pad014[1], 2, &a2, 1); /*0x7527ae*/
  v16 = *(_DWORD *)(v2 + 0x21C); /*0x7527c7*/
  v5 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v16 + 4); /*0x7527c8*/
  a2 = 4; /*0x7527cb*/
  v5(v16, &this->members.pad014[2], 4, &a2, 1); /*0x7527cf*/
  v15 = *(_DWORD *)(v2 + 0x21C); /*0x7527e4*/
  v6 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v15 + 4); /*0x7527e5*/
  a2 = 2; /*0x7527e8*/
  v6(v15, &this->members.pad014[3], 2, &a2, 1); /*0x7527f0*/
  v14 = *(_DWORD *)(v2 + 0x21C); /*0x752805*/
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 4); /*0x752806*/
  a2 = 2; /*0x752809*/
  v7(v14, (char *)&this->members.pad014[3] + 2, 2, &a2, 1); /*0x752811*/
  v19 = *(_DWORD *)(v2 + 0x21C); /*0x752828*/
  v8 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v19 + 4); /*0x752829*/
  a2 = 4; /*0x75282c*/
  v8(v19, &this->members.pad014[4], 4, &a2, 1); /*0x752830*/
  v17 = *(_DWORD *)(v2 + 0x21C); /*0x752844*/
  v9 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v17 + 4); /*0x752845*/
  a2 = 4; /*0x752848*/
  v9(v17, &this->members.pad014[5], 4, &a2, 1); /*0x75284c*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x75284e*/
  a2 = 4; /*0x75285b*/
  (*(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v10 + 4))(v10, &this->members.pad014[6], 4, &a2, 1); /*0x752868*/
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x75286a*/
  v12 = *(int (__cdecl **)(int, UInt32 *, int, signed int *, int))(v11 + 4); /*0x752870*/
  a2 = 4; /*0x752880*/
  return v12(v11, &this->members.pad014[7], 4, &a2, 1); /*0x752889*/
}
