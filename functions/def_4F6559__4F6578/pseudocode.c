// positive sp value has been detected, the output may be wrong!
char __usercall def_4F6559@<al>(double *a1@<edi>)
{
  if ( MEMORY[0xB361AC] ) /*0x4f6578*/
    Interface_ConsolePrint("GetSitting >> %0.2f", *a1); /*0x4f658e*/
  return 1; /*0x4f659a*/
}
