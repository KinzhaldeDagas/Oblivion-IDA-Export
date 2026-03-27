int __thiscall sub_956550(unsigned int *this, char a2, char a3)
{
  int v3; // edx
  int result; // eax

  *(_BYTE *)(*(this + 4) - *(this + 3) + *(this + 2) - 1) = a2 + a3;
  v3 = *(this + 2);
  result = *(this + 3) + 1;
  *(this + 3) = result;
  if ( result >= v3 )
    return sub_9564D0(this);
  return result;
}
