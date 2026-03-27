char __cdecl sub_4F4B70(int a1, unsigned __int8 *a2, int a3, double *a4)
{
  double v8; // st5
  int v10; // [esp+1Ch] [ebp+10h]

  *a4 = 0.0;
  if ( a2 )
  {
    v10 = sub_529750(a2);
    v8 = (double)v10;
    if ( v10 < 0 )
      v8 = v8 + flt_A2FC78;
    *a4 = v8;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetStage >> %0.2f", *a4);
  return 1;
}
