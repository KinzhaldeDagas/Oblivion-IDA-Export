int __thiscall sub_7586D0(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // edx
  int v5; // eax
  void (__cdecl *v6)(int, _DWORD *, int, signed int *, int); // edx
  void (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // edx
  _DWORD *v8; // ebx
  int result; // eax
  int v10; // eax
  void (__cdecl *v11)(int, _DWORD *, int, int *, int); // edx
  int v13; // [esp-14h] [ebp-28h]
  int v14; // [esp-14h] [ebp-28h]
  int v15; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x7586d5*/
  nullsub_returnvVoid_1arg(a2); /*0x7586dc*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x7586e7*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x7586fb*/
  a2 = 4; /*0x7586fc*/
  v4(v13, this + 2, 4, &a2, 1); /*0x758700*/
  if ( *(this + 2) ) /*0x758705*/
  {
    v5 = *(_DWORD *)(v2 + 0x220); /*0x75870a*/
    v6 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v5 + 8); /*0x758710*/
    a2 = 4; /*0x75871a*/
    v6(v5, this + 4, 4, &a2, 1); /*0x758725*/
    (*(void (__cdecl **)(signed int, _DWORD, _DWORD))(4 * *(this + 4) + 0xB3D5C0))(v2, *(this + 3), *(this + 2)); /*0x758739*/
  }
  v7 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x758749*/
  v8 = this + 6; /*0x758754*/
  v14 = *(_DWORD *)(v2 + 0x220); /*0x758758*/
  a2 = 4; /*0x758759*/
  v7(v14, this + 6, 4, &a2, 1); /*0x75875d*/
  result = *(this + 6); /*0x75875f*/
  a2 = 0; /*0x758766*/
  if ( result ) /*0x75876e*/
  {
    do /*0x7587bc*/
    {
      if ( result ) /*0x758772*/
      {
        v10 = *(_DWORD *)(v2 + 0x220); /*0x758774*/
        v11 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(v10 + 8); /*0x75877a*/
        v15 = 4; /*0x758784*/
        v11(v10, this + 8, 4, &v15, 1); /*0x75878f*/
        (*(void (__cdecl **)(signed int, _DWORD, _DWORD))(4 * *(this + 8) + 0xB3D638))(v2, *(this + 7), *v8); /*0x7587a3*/
      }
      result = *v8; /*0x7587b1*/
    }
    while ( (unsigned int)++a2 < *v8 ); /*0x7587bc*/
  }
  return result; /*0x7587be*/
}
