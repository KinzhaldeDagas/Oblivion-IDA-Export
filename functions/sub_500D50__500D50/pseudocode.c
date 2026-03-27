char sub_500D50()
{
  char v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = sub_4F9FA0();
  sub_4F9F90(v0 == 0);
  v1 = sub_4F9FA0() == 0;
  v2 = "enabled.";
  if ( v1 )
    v2 = "disabled.";
  Interface_ConsolePrint("Script processing %s", v2);
  return 1;
}
