_DWORD *__thiscall sub_943890(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *(this + 4) = 5;
  *(this + 3) = 5;
  *this = 0x3DCCCCCD;
  *(this + 1) = 0x3E8;
  *(this + 2) = 0xA;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      *this = 0x3D4CCCCD;
      *(this + 2) = 0x1E;
    }
  }
  else
  {
    *this = 0x3E4CCCCD;
  }
  return result;
}
