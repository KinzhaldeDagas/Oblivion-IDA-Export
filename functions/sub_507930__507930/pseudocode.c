char sub_507930()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = unk_B3B908 == 0; /*0x507937*/
  unk_B3B908 = v0; /*0x50793a*/
  v1 = !v0; /*0x50793f*/
  v2 = "shown."; /*0x507941*/
  if ( v1 ) /*0x507946*/
    v2 = "hidden."; /*0x507948*/
  Interface_ConsolePrint("Verbose messages %s", v2); /*0x507953*/
  return 1; /*0x50795d*/
}
