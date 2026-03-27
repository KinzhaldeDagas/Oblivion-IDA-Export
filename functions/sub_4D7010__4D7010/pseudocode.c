unsigned int __thiscall sub_4D7010(_DWORD *this, char a2)
{
  int v2; // eax
  unsigned int result; // eax

  v2 = *(this + 2);
  if ( a2 )
    result = v2 | 0x80000;
  else
    result = v2 & 0xFFF7FFFF;
  *(this + 2) = result;
  return result;
}
