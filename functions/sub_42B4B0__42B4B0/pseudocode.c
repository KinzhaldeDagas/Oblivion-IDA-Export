int __thiscall sub_42B4B0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  *this = *a2;
  *(this + 1) = a2[1];
  *(this + 2) = a2[2];
  *(this + 3) = a2[3];
  v2 = this + 4;
  *v2 = a2[4];
  v2[1] = a2[5];
  result = a2[6];
  v2[2] = result;
  return result;
}
