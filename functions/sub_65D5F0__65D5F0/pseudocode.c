unsigned int __thiscall sub_65D5F0(_BYTE *this, unsigned int a2)
{
  unsigned int result; // eax

  result = a2;
  if ( a2 <= 2 )
    ++*(this + a2 + 0x5B8);
  return result;
}
