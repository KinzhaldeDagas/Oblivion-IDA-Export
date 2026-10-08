char __cdecl sub_4F7650(_DWORD *a1, int a2, int a3, double *a4)
{
  int v4; // ecx

  *a4 = 0.0; /*0x4f765e*/
  if ( a1 ) /*0x4f7660*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) ) /*0x4f766c*/
    {
      v4 = a1[0x16]; /*0x4f7672*/
      if ( v4 ) /*0x4f7677*/
      {
        if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0xF8))(v4, 1) ) /*0x4f7683*/
          *a4 = 1.0; /*0x4f768b*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f768d*/
    Interface_ConsolePrint("Is Shield Out >> %0.2f", *a4); /*0x4f76a3*/
  return 1; /*0x4f76ab*/
}
