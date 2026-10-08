void __thiscall sub_8CA1D0(int *this, int a2)
{
  int v3; // edx
  int v4; // ecx
  _DWORD *i; // eax
  int v6; // eax
  int v7; // edx
  int j; // edi
  int v9; // [esp-8h] [ebp-14h]

  v3 = *(this + 0xA); /*0x8ca1d4*/
  v4 = 0; /*0x8ca1d7*/
  if ( v3 > 0 ) /*0x8ca1dc*/
  {
    for ( i = (_DWORD *)*(this + 9); *i != a2; i += 2 ) /*0x8ca1de*/
    {
      if ( ++v4 >= v3 ) /*0x8ca1ef*/
        return; /*0x8ca1ef*/
    }
    v6 = *(this + 9); /*0x8ca1fa*/
    v7 = *(this + 0xA) - 1; /*0x8ca1fd*/
    *(this + 0xA) = v7; /*0x8ca1fe*/
    *(_DWORD *)(v6 + 8 * v4) = *(_DWORD *)(v6 + 8 * v7); /*0x8ca204*/
    *(_DWORD *)(v6 + 8 * v4 + 4) = *(_DWORD *)(v6 + 8 * v7 + 4); /*0x8ca20b*/
    for ( j = 0; j < *(this + 0xD); ++j ) /*0x8ca216*/
    {
      v9 = 4 * j; /*0x8ca22e*/
      LOBYTE(v9) = 0; /*0x8ca231*/
      (*(void (__cdecl **)(int, _DWORD, int, _DWORD))(4 * j + *(this + 0xC)))( /*0x8ca23c*/
        a2,
        0,
        v9,
        *(_DWORD *)(*(this + 0xF) + 4 * j));
    }
  }
}
