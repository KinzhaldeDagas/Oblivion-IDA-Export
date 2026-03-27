int __thiscall sub_6F1140(_DWORD *this)
{
  int result; // eax

  result = *(this + 1);
  if ( result )
    return (*(this + 2) - result) / 0x2C;
  return result;
}
