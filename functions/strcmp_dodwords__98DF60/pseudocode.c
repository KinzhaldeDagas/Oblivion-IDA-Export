unsigned int __fastcall strcmp_::dodwords(_BYTE *a1, unsigned int *a2)
{
  unsigned int v2; // eax
  char v3; // cf
  unsigned int v4; // eax

  while ( 1 ) /*0x98df60*/
  {
    v2 = *a2; /*0x98df60*/
    v3 = (unsigned __int8)*a2 < *a1; /*0x98df62*/
    if ( (unsigned __int8)*a2 != *a1 ) /*0x98df64*/
      break; /*0x98df64*/
    if ( !(_BYTE)v2 ) /*0x98df68*/
      return strcmp_::doneeq(); /*0x98df68*/
    v3 = BYTE1(v2) < a1[1]; /*0x98df6a*/
    if ( BYTE1(v2) != a1[1] ) /*0x98df6d*/
      break; /*0x98df6d*/
    if ( !BYTE1(v2) ) /*0x98df71*/
      return strcmp_::doneeq(); /*0x98df71*/
    v4 = HIWORD(v2); /*0x98df73*/
    v3 = (unsigned __int8)v4 < a1[2]; /*0x98df76*/
    if ( (_BYTE)v4 != a1[2] ) /*0x98df79*/
      break; /*0x98df79*/
    if ( !(_BYTE)v4 ) /*0x98df7d*/
      return strcmp_::doneeq(); /*0x98df7d*/
    v3 = BYTE1(v4) < a1[3]; /*0x98df7f*/
    if ( BYTE1(v4) != a1[3] ) /*0x98df82*/
      break; /*0x98df82*/
    a1 += 4; /*0x98df84*/
    ++a2; /*0x98df87*/
    if ( !BYTE1(v4) ) /*0x98df8c*/
      return strcmp_::doneeq(); /*0x98df8f*/
  }
  return strcmp_::donene(v3);
}
