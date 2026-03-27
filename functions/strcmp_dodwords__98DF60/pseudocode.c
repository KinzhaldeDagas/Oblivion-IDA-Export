int __fastcall strcmp_::dodwords(_BYTE *a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax

  while ( 1 )
  {
    v2 = *a2;
    if ( (unsigned __int8)*a2 != *a1 )
      break;
    if ( !(_BYTE)v2 )
      return strcmp_::doneeq(a1, a2);
    if ( BYTE1(v2) != a1[1] )
      break;
    if ( !BYTE1(v2) )
      return strcmp_::doneeq(a1, a2);
    v3 = HIWORD(v2);
    if ( (_BYTE)v3 != a1[2] )
      break;
    if ( !(_BYTE)v3 )
      return strcmp_::doneeq(a1, a2);
    if ( BYTE1(v3) != a1[3] )
      break;
    a1 += 4;
    ++a2;
    if ( !BYTE1(v3) )
      return strcmp_::doneeq(a1, a2);
  }
  return strcmp_::donene();
}
