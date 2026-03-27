BOOL __thiscall sub_72FD80(float *this, int a2)
{
  return *(float *)(a2 + 8) != *(this + 2)
      || *(float *)a2 != *this
      || *(float *)(a2 + 4) != *(this + 1)
      || sub_4B9D10(this + 3, (float *)(a2 + 0xC))
      || *((_DWORD *)this + 0x11) != *(_DWORD *)(a2 + 0x44)
      || sub_4B9D10(this + 5, (float *)(a2 + 0x14));
}
