void __cdecl sub_54F630(void *a1, unsigned int a2, char a3)
{
  if ( a1 ) /*0x54f637*/
  {
    if ( a2 ) /*0x54f63f*/
    {
      if ( a3 ) /*0x54f646*/
        _memset((int)a1, 0, 4 * a2); /*0x54f653*/
      else
        memset32(a1, 0x7F7FFFFF, a2); /*0x54f666*/
    }
  }
}
