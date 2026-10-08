char sub_500F10()
{
  char v4; // al
  const char *v5; // eax

  v4 = byte_B09F58 ^ 1; /*0x500f17*/
  byte_B09F58 = v4; /*0x500f19*/
  sub_5797E0(v4); /*0x500f1f*/
  if ( MEMORY[0xB361AC] ) /*0x500f27*/
  {
    v5 = "On"; /*0x500f37*/
    if ( !byte_B09F58 ) /*0x500f30*/
      v5 = (const char *)&aOff; /*0x500f3e*/
    Interface_ConsolePrint("Menus -> %s", v5); /*0x500f49*/
  }
  return 1; /*0x500f53*/
}
