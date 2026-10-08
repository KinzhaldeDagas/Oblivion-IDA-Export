char sub_500860()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = MEMORY[0xB42E97] == 0; /*0x500867*/
  MEMORY[0xB42E97] = v0; /*0x50086a*/
  v1 = !v0; /*0x50086f*/
  v2 = "on"; /*0x500871*/
  if ( v1 ) /*0x500876*/
    v2 = aOff_0; /*0x500878*/
  Interface_ConsolePrint("Occlusion Query : %s", v2);
  return 1; /*0x50088d*/
}
