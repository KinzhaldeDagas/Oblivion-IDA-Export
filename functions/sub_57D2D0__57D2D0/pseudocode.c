int __thiscall sub_57D2D0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    *(this + 5) = 0;
  }
  else
  {
    *(this + 5) = a2 - 1;
    return a2 - 1;
  }
  return result;
}
