unsigned int __thiscall sub_4D6F00(_DWORD *this, char a2)
{
  int v2; // eax
  unsigned int result; // eax

  v2 = *(this + 2);
  if ( a2 )
    result = v2 | 0x100;
  else
    result = v2 & 0xFFFFFEFF;
  *(this + 2) = result;
  return result;
}
