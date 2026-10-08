char sub_507BD0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = MEMORY[0xB3355C] == 0; /*0x507bd7*/
  MEMORY[0xB3355C] = v0; /*0x507bda*/
  v1 = !v0; /*0x507bdf*/
  v2 = "shown."; /*0x507be1*/
  if ( v1 ) /*0x507be6*/
    v2 = "hidden."; /*0x507be8*/
  Interface_ConsolePrint("Magic stats %s", v2); /*0x507bf3*/
  return 1; /*0x507bfd*/
}
