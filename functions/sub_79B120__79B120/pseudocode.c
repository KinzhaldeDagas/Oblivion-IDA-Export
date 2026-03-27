void __cdecl sub_79B120(_DWORD *a1, _DWORD *a2)
{
  _DWORD *i; // esi

  for ( i = a1; i != a2; i += 0xB )
  {
    if ( i[6] >= 0x10u )
      FormHeapFree(i[1]);
    i[6] = 0xF;
    i[5] = 0;
    *((_BYTE *)i + 4) = 0;
  }
}
