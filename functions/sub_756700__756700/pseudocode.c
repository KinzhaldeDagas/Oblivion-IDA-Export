int __thiscall sub_756700(_DWORD *this, _BYTE *a2)
{
  int result; // eax

  result = *(this + 0x11);
  *a2 = *(_BYTE *)(result + 0x14);
  return result;
}
