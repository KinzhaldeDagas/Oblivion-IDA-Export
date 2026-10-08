char __cdecl GetAngle_Eval(float *a1, char a2, int a3, double *a4)
{
  double v4; // st7

  if ( a1 )
  {
    switch ( a2 ) /*0x4f88bd*/
    {
      case 'X': /*0x4f88bd*/
        v4 = a1[8]; /*0x4f88d5*/
        break;
      case 'Y': /*0x4f88bd*/
        v4 = a1[9]; /*0x4f88cf*/
        break;
      case 'Z': /*0x4f88bd*/
        v4 = a1[0xA]; /*0x4f88c9*/
        break;
      default:
        goto LABEL_9; /*0x4f88c7*/
    }
    *a4 = v4 * dbl_A30DC8; /*0x4f88de*/
LABEL_9:
    if ( MEMORY[0xB361AC] )
      Interface_ConsolePrint("GetAngle: %c >> %0.2f", a2, *a4);
  }
  return 1; /*0x4f8901*/
}
