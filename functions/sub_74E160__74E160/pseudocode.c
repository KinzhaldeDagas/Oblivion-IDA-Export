int __thiscall sub_74E160(float *this, int a2, _DWORD **a3)
{
  int result; // eax

  sub_752C40(this, a2, a3);
  *(float *)(a2 + 0x18) = *(this + 6);
  *(float *)(a2 + 0x1C) = *(this + 7);
  *(_BYTE *)(a2 + 0x35) = *((_BYTE *)this + 0x35);
  *(float *)(a2 + 0x20) = *(this + 8);
  *(float *)(a2 + 0x24) = *(this + 9);
  *(_BYTE *)(a2 + 0x34) = *((_BYTE *)this + 0x34);
  *(float *)(a2 + 0x28) = *(this + 0xA);
  *(float *)(a2 + 0x2C) = *(this + 0xB);
  result = *((_DWORD *)this + 0xC);
  *(_DWORD *)(a2 + 0x30) = result;
  return result;
}
