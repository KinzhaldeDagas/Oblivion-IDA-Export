int __thiscall sub_757F20(_DWORD *this, float *a2)
{
  int result; // eax

  result = *(this + 0x11);
  *a2 = *(float *)(result + 0x48);
  return result;
}
