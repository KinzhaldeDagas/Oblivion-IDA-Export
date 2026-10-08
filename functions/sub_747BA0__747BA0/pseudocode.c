// Pass223: Startup callback dispatcher; invokes registered property startup callback when present.
int sub_747BA0()
{
  int result; // eax
  unsigned int i; // esi

  sub_7489F0(); /*0x747ba0*/
  result = LODWORD(MEMORY[0xB3F9B0][0x283]); /*0x747ba5*/
  if ( LODWORD(MEMORY[0xB3F9B0][0x283]) ) /*0x747ba5*/
    result = ((int (*)(void))result)(); /*0x747bae*/
  for ( i = 0; i < LODWORD(MEMORY[0xB3F9B0][0x282]); ++i ) /*0x747bb3*/
    result = (*(int (**)(void))(4 * i + 0xB40378))(); /*0x747bc7*/
  return result; /*0x747bd5*/
}
