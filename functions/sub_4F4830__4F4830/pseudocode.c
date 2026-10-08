char __cdecl sub_4F4830(void *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f483e*/
  if ( a1 ) /*0x4f4840*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f484c*/
    {
      if ( sub_5E04C0(a1) ) /*0x4f4854*/
        *a4 = 1.0; /*0x4f485f*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f4861*/
    Interface_ConsolePrint("GetVampire >> %0.2f", *a4); /*0x4f4877*/
  return 1; /*0x4f487f*/
}
