char sub_501440()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = BYTE1(qword_B3BB2C[0x9D]) == 0; /*0x501447*/
  v1 = MEMORY[0xB361AC] == 0; /*0x50144a*/
  BYTE1(qword_B3BB2C[0x9D]) = v0; /*0x501451*/
  if ( !v1 ) /*0x501456*/
  {
    v1 = !v0; /*0x501458*/
    v2 = "On"; /*0x50145a*/
    if ( v1 ) /*0x50145f*/
      v2 = (const char *)&aOff; /*0x501461*/
    Interface_ConsolePrint("AI Processing for actors in Low is  %s", v2); /*0x50146c*/
  }
  return 1; /*0x501476*/
}
