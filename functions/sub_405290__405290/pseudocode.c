double __cdecl sub_405290(float a1, char a2)
{
  if ( LOBYTE(a1) ) /*0x405295*/
  {
    if ( InterfaceManager_IsMenuMode() ) /*0x405297*/
      return 0.0; /*0x4052a7*/
    else
      return *(float *)&MEMORY[0xB33E90][0xC]; /*0x4052a0*/
  }
  else if ( a2 ) /*0x4052af*/
  {
    return (float)(TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) * 60.0 * 60.0); /*0x4052c9*/
  }
  else
  {
    return (double)*(unsigned int *)&MEMORY[0xB33E90][0x10]; /*0x4052d3*/
  }
}
