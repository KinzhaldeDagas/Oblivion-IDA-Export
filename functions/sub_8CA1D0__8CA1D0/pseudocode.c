void __thiscall sub_8CA1D0(int *this, int a2)
{
  int v3; // edx
  int v4; // ecx
  _DWORD *i; // eax
  int v6; // eax
  int v7; // edx
  int j; // edi
  int v9; // [esp-8h] [ebp-14h]

  v3 = *(this + 0xA);
  v4 = 0;
  if ( v3 > 0 )
  {
    for ( i = (_DWORD *)*(this + 9); *i != a2; i += 2 )
    {
      if ( ++v4 >= v3 )
        return;
    }
    v6 = *(this + 9);
    v7 = *(this + 0xA) - 1;
    *(this + 0xA) = v7;
    *(_DWORD *)(v6 + 8 * v4) = *(_DWORD *)(v6 + 8 * v7);
    *(_DWORD *)(v6 + 8 * v4 + 4) = *(_DWORD *)(v6 + 8 * v7 + 4);
    for ( j = 0; j < *(this + 0xD); ++j )
    {
      v9 = 4 * j;
      LOBYTE(v9) = 0;
      (*(void (__cdecl **)(int, _DWORD, int, _DWORD))(4 * j + *(this + 0xC)))(
        a2,
        0,
        v9,
        *(_DWORD *)(*(this + 0xF) + 4 * j));
    }
  }
}
