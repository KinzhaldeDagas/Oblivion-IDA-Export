int __thiscall sub_54F720(_DWORD *this)
{
  int result; // eax

  result = *(this + 1);
  if ( result )
    return (*(this + 2) - result) / 0x14;
  return result;
}
