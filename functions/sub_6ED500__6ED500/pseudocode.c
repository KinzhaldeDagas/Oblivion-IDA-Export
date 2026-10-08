int __thiscall sub_6ED500(_DWORD *this, signed int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, _DWORD *, int, signed int *, int); // eax
  int v7; // [esp-28h] [ebp-30h]
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2; /*0x6ed501*/
  j_nullsub_3(a2); /*0x6ed509*/
  v8 = v2[0x88]; /*0x6ed521*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v8 + 8); /*0x6ed522*/
  a2 = 4; /*0x6ed525*/
  v4(v8, this + 3, 4, &a2, 1); /*0x6ed52d*/
  v7 = v2[0x88]; /*0x6ed542*/
  v5 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v7 + 8); /*0x6ed543*/
  a2 = 4; /*0x6ed546*/
  v5(v7, this + 4, 4, &a2, 1); /*0x6ed54e*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 5)); /*0x6ed55e*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 6)); /*0x6ed56d*/
}
