// positive sp value has been detected, the output may be wrong!
char __usercall def_4F6559@<al>(double *a1@<edi>)
{
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetSitting >> %0.2f", *a1);
  return 1;
}
