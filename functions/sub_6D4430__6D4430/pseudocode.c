int __thiscall sub_6D4430(_DWORD *this, bool *a2)
{
  int result; // eax

  result = *(this + 0xC);
  *a2 = (*(_BYTE *)(result + 0x18) & 1) == 0;
  return result;
}
