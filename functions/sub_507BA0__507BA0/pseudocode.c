char sub_507BA0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B36508 == 0;
  byte_B36508 = v0;
  v1 = !v0;
  v2 = "shown.";
  if ( v1 )
    v2 = "hidden.";
  Interface_ConsolePrint("Conversation stats %s", v2);
  return 1;
}
