int __thiscall sub_7876C0(_DWORD *this)
{
  int result; // eax

  result = *(this + 1);
  if ( result )
    return (*(this + 2) - result) / 0x1C;
  return result;
}
