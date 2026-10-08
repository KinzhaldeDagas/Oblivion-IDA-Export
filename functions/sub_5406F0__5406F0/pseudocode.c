int sub_5406F0()
{
  unsigned __int8 currentVersion; // cl
  int v1; // eax
  int result; // eax

  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x5406f6*/
  v1 = 0xC; /*0x5406fc*/
  if ( currentVersion >= 0x5Du ) /*0x540701*/
    v1 = 0x10; /*0x540703*/
  result = v1 + 0x10; /*0x540708*/
  if ( currentVersion >= 0x69u ) /*0x54070e*/
    result += 8; /*0x540710*/
  return result; /*0x540713*/
}
