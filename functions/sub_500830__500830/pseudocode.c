char sub_500830()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B42CDA == 0;
  byte_B42CDA = v0;
  v1 = !v0;
  v2 = "frozen";
  if ( v1 )
    v2 = "active";
  Interface_ConsolePrint("Renderer Accumulation : %s", v2);
  return 1;
}
