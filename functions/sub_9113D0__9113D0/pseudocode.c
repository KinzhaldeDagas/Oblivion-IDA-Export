float *__thiscall sub_9113D0(float *this, int a2)
{
  *((_WORD *)this + 3) = 1;
  *(_DWORD *)this = &off_A9CCB8;
  if ( a2 )
  {
    if ( !*((_BYTE *)this + 0xC) )
    {
      *((_BYTE *)this + 0xC) = 1;
      *(this + 0x1C) = sub_8A2AF0(*(this + 0x1C));
      *(this + 0x1E) = sub_910FC0(*(this + 0x1E));
      *(this + 0x1D) = sub_910FC0(*(this + 0x1D));
    }
  }
  return this;
}
