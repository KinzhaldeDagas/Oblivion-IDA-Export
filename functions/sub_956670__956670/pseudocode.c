int __thiscall sub_956670(unsigned int *this, char a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int result; // eax

  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a3;
  v4 = *(this + 3);
  v5 = *(this + 2);
  *(this + 3) = v4 + 1;
  if ( v4 + 1 >= v5 )
    sub_9564D0(this);
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = BYTE1(a3);
  v6 = *(this + 2);
  v7 = *(this + 3) + 1;
  *(this + 3) = v7;
  if ( v7 >= v6 )
    sub_9564D0(this);
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = BYTE2(a3);
  v8 = *(this + 2);
  v9 = *(this + 3) + 1;
  *(this + 3) = v9;
  if ( v9 >= v8 )
    sub_9564D0(this);
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a2;
  v10 = *(this + 2);
  result = *(this + 3) + 1;
  *(this + 3) = result;
  if ( result >= v10 )
    return sub_9564D0(this);
  return result;
}
