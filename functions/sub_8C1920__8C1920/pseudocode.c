void __thiscall sub_8C1920(int **this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int *v5; // eax
  int v6; // esi

  sub_8A0610(this, a2); /*0x8c1928*/
  if ( this && (v3 = (int)*(this + 2)) != 0 ) /*0x8c1936*/
  {
    v4 = *(_DWORD *)(v3 + 0xC); /*0x8c1938*/
  }
  else
  {
    v5 = *(this + 3); /*0x8c193d*/
    if ( !v5 ) /*0x8c1942*/
      return; /*0x8c1942*/
    v4 = *v5; /*0x8c1944*/
  }
  if ( v4 ) /*0x8c1948*/
  {
    if ( 0.0 != *(float *)(v4 + 0x98) ) /*0x8c1957*/
    {
      v6 = (int)*(this + 2); /*0x8c1959*/
      if ( v6 ) /*0x8c195e*/
        *(_BYTE *)(v6 + 0x19) = 1; /*0x8c1960*/
    }
  }
}
