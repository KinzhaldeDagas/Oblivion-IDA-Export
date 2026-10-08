char __cdecl sub_4F4500(int a1, char a2, int a3, double *a4)
{
  double v4; // st7
  float v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a1 )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 0xF0))(a1, v6); /*0x4f4517*/
    switch ( a2 ) /*0x4f4527*/
    {
      case 'X': /*0x4f4527*/
        v4 = v6[0]; /*0x4f453f*/
        break;
      case 'Y': /*0x4f4527*/
        v4 = v6[1]; /*0x4f4539*/
        break;
      case 'Z': /*0x4f4527*/
        v4 = v6[2]; /*0x4f4533*/
        break;
      default:
        goto LABEL_9; /*0x4f4531*/
    }
    *a4 = v4 * dbl_A30DC8; /*0x4f4548*/
LABEL_9:
    if ( MEMORY[0xB361AC] )
      Interface_ConsolePrint("GetStartingAngle: %c >> %0.2f", a2, *a4);
  }
  return 1; /*0x4f456b*/
}
