int __thiscall sub_6E8AF0(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // edx
  int result; // eax
  int v6; // eax
  void (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-24h]

  v2 = a2; /*0x6e8af4*/
  nullsub_returnvVoid_1arg(a2); /*0x6e8afb*/
  v4 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6e8b06*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x6e8b1a*/
  a2 = 4; /*0x6e8b1b*/
  result = v4(v8, this + 2, 4, &a2, 1); /*0x6e8b1f*/
  if ( *(this + 2) ) /*0x6e8b24*/
  {
    v6 = *(_DWORD *)(v2 + 0x220); /*0x6e8b29*/
    v7 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v6 + 8); /*0x6e8b2f*/
    a2 = 4; /*0x6e8b39*/
    v7(v6, this + 4, 4, &a2, 1); /*0x6e8b44*/
    return (*(int (__cdecl **)(signed int, _DWORD, _DWORD))(4 * *(this + 4) + 0xB3D638))(v2, *(this + 3), *(this + 2)); /*0x6e8b58*/
  }
  return result; /*0x6e8b5d*/
}
