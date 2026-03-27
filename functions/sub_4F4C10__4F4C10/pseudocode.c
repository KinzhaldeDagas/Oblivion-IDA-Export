char __cdecl sub_4F4C10(_DWORD *a1, int a2, int a3, double *a4)
{
  char *v7; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) )
    {
      v7 = sub_5E4080(a1);
      if ( !_strcmp(v7, "Alarm") )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetAlarmed >> %0.2f", *a4);
  return 1;
}
