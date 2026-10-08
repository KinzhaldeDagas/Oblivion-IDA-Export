char __usercall sub_5013F0@<al>(double a1@<st2>, double a2@<st1>)
{
  char v3; // al
  bool v4; // zf
  const char *v5; // eax

  v3 = LOBYTE(qword_B3BB2C[0x9D]) == 0; /*0x5013f7*/
  v4 = MEMORY[0xB361AC] == 0; /*0x5013fa*/
  LOBYTE(qword_B3BB2C[0x9D]) = v3; /*0x501401*/
  if ( !v4 ) /*0x501406*/
  {
    v4 = v3 == 0; /*0x501408*/
    v5 = "On"; /*0x50140a*/
    if ( v4 ) /*0x50140f*/
      v5 = (const char *)&aOff; /*0x501411*/
    Interface_ConsolePrint("AI Processing for actors in high is  %s", v5); /*0x50141c*/
    v3 = LOBYTE(qword_B3BB2C[0x9D]); /*0x501421*/
  }
  if ( !v3 ) /*0x50142b*/
    sub_675880((int)&qword_B3BB2C[0x75], a1, a2); /*0x501432*/
  return 1; /*0x501439*/
}
