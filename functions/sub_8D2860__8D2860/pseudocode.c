int __thiscall sub_8D2860(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *this = *a2;
  *(this + 5) = a2[5];
  *(this + 0xA) = a2[0xA];
  *(this + 3) = 0;
  *(this + 7) = 0;
  *(this + 0xB) = 0;
  *(this + 1) = a2[4];
  *(this + 4) = a2[1];
  *(this + 2) = a2[8];
  *(this + 8) = a2[2];
  *(this + 6) = a2[9];
  result = a2[6];
  *(this + 9) = result;
  return result;
}
