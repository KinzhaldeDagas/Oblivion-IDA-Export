int __thiscall sub_4BEF50(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *(this + 5) = *a2;
  *(this + 6) = a2[1];
  result = a2[2];
  *(this + 7) = result;
  return result;
}
