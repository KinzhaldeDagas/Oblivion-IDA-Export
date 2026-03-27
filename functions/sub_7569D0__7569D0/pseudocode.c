int __thiscall sub_7569D0(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11);
  *(float *)(result + 0x18) = a2;
  return result;
}
