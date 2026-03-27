unsigned int __fastcall strcmp_::doword(_BYTE *a1, _WORD *a2)
{
  __int16 v2; // ax
  unsigned int *v3; // edx
  char v4; // cf

  v2 = *a2;
  v3 = (unsigned int *)(a2 + 1);
  v4 = (unsigned __int8)v2 < *a1;
  if ( (_BYTE)v2 != *a1 )
    return strcmp_::donene(v4);
  if ( (_BYTE)v2 )
  {
    v4 = HIBYTE(v2) < a1[1];
    if ( HIBYTE(v2) == a1[1] )
    {
      if ( HIBYTE(v2) )
        return strcmp_::dodwords(a1 + 2, v3);
      return strcmp_::doneeq();
    }
    return strcmp_::donene(v4);
  }
  return strcmp_::doneeq();
}
