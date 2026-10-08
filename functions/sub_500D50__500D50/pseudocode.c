char sub_500D50()
{
  char v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = sub_4F9FA0(); /*0x500d50*/
  sub_4F9F90(v0 == 0); /*0x500d5b*/
  v1 = sub_4F9FA0() == 0; /*0x500d68*/
  v2 = "enabled."; /*0x500d6a*/
  if ( v1 ) /*0x500d6f*/
    v2 = "disabled."; /*0x500d71*/
  Interface_ConsolePrint("Script processing %s", v2); /*0x500d7c*/
  return 1; /*0x500d86*/
}
