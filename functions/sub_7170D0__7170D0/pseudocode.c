int sub_7170D0()
{
  int result; // eax

  unk_B3FCCC = 1; /*0x717103*/
  _EAX = 0x80000000; /*0x717111*/
  __asm { cpuid } /*0x717116*/
  unk_B3FCD0 = _EAX; /*0x717118*/
  _EAX = unk_B3FCD0 & 0x80000000; /*0x717151*/
  if ( unk_B3FCD0 >= 0 ) /*0x717156*/
    goto LABEL_4; /*0x717156*/
  __asm { cpuid } /*0x717164*/
  unk_B3FCD0 = result; /*0x717166*/
  if ( unk_B3FCD0 >= 0 ) /*0x71719a*/
  {
LABEL_4:
    _EAX = 1; /*0x7171b2*/
    __asm { cpuid } /*0x7171b7*/
    unk_B3FCD0 = _EDX; /*0x7171b9*/
    if ( ((unsigned int)&loc_800000 & unk_B3FCD0) != 0 ) /*0x7171f7*/
    {
      if ( (unk_B3FCD0 & 0x8000) != 0 ) /*0x71722d*/
      {
        unk_B3FCC8 = 4; /*0x71723d*/
        if ( (unk_B3FCD0 & 0x2000000) != 0 ) /*0x717253*/
          unk_B3FCC8 = 5; /*0x717257*/
      }
      else
      {
        unk_B3FCC8 = 2; /*0x71722f*/
      }
    }
    else
    {
      result = unk_B3FCD0 & 0x8000; /*0x7171fe*/
      if ( result ) /*0x717203*/
        unk_B3FCC8 = 3; /*0x717213*/
      else
        unk_B3FCC8 = 1; /*0x717205*/
    }
  }
  else
  {
    unk_B3FCC8 = 6; /*0x71719c*/
  }
  return result; /*0x717261*/
}
