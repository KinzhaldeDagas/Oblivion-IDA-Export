char __cdecl Cmd_GetActionRef(int a1, int a2, TESChildCELL *a3, int a4, int a5, int a6, BSExtraDataVtbl *a7)
{
  BSExtraDataVtbl *v7; // edi

  v7 = a7;
  *(double *)a7 = 0.0;
  a7 = 0;
  if ( a3 )
  {
    if ( sub_4D8360(a3) )
    {
      a7 = sub_4D8360(a3)[1].vtbl;
      sub_4F9FB0(&a7, v7);
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetActionRef >> (%08x)", a7);
  return 1;
}
