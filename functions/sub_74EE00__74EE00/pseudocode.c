int __thiscall sub_74EE00(float *this, int a2, _DWORD **a3)
{
  int result; // eax

  sub_752C40(this, a2, a3);
  *(float *)(a2 + 0x18) = *(this + 6);
  *(float *)(a2 + 0x1C) = *(this + 7);
  *(float *)(a2 + 0x20) = *(this + 8);
  *(float *)(a2 + 0x24) = *(this + 9);
  *(float *)(a2 + 0x28) = *(this + 0xA);
  *(float *)(a2 + 0x2C) = *(this + 0xB);
  *(float *)(a2 + 0x30) = *(this + 0xC);
  *(float *)(a2 + 0x34) = *(this + 0xD);
  result = *((_DWORD *)this + 0xE);
  *(_DWORD *)(a2 + 0x38) = result;
  *(float *)(a2 + 0x3C) = *(this + 0xF);
  *(float *)(a2 + 0x40) = *(this + 0x10);
  *(float *)(a2 + 0x48) = *(this + 0x12);
  *(float *)(a2 + 0x4C) = *(this + 0x13);
  *(float *)(a2 + 0x44) = *(this + 0x11);
  return result;
}
