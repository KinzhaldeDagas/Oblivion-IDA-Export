char __cdecl sub_4F75F0(_DWORD *a1, int a2, int a3, double *a4)
{
  int v4; // ecx

  *a4 = 0.0; /*0x4f75fe*/
  if ( a1 ) /*0x4f7600*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) ) /*0x4f760c*/
    {
      v4 = a1[0x16]; /*0x4f7612*/
      if ( v4 ) /*0x4f7617*/
      {
        if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0xF0))(v4, 1) ) /*0x4f7623*/
          *a4 = 1.0; /*0x4f762b*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f762d*/
    Interface_ConsolePrint("Is Torch Out >> %0.2f", *a4); /*0x4f7643*/
  return 1; /*0x4f764b*/
}
