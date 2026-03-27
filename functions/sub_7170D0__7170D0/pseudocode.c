int sub_7170D0()
{
  int result; // eax

  byte_B3FCCC = 1;
  _EAX = 0x80000000;
  __asm { cpuid }
  dword_B3FCD0 = _EAX;
  _EAX = dword_B3FCD0 & 0x80000000;
  if ( dword_B3FCD0 >= 0 )
    goto LABEL_4;
  __asm { cpuid }
  dword_B3FCD0 = result;
  if ( dword_B3FCD0 >= 0 )
  {
LABEL_4:
    _EAX = 1;
    __asm { cpuid }
    dword_B3FCD0 = _EDX;
    if ( ((unsigned int)&loc_800000 & dword_B3FCD0) != 0 )
    {
      if ( (dword_B3FCD0 & 0x8000) != 0 )
      {
        dword_B3FCC8 = 4;
        if ( (dword_B3FCD0 & 0x2000000) != 0 )
          dword_B3FCC8 = 5;
      }
      else
      {
        dword_B3FCC8 = 2;
      }
    }
    else
    {
      result = dword_B3FCD0 & 0x8000;
      if ( result )
        dword_B3FCC8 = 3;
      else
        dword_B3FCC8 = 1;
    }
  }
  else
  {
    dword_B3FCC8 = 6;
  }
  return result;
}
