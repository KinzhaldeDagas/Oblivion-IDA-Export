char __cdecl sub_4F6010(int a1, int a2, int a3, double *a4)
{
  double v4; // st7

  if ( a2 && *(_BYTE *)(a2 + 0x28) && *(float *)(a2 + 0x3C) > 0.0 ) /*0x4f6028*/
    v4 = *(float *)(a2 + 0x3C); /*0x4f602a*/
  else
    v4 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x4f602f*/
  *a4 = v4; /*0x4f6039*/
  if ( MEMORY[0xB361AC] ) /*0x4f603b*/
    Interface_ConsolePrint("GetSecondsPassed >> %0.2f", *a4); /*0x4f6051*/
  return 1; /*0x4f605b*/
}
