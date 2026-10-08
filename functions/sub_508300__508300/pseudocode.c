char sub_508300()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B14B74 == 0; /*0x508307*/
  v1 = MEMORY[0xB361AC] == 0; /*0x50830a*/
  byte_B14B74 = v0; /*0x508311*/
  if ( !v1 ) /*0x508316*/
  {
    v1 = !v0; /*0x508318*/
    v2 = "On"; /*0x50831a*/
    if ( v1 ) /*0x50831f*/
      v2 = (const char *)&aOff; /*0x508321*/
    Interface_ConsolePrint("All Combat AI processing is %s", v2); /*0x50832c*/
  }
  return 1; /*0x508336*/
}
