char __cdecl sub_4F4720(int a1, int a2, int a3, double *a4)
{
  double v4; // st7

  if ( !a1 ) /*0x4f4726*/
    return 1; /*0x4f4726*/
  v4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 0xEC))(a1); /*0x4f4730*/
  *a4 = v4; /*0x4f4736*/
  if ( !MEMORY[0xB361AC] ) /*0x4f4738*/
    return 1; /*0x4f4759*/
  Interface_ConsolePrint("GetScale >> %0.2f", v4); /*0x4f474c*/
  return 1; /*0x4f4756*/
}
