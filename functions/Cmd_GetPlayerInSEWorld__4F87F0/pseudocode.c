char __cdecl Cmd_GetPlayerInSEWorld(int a1, int a2, int a3, double *a4)
{
  UInt8 *p_isInSEWorld; // eax
  bool v5; // zf
  const char *v6; // eax

  *a4 = 0.0; /*0x4f87f6*/
  p_isInSEWorld = &reference->isInSEWorld; /*0x4f87fd*/
  if ( *p_isInSEWorld ) /*0x4f8802*/
    *a4 = 1.0; /*0x4f8809*/
  if ( MEMORY[0xB361AC] ) /*0x4f880b*/
  {
    v5 = *p_isInSEWorld == 0; /*0x4f8814*/
    v6 = "is"; /*0x4f8817*/
    if ( v5 ) /*0x4f881c*/
      v6 = "is not"; /*0x4f881e*/
    Interface_ConsolePrint("The player %s in the SE world", v6); /*0x4f8829*/
  }
  return 1; /*0x4f8833*/
}
