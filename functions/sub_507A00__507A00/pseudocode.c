char sub_507A00()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B1206C == 0; /*0x507a07*/
  byte_B1206C = v0; /*0x507a0a*/
  v1 = !v0; /*0x507a0f*/
  v2 = "Enabled."; /*0x507a11*/
  if ( v1 ) /*0x507a16*/
    v2 = "Disabled."; /*0x507a18*/
  Interface_ConsolePrint("NPC Facial Emotions %s", v2); /*0x507a23*/
  return 1; /*0x507a2d*/
}
