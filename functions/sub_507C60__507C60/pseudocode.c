char sub_507C60()
{
  TES *v0; // ecx
  const char *v1; // eax

  v0 = MEMORY[0xB333A0]; /*0x507c60*/
  LOBYTE(dword_B361CC[0xC]) ^= 1u; /*0x507c66*/
  if ( !v0->currentInteriorCell ) /*0x507c6d*/
    sub_440530((int)v0, LOBYTE(dword_B361CC[0xC])); /*0x507c7b*/
  if ( MEMORY[0xB361AC] ) /*0x507c80*/
  {
    v1 = "On"; /*0x507c90*/
    if ( !LOBYTE(dword_B361CC[0xC]) ) /*0x507c89*/
      v1 = (const char *)&aOff; /*0x507c97*/
    Interface_ConsolePrint("Borders -> %s", v1); /*0x507ca2*/
  }
  return 1; /*0x507cac*/
}
