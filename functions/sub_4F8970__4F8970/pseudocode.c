char __cdecl sub_4F8970(int a1, int a2, int a3, double *a4)
{
  int v4; // eax

  *a4 = 0.0; /*0x4f897e*/
  if ( a1 ) /*0x4f8980*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f898c*/
    {
      v4 = sub_4D96F0((_DWORD *)a1, *(_DWORD **)(a1 + 0x3C), "Bip01 Spine"); /*0x4f899d*/
      if ( !v4 || sub_897580(v4, 0) ) /*0x4f89a9*/
        *a4 = 1.0; /*0x4f89b7*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f89b9*/
    Interface_ConsolePrint("Is Facing Up >> %0.2f", *a4); /*0x4f89cf*/
  return 1; /*0x4f89d7*/
}
