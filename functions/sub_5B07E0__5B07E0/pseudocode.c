void __usercall sub_5B07E0(double a1@<st2>, double a2@<st1>)
{
  if ( InterfaceManager_MenuModeHasFocus(0x3F6) )
  {
    if ( byte_B3B3F4 )
    {
      sub_5AFD50("DRSLockOpenFail");
      byte_B3B3F4 = 0;
    }
    sub_583DF0(0xFF);
    sub_5AF960(a1, a2);
  }
}
