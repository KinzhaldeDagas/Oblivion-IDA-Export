signed int __thiscall sub_7B20E0(_DWORD *this, signed int a2)
{
  signed int result; // eax

  result = a2;
  if ( a2 )
  {
    if ( a2 > 0 && a2 <= 3 )
      *(this + 0x29) = 1;
  }
  else
  {
    *(this + 0x29) = 3;
  }
  return result;
}
