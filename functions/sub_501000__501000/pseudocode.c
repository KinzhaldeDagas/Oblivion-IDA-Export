char sub_501000()
{
  bool v4; // zf
  const char *v5; // eax

  ToggleDebugText(); /*0x501000*/
  if ( MEMORY[0xB361AC] ) /*0x501005*/
  {
    v4 = !GetInterfaceSingleton0x50(); /*0x501013*/
    v5 = "On"; /*0x501015*/
    if ( v4 ) /*0x50101a*/
      v5 = (const char *)&aOff; /*0x50101c*/
    Interface_ConsolePrint("Debug Text -> %s", v5); /*0x501027*/
  }
  return 1; /*0x501031*/
}
