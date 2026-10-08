// Console Lite Brite toggle for debug flag B42E84+2. This is the same direct byte tested by leaf setup; the decompiler MEMORY[B42E84][2] form is not a pointer dereference.
char OB_ToggleLiteBriteDebugMode_010201A0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = OB_ShaderPassControl_010201A0[2] == 0; /*0x5081b7*/
  v1 = MEMORY[0xB361AC] == 0; /*0x5081ba*/
  OB_ShaderPassControl_010201A0[2] = v0; /*0x5081c1*/
  if ( !v1 ) /*0x5081c6*/
  {
    v1 = !v0; /*0x5081c8*/
    v2 = &aOn_0; /*0x5081ca*/
    if ( v1 ) /*0x5081cf*/
      v2 = (const char *)&aOff; /*0x5081d1*/
    Interface_ConsolePrint("Lite Brite -> %s", v2); /*0x5081dc*/
  }
  return 1; /*0x5081e6*/
}
