char __thiscall sub_4A4FE0(_DWORD *this, unsigned int a2)
{
  if ( a2 > 2 || a2 == *(this + 2) )
    return 0;
  *(this + 2) = a2;
  return 1;
}
