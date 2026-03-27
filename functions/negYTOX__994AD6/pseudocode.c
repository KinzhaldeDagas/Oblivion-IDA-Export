int negYTOX()
{
  int v0; // eax
  int v1; // ecx

  v0 = isintTOS();
  if ( !v0 )
    return unknown_libname_189_::negYTOXerror();
  BYTE1(v1) = 0;
  if ( v0 != 2 )
    BYTE1(v1) = 0xFF;
  return negYTOX_::evenexp(v1);
}
