int __thiscall sub_6E4820(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // edx
  int result; // eax
  int v6; // eax
  void (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-24h]

  v2 = a2; /*0x6e4824*/
  nullsub_returnvVoid_1arg(a2); /*0x6e482b*/
  v4 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6e4836*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x6e484a*/
  a2 = 4; /*0x6e484b*/
  result = v4(v8, this + 2, 4, &a2, 1); /*0x6e484f*/
  if ( *(this + 2) ) /*0x6e4854*/
  {
    v6 = *(_DWORD *)(v2 + 0x220); /*0x6e4859*/
    v7 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v6 + 8); /*0x6e485f*/
    a2 = 4; /*0x6e4869*/
    v7(v6, this + 4, 4, &a2, 1); /*0x6e4874*/
    return (*(int (__cdecl **)(signed int, _DWORD, _DWORD))(4 * *(this + 4) + 0xB3D608))(v2, *(this + 3), *(this + 2)); /*0x6e4888*/
  }
  return result; /*0x6e488d*/
}
