int __thiscall sub_6C4DA0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  int v5; // eax
  void (__cdecl *v6)(int, unsigned int *, int, int *, int); // edx
  unsigned int i; // ebx
  int v9; // [esp-14h] [ebp-28h]
  unsigned int v10; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x6c4da6*/
  NiTimeController_SaveBinary(this, (signed int)a2); /*0x6c4dad*/
  LOBYTE(a2) = *((_BYTE *)this + 0x6C); /*0x6c4dbc*/
  v9 = v2[0x88]; /*0x6c4dcd*/
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v9 + 8); /*0x6c4dce*/
  v11 = 1; /*0x6c4dd1*/
  v4(v9, &a2, 1, &v11, 1); /*0x6c4dd9*/
  v5 = v2[0x88]; /*0x6c4ddf*/
  v10 = *((unsigned __int16 *)this + 0x23); /*0x6c4dec*/
  v6 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v5 + 8); /*0x6c4df0*/
  v11 = 4; /*0x6c4dfb*/
  v6(v5, &v10, 4, &v11, 1); /*0x6c4e03*/
  for ( i = 0; i < v10; ++i ) /*0x6c4e0e*/
  {
    if ( *(_DWORD *)(*(this + 0x10) + 4 * i) ) /*0x6c4e13*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*(this + 0x10) + 4 * i)); /*0x6c4e22*/
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0x1F)); /*0x6c4e3a*/
}
