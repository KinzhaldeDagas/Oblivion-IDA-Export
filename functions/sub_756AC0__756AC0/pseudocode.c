int __thiscall sub_756AC0(_DWORD *this, float *a2)
{
  int result; // eax

  result = *(this + 0x11);
  *a2 = *(float *)(result + 0x24);
  return result;
}
