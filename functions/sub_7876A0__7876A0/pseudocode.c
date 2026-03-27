int __thiscall sub_7876A0(_DWORD *this)
{
  int result; // eax

  result = *(this + 1);
  if ( result )
    return (*(this + 2) - result) / 0x54;
  return result;
}
