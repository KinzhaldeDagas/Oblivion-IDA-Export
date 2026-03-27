char __thiscall sub_54E560(_DWORD *this, int a2)
{
  if ( a2 == *(this + 1) )
    return 0;
  *(this + 1) = a2;
  return 1;
}
