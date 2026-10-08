int __fastcall GetPrimaryLen(int a1, char *a2)
{
  int result; // eax
  char v3; // cl

  for ( result = 0; ; ++result ) /*0x99abee*/
  {
    v3 = *a2++; /*0x99abf0*/
    if ( (v3 < 0x41 || v3 > 0x5A) && (unsigned __int8)(v3 - 0x61) > 0x19u ) /*0x99ac03*/
      break; /*0x99ac03*/
  }
  return result; /*0x99ac08*/
}
