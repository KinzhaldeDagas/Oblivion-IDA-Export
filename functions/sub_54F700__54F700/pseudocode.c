int __thiscall sub_54F700(_DWORD *this)
{
  int result; // eax

  result = *(this + 1);
  if ( result )
    return (*(this + 2) - result) / 6;
  return result;
}
