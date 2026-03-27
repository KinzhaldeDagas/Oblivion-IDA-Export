char __usercall sub_4F54A0@<al>(double a1@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  int v9; // eax
  int v10; // eax
  double v11; // st5
  float v13; // [esp+20h] [ebp+10h]

  *a6 = 0.0;
  if ( a3 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3) )
    {
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3);
      if ( v9 )
      {
        v10 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v9 + 8))(v9, a2, a1);
        if ( sub_4DE320((int)a6, v10) )
          v11 = 1.0;
        else
          v11 = 0.0;
        v13 = v11;
        *a6 = v13;
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("HasFlames >> %0.2f", *a6);
  return 1;
}
