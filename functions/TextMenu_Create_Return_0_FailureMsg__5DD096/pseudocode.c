// positive sp value has been detected, the output may be wrong!
char TextMenu_Create_::Return_0_FailureMsg()
{
  PrintError("Text Edit Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5dd09b*/
  return 0; /*0x5dd0aa*/
}
