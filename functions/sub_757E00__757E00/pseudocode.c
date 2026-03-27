int __thiscall sub_757E00(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11);
  *(float *)(result + 0x28) = a2;
  return result;
}
