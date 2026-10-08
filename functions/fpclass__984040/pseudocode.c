int __cdecl _fpclass(double X)
{
  int v1; // eax
  int v2; // eax
  int v4; // ecx

  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 )
  {
    v1 = _sptype(SLODWORD(X), SHIDWORD(X)) - 1; /*0x984061*/
    if ( v1 ) /*0x984064*/
    {
      v2 = v1 - 1; /*0x984066*/
      if ( !v2 ) /*0x984067*/
        return 4; /*0x984075*/
      if ( v2 != 1 ) /*0x98406a*/
        return 1; /*0x984070*/
      return 2; /*0x984077*/
    }
    else
    {
      return 0x200; /*0x98407a*/
    }
  }
  else
  {
    v4 = HIWORD(X) & 0x8000; /*0x984089*/
    if ( (HIWORD(X) & 0x7FF0) == 0 && ((HIDWORD(X) & 0xFFFFF) != 0 || LODWORD(X)) )
    {
      return (HIWORD(X) & 0x8000) != 0 ? 0x10 : 0x80;
    }
    else if ( 0.0 == X )
    {
      return v4 != 0 ? 0x20 : 0x40;
    }
    else
    {
      return v4 != 0 ? 8 : 0x100;
    }
  }
}
