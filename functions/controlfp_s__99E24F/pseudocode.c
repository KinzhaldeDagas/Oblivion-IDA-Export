errno_t __cdecl _controlfp_s(unsigned int *CurrentState, unsigned int NewValue, unsigned int Mask)
{
  int v3; // ebx
  unsigned int v5; // [esp-4h] [ebp-8h]

  if ( (Mask & 0xFFF7FFFF & NewValue & 0xFCF0FCE0) != 0 )
  {
    if ( CurrentState )
      *CurrentState = _control87(0, 0);
    *_errno() = 0x16;
    _invalid_parameter(v3, 0x16, 0);
    return 0x16;
  }
  else
  {
    v5 = Mask & 0xFFF7FFFF;
    if ( CurrentState )
      *CurrentState = _control87(NewValue, v5);
    else
      _control87(NewValue, v5);
    return 0;
  }
}
