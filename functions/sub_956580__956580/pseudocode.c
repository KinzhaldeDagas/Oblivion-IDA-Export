int __thiscall sub_956580(unsigned int *this, char a2, char a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int result; // eax

  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a3;
  v4 = *(this + 3);
  v5 = *(this + 2);
  *(this + 3) = v4 + 1;
  if ( v4 + 1 >= v5 )
    sub_9564D0(this);
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a2;
  v6 = *(this + 2);
  result = *(this + 3) + 1;
  *(this + 3) = result;
  if ( result >= v6 )
    return sub_9564D0(this);
  return result;
}
