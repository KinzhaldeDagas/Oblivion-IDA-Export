int __cdecl _sptype(int a1, int a2)
{
  if ( a2 == 0x7FF00000 ) /*0x9928e7*/
  {
    if ( !a1 ) /*0x9928ec*/
      return 1; /*0x9928f2*/
  }
  else if ( a2 == 0xFFF00000 && !a1 ) /*0x9928ff*/
  {
    return 2; /*0x992905*/
  }
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF8 ) /*0x992913*/
    return 3; /*0x992917*/
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF0 && ((a2 & 0x7FFFF) != 0 || a1) ) /*0x99292c*/
    return 4; /*0x992930*/
  return 0; /*0x9928f1*/
}
