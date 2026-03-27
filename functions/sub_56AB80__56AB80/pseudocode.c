int __thiscall sub_56AB80(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *this = *a2;
  *(this + 1) = a2[1];
  *(this + 2) = a2[2];
  *(this + 3) = a2[3];
  *(this + 4) = a2[4];
  result = a2[5];
  *(this + 5) = result;
  return result;
}
