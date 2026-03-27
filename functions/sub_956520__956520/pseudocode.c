int __thiscall sub_956520(unsigned int *this, char a2)
{
  int v2; // edx
  int result; // eax

  *(_BYTE *)(*(this + 4) - *(this + 3) + *(this + 2) - 1) = a2;
  v2 = *(this + 2);
  result = *(this + 3) + 1;
  *(this + 3) = result;
  if ( result >= v2 )
    return sub_9564D0(this);
  return result;
}
