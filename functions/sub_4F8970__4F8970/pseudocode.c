char __cdecl sub_4F8970(int a1, int a2, int a3, double *a4)
{
  int v7; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      v7 = sub_4D96F0((_DWORD *)a1, *(_DWORD **)(a1 + 0x3C), "Bip01 Spine");
      if ( !v7 || sub_897580(v7, 0) )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Is Facing Up >> %0.2f", *a4);
  return 1;
}
