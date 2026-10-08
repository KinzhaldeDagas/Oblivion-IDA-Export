char sub_500E00()
{
  bool v4; // zf
  const char *v5; // eax

  sub_5793B0(); /*0x500e00*/
  v4 = sub_579400() == 0; /*0x500e0a*/
  v5 = "shown."; /*0x500e0c*/
  if ( v4 ) /*0x500e11*/
    v5 = "hidden."; /*0x500e13*/
  Interface_ConsolePrint("Toggle Full Help %s", v5); /*0x500e1e*/
  return 1; /*0x500e28*/
}
