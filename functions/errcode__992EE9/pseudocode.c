int __cdecl _errcode(char a1)
{
  if ( (a1 & 0x20) != 0 ) /*0x992eef*/
    return 5; /*0x992f0c*/
  if ( (a1 & 8) != 0 ) /*0x992ef7*/
    return 1; /*0x992efc*/
  if ( (a1 & 4) != 0 ) /*0x992eff*/
    return 2; /*0x992f03*/
  if ( (a1 & 1) != 0 ) /*0x992f07*/
    return 3; /*0x992f09*/
  return 2 * (a1 & 2); /*0x992efc*/
}
