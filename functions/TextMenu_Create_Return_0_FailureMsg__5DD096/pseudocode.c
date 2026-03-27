// positive sp value has been detected, the output may be wrong!
char TextMenu_Create_::Return_0_FailureMsg()
{
  PrintError("Text Edit Menu Creation Failed... Are your menu and art resources up to date?");
  return 0;
}
