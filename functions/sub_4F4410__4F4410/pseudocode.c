char __cdecl sub_4F4410(int a1, char a2, int a3, double *a4)
{
  float *v7; // eax
  double v8; // st5

  if ( a1 )
  {
    v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1);
    switch ( a2 )
    {
      case 'X':
        v8 = *v7;
        break;
      case 'Y':
        v8 = v7[1];
        break;
      case 'Z':
        v8 = v7[2];
        break;
      default:
        goto LABEL_9;
    }
    *a4 = v8;
LABEL_9:
    if ( IsConsoleMode )
      Interface_ConsolePrint("GetPos: %c >> %0.2f", a2, *a4);
  }
  return 1;
}
