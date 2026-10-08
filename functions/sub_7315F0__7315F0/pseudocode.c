// Pass223: Registers startup callback 0x00730D80 and shutdown callback 0x00731290 through 0x00747C20.
void *__thiscall sub_7315F0(void *this)
{
  if ( LODWORD(MEMORY[0xB3F9B0][0x181])++ == 0 ) /*0x7315fd*/
    sub_747C20((int (*)(void))sub_730D80, (int (*)(void))sub_731290); /*0x731610*/
  return this; /*0x73161a*/
}
