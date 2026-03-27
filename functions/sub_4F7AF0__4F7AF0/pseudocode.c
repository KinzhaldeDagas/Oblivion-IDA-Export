char __cdecl sub_4F7AF0(int a1, int a2, unsigned int a3, double *a4)
{
  int v7; // edi
  char v8; // al

  *a4 = 0.0;
  v7 = 0;
  if ( a2 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(a2 + 4) - 0x31 <= 2 )
      v7 = a2;
  }
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      if ( v7 )
      {
        if ( a3 > 5 )
          v8 = sub_675C40(&ActorProcessManager_ptr, a1, v7, a1, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        else
          v8 = sub_675C40(&ActorProcessManager_ptr, a1, v7, a1, a3, 0, 0xFFFFFFFF);
        if ( v8 )
          *a4 = 1.0;
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetCrime >> %0.2f", *a4);
  return 1;
}
