char sub_506990()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B1437C == 0; /*0x506997*/
  v1 = MEMORY[0xB361AC] == 0; /*0x50699a*/
  byte_B1437C = v0; /*0x5069a1*/
  if ( !v1 ) /*0x5069a6*/
  {
    v1 = !v0; /*0x5069a8*/
    v2 = "DISABLED"; /*0x5069aa*/
    if ( !v1 ) /*0x5069af*/
      v2 = "ENABLED"; /*0x5069b1*/
    Interface_ConsolePrint("Fog of war - %s.", v2); /*0x5069bc*/
  }
  return 1; /*0x5069c6*/
}
