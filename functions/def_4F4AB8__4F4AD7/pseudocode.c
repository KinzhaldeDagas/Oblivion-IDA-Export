// positive sp value has been detected, the output may be wrong!
char __usercall def_4F4AB8@<al>(double *a1@<esi>)
{
  if ( MEMORY[0xB361AC] ) /*0x4f4ad7*/
    Interface_ConsolePrint("GetSleeping >> %0.2f", *a1); /*0x4f4aed*/
  return 1; /*0x4f4af9*/
}
