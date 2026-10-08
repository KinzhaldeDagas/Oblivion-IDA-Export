int __fastcall strcmp_::dopartial(unsigned __int8 *a1, unsigned int *a2)
{
  unsigned __int8 v2; // al

  if ( ((unsigned __int8)a2 & 1) == 0 ) /*0x98dfa2*/
    return strcmp_::doword(a1, a2); /*0x98dfa2*/
  v2 = *(_BYTE *)a2; /*0x98dfa4*/
  a2 = (unsigned int *)((char *)a2 + 1); /*0x98dfa6*/
  if ( v2 != *a1 ) /*0x98dfab*/
    return strcmp_::donene(v2 < *a1); /*0x98dfab*/
  ++a1; /*0x98dfad*/
  if ( !v2 ) /*0x98dfb2*/
    return strcmp_::doneeq(); /*0x98dfb2*/
  if ( ((unsigned __int8)a2 & 2) != 0 ) /*0x98dfba*/
    return strcmp_::doword(a1, a2); /*0x98dfbb*/
  return strcmp_::dodwords(a1, a2);
}
