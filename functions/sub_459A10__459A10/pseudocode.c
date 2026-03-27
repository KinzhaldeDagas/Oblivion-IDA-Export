void __usercall sub_459A10(
        char a1@<bpl>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>)
{
  DWORD (__stdcall *v9)(); // esi

  sub_4599B0(a1, a7, a8, a9);
  if ( sub_578FE0() != 3 || GetOpenedMenuCode(a1, a7, a8, a9) != 3 )
  {
    sub_6B94E0();
    a9 = CloseAllMenus(a8, a1, a7, a9);
  }
  sub_5791A0(a1, a7, a8, a9);
  sub_5791E0(a9, a6, a7, a8, a5, a2, a3, a4, a1);
  sub_579220(a1, a7, a8, a9);
  v9 = GetTickCount;
  dword_B33B08 = GetTickCount();
  if ( v9() > dword_B33B08 + 0xBB8 )
  {
    if ( sub_57BAC0(a1, a7, a8, a9) )
      sub_57B950(a1, a7, a8, 0.0, 0, 0.0);
    else
      sub_440AF0((int)TES, a7, a8, a1, 1, 0, 0);
  }
}
