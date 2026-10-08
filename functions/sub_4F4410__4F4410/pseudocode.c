char __cdecl sub_4F4410(int a1, char a2, int a3, double *a4)
{
  float *v4; // eax
  double v5; // st7

  if ( a1 )
  {
    v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1); /*0x4f4423*/
    switch ( a2 ) /*0x4f4446*/
    {
      case 'X': /*0x4f4446*/
        v5 = *v4; /*0x4f445e*/
        break;
      case 'Y': /*0x4f4446*/
        v5 = v4[1]; /*0x4f4458*/
        break;
      case 'Z': /*0x4f4446*/
        v5 = v4[2]; /*0x4f4452*/
        break;
      default:
        goto LABEL_9; /*0x4f4450*/
    }
    *a4 = v5; /*0x4f4461*/
LABEL_9:
    if ( MEMORY[0xB361AC] )
      Interface_ConsolePrint("GetPos: %c >> %0.2f", a2, *a4);
  }
  return 1; /*0x4f4484*/
}
