char __usercall sub_5013F0@<al>(int a1@<edi>)
{
  char v1; // al
  bool v2; // zf
  const char *v3; // eax

  v1 = byte_B3BDA0 == 0;
  v2 = IsConsoleMode == 0;
  byte_B3BDA0 = v1;
  if ( !v2 )
  {
    v2 = v1 == 0;
    v3 = (const char *)&aOn_0;
    if ( v2 )
      v3 = (const char *)&aOff;
    Interface_ConsolePrint("AI Processing for actors in high is  %s", v3);
    v1 = byte_B3BDA0;
  }
  if ( !v1 )
    sub_675880((int)&ActorProcessManager_ptr, a1);
  return 1;
}
