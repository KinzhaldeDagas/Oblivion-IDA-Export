int __thiscall sub_482120(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *(this + 0x3B) = *a2;
  *(this + 0x3C) = a2[1];
  result = a2[2];
  ++*(this + 0x2E);
  *(this + 0x3D) = result;
  return result;
}
