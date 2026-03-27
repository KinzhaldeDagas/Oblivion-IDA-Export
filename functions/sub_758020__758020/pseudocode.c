int __thiscall sub_758020(_DWORD *this, float *a2)
{
  int result; // eax

  result = *(this + 0x11);
  *a2 = *(float *)(result + 0x40);
  return result;
}
