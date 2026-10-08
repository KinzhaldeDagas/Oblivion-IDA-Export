char sub_507BA0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = unk_B36508 == 0; /*0x507ba7*/
  unk_B36508 = v0; /*0x507baa*/
  v1 = !v0; /*0x507baf*/
  v2 = "shown."; /*0x507bb1*/
  if ( v1 ) /*0x507bb6*/
    v2 = "hidden."; /*0x507bb8*/
  Interface_ConsolePrint("Conversation stats %s", v2); /*0x507bc3*/
  return 1; /*0x507bcd*/
}
