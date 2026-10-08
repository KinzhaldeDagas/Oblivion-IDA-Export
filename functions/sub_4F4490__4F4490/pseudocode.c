char __cdecl sub_4F4490(int a1, char a2, int a3, double *a4)
{
  double v4; // st7
  float v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a1 )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 0xF4))(a1, v6); /*0x4f44a7*/
    switch ( a2 ) /*0x4f44b7*/
    {
      case 'X': /*0x4f44b7*/
        v4 = v6[0]; /*0x4f44cf*/
        break;
      case 'Y': /*0x4f44b7*/
        v4 = v6[1]; /*0x4f44c9*/
        break;
      case 'Z': /*0x4f44b7*/
        v4 = v6[2]; /*0x4f44c3*/
        break;
      default:
        goto LABEL_9; /*0x4f44c1*/
    }
    *a4 = v4; /*0x4f44d2*/
LABEL_9:
    if ( MEMORY[0xB361AC] )
      Interface_ConsolePrint("GetStartingPos: %c >> %0.2f", a2, *a4);
  }
  return 1; /*0x4f44f5*/
}
