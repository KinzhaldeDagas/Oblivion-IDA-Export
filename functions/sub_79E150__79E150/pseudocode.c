void __cdecl sub_79E150(_DWORD *a1, _DWORD *a2)
{
  _DWORD *i; // esi

  for ( i = a1; i != a2; i += 0xC )
  {
    if ( i[1] )
      FormHeapFree(i[1]);
    i[1] = 0;
    i[2] = 0;
    i[3] = 0;
  }
}
