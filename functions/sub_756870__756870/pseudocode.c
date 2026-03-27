int __thiscall sub_756870(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11);
  *(float *)(result + 0x1C) = a2;
  return result;
}
