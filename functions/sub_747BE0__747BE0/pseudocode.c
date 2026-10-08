// Pass223: Shutdown callback dispatcher; invokes registered property shutdown callback before later heap cleanup.
void sub_747BE0()
{
  unsigned int i; // esi

  for ( i = 0; i < LODWORD(MEMORY[0xB3F9B0][0x282]); ++i ) /*0x747be3*/
    (*(void (**)(void))(4 * i + 0xB40338))(); /*0x747bf7*/
  if ( LODWORD(MEMORY[0xB3F9B0][0x284]) ) /*0x747c04*/
    ((void (*)(void))LODWORD(MEMORY[0xB3F9B0][0x284]))(); /*0x747c0e*/
  if ( BYTE1(MEMORY[0xB3F9B0][0x383]) ) /*0x748a10*/
  {
    BYTE1(MEMORY[0xB3F9B0][0x383]) = 0; /*0x748a19*/
    sub_7485C0(); /*0x748a20*/
    FormHeapFree(LODWORD(MEMORY[0xB3F9B0][0x382])); /*0x7487c6*/
  }
}
