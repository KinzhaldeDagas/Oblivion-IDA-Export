char __cdecl Cmd_GetIsRaining(int a1, int a2, int a3, double *a4)
{
  Sky *GlobalObject; // eax
  double v5; // st7
  float v7; // [esp+8h] [ebp-4h]

  GlobalObject = Sky_CreateOrGetGlobalObject();
  if ( sub_4F5ED0(GlobalObject) )
    v5 = 1.0;
  else
    v5 = 0.0;
  v7 = v5;
  *a4 = v7;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsRaining >> %0.2f", v7);
  return 1;
}
