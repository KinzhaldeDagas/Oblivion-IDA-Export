int __thiscall sub_6DD880(NiRenderer *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, UInt32 *, int, signed int *, int); // edx
  void (__cdecl *v7)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, UInt32 *, int, signed int *, int); // edx
  int v10; // [esp-50h] [ebp-5Ch]
  int v11; // [esp-3Ch] [ebp-48h]
  int v12; // [esp-28h] [ebp-34h]
  int v13; // [esp-14h] [ebp-20h]
  int v14; // [esp-14h] [ebp-20h]
  int v15; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x6dd882*/
  NiTimeController_LoadBinary(this, a2); /*0x6dd88a*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u ) /*0x6dd899*/
  {
    v13 = *(_DWORD *)(v2 + 0x21C); /*0x6dd8bf*/
    v4 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v13 + 4); /*0x6dd8c0*/
    a2 = 2; /*0x6dd8c3*/
    v4(v13, &this->members.pad014[0xA], 2, &a2, 1); /*0x6dd8cb*/
  }
  else
  {
    LOWORD(this->members.pad014[0xA]) = *(_WORD *)(v2 + 0x25A) >> 5; /*0x6dd8a6*/
  }
  v14 = *(_DWORD *)(v2 + 0x21C); /*0x6dd8e4*/
  v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v14 + 4); /*0x6dd8e5*/
  a2 = 4; /*0x6dd8e8*/
  v5(v14, &v15, 4, &a2, 1); /*0x6dd8f0*/
  this->members.pad014[0x15] = v15; /*0x6dd8fd*/
  v6 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6dd906*/
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x6dd90f*/
  a2 = 4; /*0x6dd910*/
  v6(v12, &this->members.pad014[0x11], 4, &a2, 1); /*0x6dd918*/
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x6dd92d*/
  v7 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v11 + 4); /*0x6dd92e*/
  a2 = 4; /*0x6dd931*/
  v7(v11, &this->members.pad014[0x12], 4, &a2, 1); /*0x6dd939*/
  v8 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6dd941*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x6dd951*/
  a2 = 2; /*0x6dd952*/
  v8(v10, &this->members.pad014[0x13], 2, &a2, 1); /*0x6dd95a*/
  sub_712A20((unsigned int *)v2); /*0x6dd961*/
  return sub_712A20((unsigned int *)v2); /*0x6dd96d*/
}
