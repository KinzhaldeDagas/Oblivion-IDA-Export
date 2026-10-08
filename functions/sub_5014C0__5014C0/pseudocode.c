char sub_5014C0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = BYTE2(qword_B3BB2C[0x9D]) == 0; /*0x5014c7*/
  v1 = MEMORY[0xB361AC] == 0; /*0x5014ca*/
  BYTE2(qword_B3BB2C[0x9D]) = v0; /*0x5014d1*/
  if ( !v1 ) /*0x5014d6*/
  {
    v1 = !v0; /*0x5014d8*/
    v2 = "On"; /*0x5014da*/
    if ( v1 ) /*0x5014df*/
      v2 = (const char *)&aOff; /*0x5014e1*/
    Interface_ConsolePrint("AI Processing for actors in Middle High is  %s", v2); /*0x5014ec*/
  }
  return 1; /*0x5014f6*/
}
