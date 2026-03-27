int __thiscall sub_73EE50(unsigned __int16 *this, unsigned __int16 a2)
{
  int result; // eax

  result = *(this + 4);
  if ( a2 > (unsigned __int16)result )
    *(this + 0x24) = result;
  else
    *(this + 0x24) = a2;
  return result;
}
