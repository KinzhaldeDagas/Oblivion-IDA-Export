int __thiscall sub_783FE0(_DWORD *this)
{
  int result; // eax

  result = *(this + 1);
  if ( result )
    return (*(this + 2) - result) / 0x18;
  return result;
}
