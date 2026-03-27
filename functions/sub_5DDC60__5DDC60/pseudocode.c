int __thiscall sub_5DDC60(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( (unsigned int)(a2 - 1) <= 0x2F )
  {
    result = a2 - 1;
    if ( a2 == 0x18 || a2 == 0x19 )
    {
      result = *(this + result + 0xA);
      *(this + 0x3A) = result;
    }
    else if ( a2 == 7 )
    {
      *(this + 0x3A) = 0;
    }
  }
  return result;
}
