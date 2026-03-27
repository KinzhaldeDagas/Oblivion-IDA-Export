char __cdecl sub_4F5A80(_BYTE *a1, int a2, int a3, double *a4)
{
  double v8; // st5
  int v9; // eax
  int v11; // [esp+8h] [ebp+4h]

  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      v11 = sub_5FAA70(a1);
      v8 = (double)v11;
      if ( v11 < 0 )
        v8 = v8 + flt_A2FC78;
      *a4 = v8;
      if ( IsConsoleMode )
      {
        v9 = sub_5FAA70(a1);
        Interface_ConsolePrint("%s  has %d barter gold currently", a1, v9);
      }
    }
  }
  return 1;
}
