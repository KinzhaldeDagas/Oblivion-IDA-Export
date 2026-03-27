_DWORD *__thiscall sub_8D2E10(_DWORD *this, int a2)
{
  *this = *(_DWORD *)a2;
  *(this + 1) = *(_DWORD *)(a2 + 4);
  *(this + 2) = *(_DWORD *)(a2 + 8);
  *(this + 3) = *(_DWORD *)(a2 + 0xC);
  *((_OWORD *)this + 1) = *(_OWORD *)(a2 + 0x10);
  *((_OWORD *)this + 2) = *(_OWORD *)(a2 + 0x20);
  *(this + 0xC) = *(_DWORD *)(a2 + 0x30);
  qmemcpy(this + 0xD, (const void *)(a2 + 0x34), 0x20u);
  qmemcpy(this + 0x15, (const void *)(a2 + 0x54), 0x20u);
  qmemcpy(this + 0x1D, (const void *)(a2 + 0x74), 0x20u);
  qmemcpy(this + 0x25, (const void *)(a2 + 0x94), 0x20u);
  qmemcpy(this + 0x2D, (const void *)(a2 + 0xB4), 0x20u);
  qmemcpy(this + 0x35, (const void *)(a2 + 0xD4), 0x30u);
  return this;
}
