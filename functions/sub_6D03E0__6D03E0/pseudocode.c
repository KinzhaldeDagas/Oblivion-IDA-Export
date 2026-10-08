int __thiscall sub_6D03E0(_DWORD *this, signed int a2)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // edx
  int result; // eax
  int i; // esi
  int v7; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2; /*0x6d03e4*/
  j_NiTimeController_SaveBinary(this, a2); /*0x6d03eb*/
  v4 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(v2[0x88] + 8); /*0x6d03f6*/
  v7 = v2[0x88]; /*0x6d0406*/
  a2 = 2; /*0x6d0407*/
  result = v4(v7, this + 0x11, 2, &a2, 1); /*0x6d040f*/
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x22); ++i ) /*0x6d0416*/
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))( /*0x6d0431*/
               v2,
               *(_DWORD *)(*(this + 0x10) + 4 * (unsigned __int16)i));
  return result; /*0x6d043c*/
}
