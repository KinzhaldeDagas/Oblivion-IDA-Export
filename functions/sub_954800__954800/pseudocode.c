int *__stdcall sub_954800(int *a1)
{
  int *result; // eax

  for ( result = a1; result; result = (int *)*result ) /*0x954806*/
  {
    if ( *((_BYTE *)result + 0x39) ) /*0x954810*/
      break; /*0x954815*/
    *((_BYTE *)result + 0x39) = 1; /*0x954817*/
  }
  return result; /*0x954820*/
}
