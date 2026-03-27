char __usercall sub_501000@<al>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  bool v4; // zf
  const char *v5; // eax

  ToggleDebugText(a1, a2, a3, a4);
  if ( IsConsoleMode )
  {
    v4 = !GetInterfaceSingleton0x50();
    v5 = (const char *)&aOn_0;
    if ( v4 )
      v5 = (const char *)&aOff;
    Interface_ConsolePrint("Debug Text -> %s", v5);
  }
  return 1;
}
