int __thiscall sub_6DDA70(_DWORD *this, signed int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, _DWORD *, int, signed int *, int); // eax
  int v10; // [esp-50h] [ebp-58h]
  int v11; // [esp-3Ch] [ebp-44h]
  int v12; // [esp-28h] [ebp-30h]
  int v13; // [esp-14h] [ebp-1Ch]
  int v14; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2; /*0x6dda71*/
  NiTimeController_SaveBinary(this, a2); /*0x6dda79*/
  v13 = v2[0x88]; /*0x6dda91*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v13 + 8); /*0x6dda92*/
  a2 = 2; /*0x6dda95*/
  v4(v13, this + 0xF, 2, &a2, 1); /*0x6dda9d*/
  v12 = v2[0x88]; /*0x6ddab2*/
  v5 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v12 + 8); /*0x6ddab3*/
  a2 = 4; /*0x6ddab6*/
  v5(v12, this + 0x1A, 4, &a2, 1); /*0x6ddabe*/
  v11 = v2[0x88]; /*0x6ddad3*/
  v6 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v11 + 8); /*0x6ddad4*/
  a2 = 4; /*0x6ddad7*/
  v6(v11, this + 0x16, 4, &a2, 1); /*0x6ddadf*/
  v10 = v2[0x88]; /*0x6ddaf4*/
  v7 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v10 + 8); /*0x6ddaf5*/
  a2 = 4; /*0x6ddaf8*/
  v7(v10, this + 0x17, 4, &a2, 1); /*0x6ddb00*/
  v14 = v2[0x88]; /*0x6ddb18*/
  v8 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v14 + 8); /*0x6ddb19*/
  a2 = 2; /*0x6ddb1c*/
  v8(v14, this + 0x18, 2, &a2, 1); /*0x6ddb24*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0x12)); /*0x6ddb34*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0x13)); /*0x6ddb43*/
}
