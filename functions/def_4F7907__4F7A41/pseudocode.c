// positive sp value has been detected, the output may be wrong!
char __usercall def_4F7907@<al>(double *a1@<esi>)
{
  *a1 = dbl_A3D360;
  if ( IsConsoleMode )
    Interface_ConsolePrint("Current Process >> %0.2f", *a1);
  return 1;
}
