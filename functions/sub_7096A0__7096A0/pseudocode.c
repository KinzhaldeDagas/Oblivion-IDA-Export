int __thiscall sub_7096A0(char **this, int a2, int a3)
{
  int result; // eax

  sub_700A60(this, (NiObjectNET *)a2, a3);
  *(_DWORD *)(a2 + 0x1C) = *(this + 7);
  *(_DWORD *)(a2 + 0x20) = *(this + 8);
  *(_DWORD *)(a2 + 0x24) = *(this + 9);
  *(_DWORD *)(a2 + 0x28) = *(this + 0xA);
  *(_DWORD *)(a2 + 0x2C) = *(this + 0xB);
  *(_DWORD *)(a2 + 0x30) = *(this + 0xC);
  *(_DWORD *)(a2 + 0x34) = *(this + 0xD);
  *(_DWORD *)(a2 + 0x38) = *(this + 0xE);
  *(_DWORD *)(a2 + 0x3C) = *(this + 0xF);
  *(_DWORD *)(a2 + 0x40) = *(this + 0x10);
  *(_DWORD *)(a2 + 0x44) = *(this + 0x11);
  result = (int)*(this + 0x12);
  *(_DWORD *)(a2 + 0x48) = result;
  *(float *)(a2 + 0x4C) = *((float *)this + 0x13);
  *(float *)(a2 + 0x50) = *((float *)this + 0x14);
  return result;
}
