int __thiscall sub_956730(unsigned int *this, int a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int result; // eax

  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a2;
  v3 = *(this + 3);
  v4 = *(this + 2);
  *(this + 3) = v3 + 1;
  if ( v3 + 1 >= v4 )
    sub_9564D0(this);
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = BYTE1(a2);
  v5 = *(this + 2);
  v6 = *(this + 3) + 1;
  *(this + 3) = v6;
  if ( v6 >= v5 )
    sub_9564D0(this);
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = BYTE2(a2);
  v7 = *(this + 2);
  result = *(this + 3) + 1;
  *(this + 3) = result;
  if ( result >= v7 )
    return sub_9564D0(this);
  return result;
}
