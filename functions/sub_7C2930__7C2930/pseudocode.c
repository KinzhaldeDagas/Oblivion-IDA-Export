signed int __thiscall sub_7C2930(_DWORD *this, signed int a2)
{
  signed int result; // eax

  result = a2;
  if ( a2 )
  {
    if ( a2 > 0 && a2 <= 3 )
      *(this + 0x2A) = 1;
  }
  else
  {
    *(this + 0x2A) = 3;
  }
  return result;
}
