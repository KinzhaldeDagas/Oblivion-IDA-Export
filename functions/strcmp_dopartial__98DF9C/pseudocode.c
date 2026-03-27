unsigned int __fastcall strcmp_::dopartial(unsigned __int8 *a1, _BYTE *a2)
{
  unsigned __int8 v2; // al
  unsigned int *v3; // edx

  if ( ((unsigned __int8)a2 & 1) == 0 )
    return strcmp_::doword(a1);
  v2 = *a2;
  v3 = (unsigned int *)(a2 + 1);
  if ( v2 != *a1 )
    return strcmp_::donene(v2 < *a1);
  ++a1;
  if ( !v2 )
    return strcmp_::doneeq();
  if ( ((unsigned __int8)v3 & 2) != 0 )
    return strcmp_::doword(a1);
  return strcmp_::dodwords(a1, v3);
}
