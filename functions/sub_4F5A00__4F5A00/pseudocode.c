char __cdecl sub_4F5A00(char *a1, int a2, int a3, double *a4)
{
  const char *v7; // edi

  *a4 = 0.0;
  v7 = 0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      v7 = a1;
      if ( sub_5E8870(a1) )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
  {
    if ( 0.0 != *a4 )
    {
      Interface_ConsolePrint("%s  is offering services", v7);
      return 1;
    }
    Interface_ConsolePrint("%s is not offering services", v7);
  }
  return 1;
}
