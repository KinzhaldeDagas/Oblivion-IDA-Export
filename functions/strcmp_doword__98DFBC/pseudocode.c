int __fastcall strcmp_::doword(_BYTE *a1, _WORD *a2)
{
  __int16 v2; // ax
  unsigned int *v3; // edx
  char v4; // cf

  v2 = *a2; /*0x98dfbc*/
  v3 = (unsigned int *)(a2 + 1); /*0x98dfbf*/
  v4 = (unsigned __int8)v2 < *a1; /*0x98dfc2*/
  if ( (_BYTE)v2 != *a1 ) /*0x98dfc4*/
    return strcmp_::donene(v4); /*0x98dfc4*/
  if ( (_BYTE)v2 ) /*0x98dfc8*/
  {
    v4 = HIBYTE(v2) < a1[1]; /*0x98dfca*/
    if ( HIBYTE(v2) == a1[1] ) /*0x98dfcd*/
    {
      if ( HIBYTE(v2) ) /*0x98dfd1*/
        return strcmp_::dodwords(a1 + 2, v3); /*0x98dfd6*/
      return strcmp_::doneeq(); /*0x98dfd1*/
    }
    return strcmp_::donene(v4); /*0x98dfc4*/
  }
  return strcmp_::doneeq();
}
