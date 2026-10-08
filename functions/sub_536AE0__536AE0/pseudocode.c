char __thiscall sub_536AE0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = *(this + 7); /*0x536ae0*/
  if ( !v2 ) /*0x536ae5*/
    return 0; /*0x536afc*/
  while ( *(_DWORD *)(v2 + 0xC) != a2 ) /*0x536af3*/
  {
    v2 = *(_DWORD *)(v2 + 4); /*0x536af5*/
    if ( !v2 ) /*0x536afa*/
      return 0; /*0x536afa*/
  }
  return 1; /*0x536afe*/
}
