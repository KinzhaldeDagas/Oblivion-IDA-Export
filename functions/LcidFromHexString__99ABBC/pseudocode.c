int __fastcall LcidFromHexString(int a1, char *a2)
{
  int i; // esi
  char v3; // cl

  for ( i = 0; ; i = 0x10 * i + v3 - 0x30 ) /*0x99abbd*/
  {
    v3 = *a2; /*0x99abe4*/
    if ( !*a2 ) /*0x99abe4*/
      break; /*0x99abe4*/
    ++a2; /*0x99abc5*/
    if ( (unsigned __int8)(v3 - 0x61) > 5u ) /*0x99abc8*/
    {
      if ( (unsigned __int8)(v3 - 0x41) <= 5u ) /*0x99abd5*/
        v3 -= 7; /*0x99abd7*/
    }
    else
    {
      v3 -= 0x27; /*0x99abca*/
    }
  }
  return i; /*0x99abec*/
}
