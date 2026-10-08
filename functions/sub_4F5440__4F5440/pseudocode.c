char __cdecl sub_4F5440(_DWORD **a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f544e*/
  if ( a1 ) /*0x4f5450*/
  {
    if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[0x64])(a1) ) /*0x4f545c*/
      *a4 = (double)(unsigned __int8)sub_5E0E80(a1); /*0x4f5474*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f5476*/
    Interface_ConsolePrint("is continuing package near PC value %0.2f", *a4); /*0x4f548c*/
  return 1; /*0x4f5494*/
}
