int __thiscall sub_757160(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11);
  *(float *)(result + 0x2C) = a2;
  return result;
}
