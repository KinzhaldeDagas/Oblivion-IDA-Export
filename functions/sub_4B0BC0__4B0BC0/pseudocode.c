int __thiscall sub_4B0BC0(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *(this + 0x3E) = *a2;
  *(this + 0x3F) = a2[1];
  result = a2[2];
  ++*(this + 0x2E);
  *(this + 0x40) = result;
  return result;
}
