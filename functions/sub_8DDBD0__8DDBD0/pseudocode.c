int __thiscall sub_8DDBD0(int *this, int a2, int *a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int result; // eax

  v3 = *a3;
  if ( *(this + 2) > *a3 )
    v3 = *(this + 2);
  *(this + 2) = v3;
  if ( v3 <= a3[1] )
    v3 = a3[1];
  v4 = *(this + 3);
  *(this + 2) = v3;
  *(this + 3) = a3[1] + v4;
  v5 = *(this + 6);
  *(this + 4) += a3[2];
  result = a3[3] + v5;
  *(this + 6) = result;
  return result;
}
