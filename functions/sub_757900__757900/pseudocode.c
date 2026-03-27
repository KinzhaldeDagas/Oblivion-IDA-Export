int __thiscall sub_757900(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11);
  *(float *)(result + 0x28) = a2;
  *(float *)(result + 0x2C) = a2 * a2;
  return result;
}
