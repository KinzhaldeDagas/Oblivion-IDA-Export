// positive sp value has been detected, the output may be wrong!
char __usercall def_4F7907@<al>(double *a1@<esi>)
{
  *a1 = dbl_A3D360; /*0x4f7a47*/
  if ( MEMORY[0xB361AC] ) /*0x4f7a49*/
    Interface_ConsolePrint("Current Process >> %0.2f", *a1); /*0x4f7a5f*/
  return 1; /*0x4f7a6b*/
}
