char __usercall sub_500F10@<al>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  char v4; // al
  const char *v5; // eax

  v4 = byte_B09F58 ^ 1;
  byte_B09F58 = v4;
  sub_5797E0(a1, a2, a3, a4, v4);
  if ( IsConsoleMode )
  {
    v5 = (const char *)&aOn_0;
    if ( !byte_B09F58 )
      v5 = (const char *)&aOff;
    Interface_ConsolePrint("Menus -> %s", v5);
  }
  return 1;
}
