signed int sub_748A40()
{
  signed int result; // eax

  result = nullsub_retminus1_(); /*0x748a4b*/
  if ( result >= 0 ) /*0x748a55*/
  {
    dword_B40614[0x12] = result; /*0x748a57*/
    dword_B40614[0x15] = result; /*0x748a5c*/
    dword_B40614[0x18] = result; /*0x748a61*/
    dword_B40614[0x1B] = result; /*0x748a66*/
    LOBYTE(dword_B40614[0x1C]) = 1; /*0x748a6b*/
  }
  return result; /*0x748a72*/
}
