char sub_507A00()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B1206C == 0;
  byte_B1206C = v0;
  v1 = !v0;
  v2 = "Enabled.";
  if ( v1 )
    v2 = "Disabled.";
  Interface_ConsolePrint("NPC Facial Emotions %s", v2);
  return 1;
}
