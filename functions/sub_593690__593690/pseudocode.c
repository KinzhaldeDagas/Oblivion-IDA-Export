BOOL __thiscall sub_593690(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  BOOL result; // eax

  result = 0; /*0x5936e0*/
  if ( a2 ) /*0x593696*/
  {
    v2 = *(this + 0x2C); /*0x593698*/
    if ( v2 ) /*0x5936a0*/
    {
      if ( *(_DWORD *)(v2 + 8) == *(_DWORD *)(a2 + 8) ) /*0x5936a8*/
        return 1; /*0x5936a8*/
    }
    v3 = *(this + 0x2D); /*0x5936aa*/
    if ( v3 ) /*0x5936b2*/
    {
      if ( *(_DWORD *)(v3 + 8) == *(_DWORD *)(a2 + 8) ) /*0x5936ba*/
        return 1; /*0x5936ba*/
    }
    v4 = *(this + 0x2E); /*0x5936bc*/
    if ( v4 ) /*0x5936c4*/
    {
      if ( *(_DWORD *)(v4 + 8) == *(_DWORD *)(a2 + 8) ) /*0x5936cc*/
        return 1; /*0x5936cc*/
    }
    v5 = *(this + 0x2F); /*0x5936ce*/
    if ( v5 ) /*0x5936d6*/
    {
      if ( *(_DWORD *)(v5 + 8) == *(_DWORD *)(a2 + 8) ) /*0x5936de*/
        return 1; /*0x593696*/
    }
  }
  return result; /*0x5936e5*/
}
