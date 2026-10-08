errno_t __cdecl _controlfp_s(unsigned int *CurrentState, unsigned int NewValue, unsigned int Mask)
{
  int v3; // ebx
  unsigned int v5; // [esp-4h] [ebp-8h]

  if ( (Mask & 0xFFF7FFFF & NewValue & 0xFCF0FCE0) != 0 ) /*0x99e266*/
  {
    if ( CurrentState ) /*0x99e270*/
      *CurrentState = _control87(0, 0); /*0x99e27b*/
    *_errno() = 0x16; /*0x99e28a*/
    _invalid_parameter(v3, 0x16, 0); /*0x99e28c*/
    return 0x16; /*0x99e294*/
  }
  else
  {
    v5 = Mask & 0xFFF7FFFF; /*0x99e29e*/
    if ( CurrentState ) /*0x99e2a2*/
      *CurrentState = _control87(NewValue, v5); /*0x99e2a9*/
    else
      _control87(NewValue, v5); /*0x99e2ad*/
    return 0; /*0x99e2b4*/
  }
}
