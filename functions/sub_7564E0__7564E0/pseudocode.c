int __thiscall sub_7564E0(_BYTE *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _BYTE *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, _BYTE *, int, signed int *, int); // eax
  int v7; // [esp-28h] [ebp-30h]
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2; /*0x7564e2*/
  sub_75F050(this, a2); /*0x7564e9*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0xB)); /*0x7564f9*/
  v8 = v2[0x88]; /*0x75650e*/
  v4 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v8 + 8); /*0x75650f*/
  a2 = 4; /*0x756512*/
  v4(v8, this + 0x30, 4, &a2, 1); /*0x75651a*/
  v7 = v2[0x88]; /*0x75652f*/
  v5 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v7 + 8); /*0x756530*/
  a2 = 4; /*0x756533*/
  v5(v7, this + 0x34, 4, &a2, 1); /*0x75653b*/
  sub_7094A0(this + 0x38, (signed int)v2); /*0x756544*/
  return sub_7094A0(this + 0x44, (signed int)v2); /*0x756552*/
}
