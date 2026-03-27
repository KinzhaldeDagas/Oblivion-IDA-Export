int __cdecl _fpclass(double X)
{
  int v1; // eax
  int v2; // eax
  int v4; // ecx

  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 )
  {
    v1 = _sptype(LODWORD(X), HIDWORD(X)) - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
        return 4;
      if ( v2 != 1 )
        return 1;
      return 2;
    }
    else
    {
      return 0x200;
    }
  }
  else
  {
    v4 = HIWORD(X) & 0x8000;
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
