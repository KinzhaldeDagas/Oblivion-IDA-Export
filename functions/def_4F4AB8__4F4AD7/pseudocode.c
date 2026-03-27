// positive sp value has been detected, the output may be wrong!
char __usercall def_4F4AB8@<al>(double *a1@<esi>)
{
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetSleeping >> %0.2f", *a1);
  return 1;
}
