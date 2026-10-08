char sub_501500()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = LOBYTE(qword_B3BB2C[0x9E]) == 0; /*0x501507*/
  v1 = MEMORY[0xB361AC] == 0; /*0x50150a*/
  LOBYTE(qword_B3BB2C[0x9E]) = v0; /*0x501511*/
  if ( !v1 ) /*0x501516*/
  {
    v1 = !v0; /*0x501518*/
    v2 = "On"; /*0x50151a*/
    if ( v1 ) /*0x50151f*/
      v2 = (const char *)&aOff; /*0x501521*/
    Interface_ConsolePrint("AI Processing of Actor's Editor Schedules is  %s", v2); /*0x50152c*/
  }
  return 1; /*0x501536*/
}
