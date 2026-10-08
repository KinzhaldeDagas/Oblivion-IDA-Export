char __cdecl sub_4F89E0(int a1, int a2, int a3, double *a4)
{
  int v4; // eax

  *a4 = 0.0; /*0x4f89ee*/
  if ( a1 ) /*0x4f89f0*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f89fc*/
    {
      v4 = sub_4D96F0((_DWORD *)a1, *(_DWORD **)(a1 + 0x3C), "Bip01 Spine"); /*0x4f8a0d*/
      if ( !v4 || sub_8975C0(v4, 0) ) /*0x4f8a19*/
        *a4 = 1.0; /*0x4f8a27*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f8a29*/
    Interface_ConsolePrint("Is Left Up >> %0.2f", *a4); /*0x4f8a3f*/
  return 1; /*0x4f8a47*/
}
