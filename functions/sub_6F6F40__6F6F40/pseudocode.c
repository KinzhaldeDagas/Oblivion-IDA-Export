_DWORD *__thiscall sub_6F6F40(_DWORD *this)
{
  _DWORD *result; // eax

  *(this + 8) = this + 6;
  *(this + 9) = this + 7;
  *(this + 4) = this + 2;
  *(this + 0xC) = this + 0xA;
  *(this + 5) = this + 3;
  *(this + 0xD) = this + 0xB;
  *(this + 3) = 0;
  *(_DWORD *)*(this + 9) = 0;
  *(_DWORD *)*(this + 0xD) = 0;
  *(_DWORD *)*(this + 4) = 0;
  *(_DWORD *)*(this + 8) = 0;
  result = (_DWORD *)*(this + 0xC);
  *result = 0;
  return result;
}
