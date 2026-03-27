char __cdecl GetAngle_Eval(float *a1, char a2, int a3, double *a4)
{
  double v7; // st5

  if ( a1 )
  {
    switch ( a2 )
    {
      case 'X':
        v7 = a1[8];
        break;
      case 'Y':
        v7 = a1[9];
        break;
      case 'Z':
        v7 = a1[0xA];
        break;
      default:
        goto LABEL_9;
    }
    *a4 = v7 * dbl_A30DC8;
LABEL_9:
    if ( IsConsoleMode )
      Interface_ConsolePrint("GetAngle: %c >> %0.2f", a2, *a4);
  }
  return 1;
}
