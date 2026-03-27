char __cdecl sub_4F4500(int a1, char a2, int a3, double *a4)
{
  double v7; // st5
  float v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a1 )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 0xF0))(a1, v9);
    switch ( a2 )
    {
      case 'X':
        v7 = v9[0];
        break;
      case 'Y':
        v7 = v9[1];
        break;
      case 'Z':
        v7 = v9[2];
        break;
      default:
        goto LABEL_9;
    }
    *a4 = v7 * dbl_A30DC8;
LABEL_9:
    if ( IsConsoleMode )
      Interface_ConsolePrint("GetStartingAngle: %c >> %0.2f", a2, *a4);
  }
  return 1;
}
