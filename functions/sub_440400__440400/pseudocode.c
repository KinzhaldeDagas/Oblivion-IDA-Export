void __thiscall sub_440400(_DWORD *this)
{
  _BYTE *v2; // ecx
  int v3; // edi
  unsigned int v4; // eax
  unsigned int i; // ebx
  unsigned int j; // esi
  _BYTE *v7; // ecx

  dword_B33C28 = 0;
  v2 = (_BYTE *)*(this + 0xD);
  if ( v2 )
  {
    sub_4CCC50(v2);
  }
  else
  {
    v3 = *(this + 2);
    v4 = *(_DWORD *)(v3 + 0xC);
    for ( i = 0; i < v4; ++i )
    {
      for ( j = 0; j < v4; ++j )
      {
        v7 = *(_BYTE **)(*(_DWORD *)(v3 + 0x10) + 8 * (j + i * v4));
        if ( v7 )
          sub_4CCC50(v7);
        v4 = *(_DWORD *)(v3 + 0xC);
      }
      v4 = *(_DWORD *)(v3 + 0xC);
    }
  }
}
