int __thiscall sub_756AD0(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11);
  *(float *)(result + 0x24) = a2;
  return result;
}
