int __thiscall sub_799EE0(_DWORD *this)
{
  int result; // eax

  result = *(this + 1);
  if ( result )
    return (*(this + 2) - result) / 0x38;
  return result;
}
