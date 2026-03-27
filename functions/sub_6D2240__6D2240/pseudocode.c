int __thiscall sub_6D2240(_DWORD *this, float *a2)
{
  int result; // eax

  result = *(this + 0xC);
  *a2 = *(float *)(result + 0x50);
  return result;
}
