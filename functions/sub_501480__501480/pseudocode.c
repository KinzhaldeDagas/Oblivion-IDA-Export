char sub_501480()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = HIBYTE(qword_B3BB2C[0x9D]) == 0; /*0x501487*/
  v1 = MEMORY[0xB361AC] == 0; /*0x50148a*/
  HIBYTE(qword_B3BB2C[0x9D]) = v0; /*0x501491*/
  if ( !v1 ) /*0x501496*/
  {
    v1 = !v0; /*0x501498*/
    v2 = "On"; /*0x50149a*/
    if ( v1 ) /*0x50149f*/
      v2 = (const char *)&aOff; /*0x5014a1*/
    Interface_ConsolePrint("AI Processing for actors in Middle Low is  %s", v2); /*0x5014ac*/
  }
  return 1; /*0x5014b6*/
}
