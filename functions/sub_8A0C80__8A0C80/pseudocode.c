int __thiscall sub_8A0C80(_DWORD *this, signed int a2)
{
  _DWORD *v2; // edi
  int v3; // eax
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int (__cdecl *v11)(int, _DWORD *, int, signed int *, int); // edx
  int v13; // [esp-14h] [ebp-20h]
  int v14; // [esp+8h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2; /*0x8a0c83*/
  v3 = *(_DWORD *)(a2 + 0x220); /*0x8a0c87*/
  v14 = 2; /*0x8a0c9d*/
  v13 = v3; /*0x8a0ca5*/
  v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v3 + 8); /*0x8a0ca6*/
  a2 = 4; /*0x8a0ca9*/
  v5(v13, &v14, 4, &a2, 1); /*0x8a0cb1*/
  v6 = *(this + 3); /*0x8a0cb3*/
  if ( v6 ) /*0x8a0cbb*/
    v7 = *(_DWORD *)(v6 + 0xC); /*0x8a0cbd*/
  else
    v7 = 0; /*0x8a0cc2*/
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v7); /*0x8a0ccc*/
  v8 = *(this + 4); /*0x8a0cce*/
  if ( v8 ) /*0x8a0cd3*/
    v9 = *(_DWORD *)(v8 + 0xC); /*0x8a0cd5*/
  else
    v9 = 0; /*0x8a0cda*/
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v9); /*0x8a0ce4*/
  (*(void (__thiscall **)(_DWORD *))(*this + 0x10))(this); /*0x8a0ced*/
  v10 = v2[0x88]; /*0x8a0cef*/
  v11 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(v10 + 8); /*0x8a0cf5*/
  a2 = 4; /*0x8a0d06*/
  return v11(v10, this + 2, 4, &a2, 1); /*0x8a0d13*/
}
