int __thiscall sub_4820F0(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *(this + 0x38) = *a2;
  *(this + 0x39) = a2[1];
  result = a2[2];
  ++*(this + 0x2E);
  *(this + 0x3A) = result;
  return result;
}
