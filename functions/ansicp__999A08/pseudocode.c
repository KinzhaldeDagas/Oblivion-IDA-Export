int __cdecl __ansicp(LCID Locale)
{
  CHAR LCData[8]; // [esp+0h] [ebp-Ch] BYREF

  LCData[6] = 0; /*0x999a26*/
  if ( GetLocaleInfoA(Locale, 0x1004u, LCData, 6) ) /*0x999a2a*/
    return atol(LCData); /*0x999a3d*/
  else
    return 0xFFFFFFFF; /*0x999a34*/
}
