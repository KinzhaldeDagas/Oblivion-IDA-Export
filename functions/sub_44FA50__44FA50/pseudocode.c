int __thiscall sub_44FA50(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *(this + 0xFE) = *a2;
  result = a2[1];
  *(this + 0xFF) = result;
  return result;
}
