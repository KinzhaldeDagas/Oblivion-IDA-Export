char sub_5010E0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = BYTE1(qword_B3BB2C[0x9B]) == 0; /*0x5010e7*/
  v1 = MEMORY[0xB361AC] == 0; /*0x5010ea*/
  BYTE1(qword_B3BB2C[0x9B]) = v0; /*0x5010f1*/
  if ( !v1 ) /*0x5010f6*/
  {
    v1 = !v0; /*0x5010f8*/
    v2 = "On"; /*0x5010fa*/
    if ( v1 ) /*0x5010ff*/
      v2 = (const char *)&aOff; /*0x501101*/
    Interface_ConsolePrint("AI Detection is  %s", v2); /*0x50110c*/
  }
  return 1; /*0x501116*/
}
