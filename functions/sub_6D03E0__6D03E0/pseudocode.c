int __thiscall sub_6D03E0(_DWORD *this, signed int a2)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // edx
  int result; // eax
  int i; // esi
  int v7; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2;
  sub_754EB0(a2);
  v4 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(v2[0x88] + 8);
  v7 = v2[0x88];
  a2 = 2;
  result = v4(v7, this + 0x11, 2, &a2, 1);
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 0x22); ++i )
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(
               v2,
               *(_DWORD *)(*(this + 0x10) + 4 * (unsigned __int16)i));
  return result;
}
