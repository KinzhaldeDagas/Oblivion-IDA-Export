int __thiscall sub_6D58D0(_DWORD *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2; /*0x6d58d2*/
  NiTimeController_SaveBinary(this, a2); /*0x6d58d9*/
  v6 = v2[0x88]; /*0x6d58f1*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v6 + 8); /*0x6d58f2*/
  a2 = 2; /*0x6d58f5*/
  v4(v6, this + 0x13, 2, &a2, 1); /*0x6d58fd*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0x14)); /*0x6d590f*/
}
