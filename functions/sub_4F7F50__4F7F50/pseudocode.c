char __cdecl sub_4F7F50(int a1, int a2, int a3, double *a4)
{
  Sky *sky; // eax
  double windSpeed; // st7

  *a4 = 0.0; /*0x4f7f56*/
  if ( !MEMORY[0xB333A0] ) /*0x4f7f58*/
    return 0; /*0x4f7f58*/
  sky = MEMORY[0xB333A0]->sky; /*0x4f7f61*/
  if ( !sky ) /*0x4f7f66*/
    return 0; /*0x4f7f94*/
  windSpeed = sky->windSpeed; /*0x4f7f68*/
  *a4 = windSpeed; /*0x4f7f6e*/
  if ( MEMORY[0xB361AC] ) /*0x4f7f70*/
    Interface_ConsolePrint("GetWindSpeed >> %0.2f", windSpeed); /*0x4f7f84*/
  return 1; /*0x4f7f8e*/
}
