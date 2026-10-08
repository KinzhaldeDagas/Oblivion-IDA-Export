char __cdecl sub_4F4FB0(int a1, int a2, int a3, double *a4)
{
  double v4; // st7

  *a4 = 0.0; /*0x4f4fbe*/
  if ( !a1 ) /*0x4f4fc0*/
    return 1; /*0x4f4fc0*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f4fcc*/
    return 1; /*0x4f4fcc*/
  v4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 0x348))(a1); /*0x4f4fdc*/
  *a4 = v4; /*0x4f4fde*/
  if ( !MEMORY[0xB361AC] ) /*0x4f4fe0*/
    return 1; /*0x4f5004*/
  Interface_ConsolePrint("Armor Rating: %0.2f", v4);
  return 1; /*0x4f4ffc*/
}
