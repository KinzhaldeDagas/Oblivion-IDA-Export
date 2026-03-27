int __thiscall sub_9530B0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // esi
  int v5; // edx

  result = a3;
  v4 = *(this + 3);
  v5 = a3 + *(this + 2);
  *(this + 2) = v5;
  if ( v5 <= v4 )
    *(this + 3) = v4;
  else
    *(this + 3) = v5;
  return result;
}
