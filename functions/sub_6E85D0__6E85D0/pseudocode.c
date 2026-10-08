int __thiscall sub_6E85D0(_DWORD *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2; /*0x6e85d2*/
  j_j_nullsub_3(a2); /*0x6e85d9*/
  v6 = v2[0x88]; /*0x6e85f1*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v6 + 8); /*0x6e85f2*/
  a2 = 1; /*0x6e85f5*/
  v4(v6, this + 3, 1, &a2, 1); /*0x6e85fd*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 4)); /*0x6e860f*/
}
