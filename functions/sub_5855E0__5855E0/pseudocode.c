int __thiscall sub_5855E0(int *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = a2 + *(this + 0xB);
  v3 = *(this + 4);
  if ( result > v3 )
    result = *(this + 4);
  if ( result - dword_B1398C <= 0 )
    result = dword_B1398C;
  if ( result <= v3 )
    *(this + 0xB) = result;
  else
    *(this + 0xB) = v3;
  return result;
}
