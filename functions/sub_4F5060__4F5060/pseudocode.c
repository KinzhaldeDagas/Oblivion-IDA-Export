char __cdecl sub_4F5060(_DWORD **a1, int a2, int a3, double *a4)
{
  double IsAlerted; // st7

  *a4 = 0.0; /*0x4f506e*/
  if ( !a1 ) /*0x4f5070*/
    return 1; /*0x4f5070*/
  if ( !((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[0x64])(a1) ) /*0x4f507c*/
    return 1; /*0x4f507c*/
  IsAlerted = (double)(unsigned __int8)Actor_IsAlerted(a1); /*0x4f5090*/
  *a4 = IsAlerted; /*0x4f5094*/
  if ( !MEMORY[0xB361AC] ) /*0x4f5096*/
    return 1; /*0x4f50ba*/
  Interface_ConsolePrint("GetIsAlerted: %0.2f", IsAlerted);
  return 1; /*0x4f50b2*/
}
