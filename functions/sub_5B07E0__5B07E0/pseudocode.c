void __usercall sub_5B07E0(double a1@<st2>, double a2@<st7>, double a3@<st6>, double a4@<st5>, double a5@<st4>)
{
  if ( InterfaceManager_MenuModeHasFocus(0x3F6) ) /*0x5b07e8*/
  {
    if ( LOBYTE(dword_B3B0B4[0xD0]) ) /*0x5b07f4*/
    {
      sub_5AFD50("DRSLockOpenFail"); /*0x5b0804*/
      LOBYTE(dword_B3B0B4[0xD0]) = 0; /*0x5b0809*/
    }
    sub_583DF0(0xFF); /*0x5b0815*/
    sub_5AF960(a1, a2, a3, a4, a5); /*0x5b081e*/
  }
}
