int __thiscall sub_8DDB80(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // edx
  int result; // eax

  *(this + 3) -= a3[1];
  v3 = *(this + 6);
  *(this + 4) -= a3[2];
  result = a3[3];
  *(this + 6) = v3 - result;
  return result;
}
