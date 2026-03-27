int __thiscall sub_54F6A0(_DWORD *this)
{
  int result; // eax

  result = *(this + 1);
  if ( result )
    return (*(this + 2) - result) / 0x34;
  return result;
}
