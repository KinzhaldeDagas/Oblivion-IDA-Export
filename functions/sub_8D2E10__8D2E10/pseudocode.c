_DWORD *__thiscall sub_8D2E10(_DWORD *this, int a2)
{
  *this = *(_DWORD *)a2; /*0x8d2e18*/
  *(this + 1) = *(_DWORD *)(a2 + 4); /*0x8d2e1d*/
  *(this + 2) = *(_DWORD *)(a2 + 8); /*0x8d2e23*/
  *(this + 3) = *(_DWORD *)(a2 + 0xC); /*0x8d2e29*/
  *((_OWORD *)this + 1) = *(_OWORD *)(a2 + 0x10); /*0x8d2e31*/
  *((_OWORD *)this + 2) = *(_OWORD *)(a2 + 0x20); /*0x8d2e3a*/
  *(this + 0xC) = *(_DWORD *)(a2 + 0x30); /*0x8d2e41*/
  qmemcpy(this + 0xD, (const void *)(a2 + 0x34), 0x20u); /*0x8d2e4f*/
  qmemcpy(this + 0x15, (const void *)(a2 + 0x54), 0x20u); /*0x8d2e5c*/
  qmemcpy(this + 0x1D, (const void *)(a2 + 0x74), 0x20u); /*0x8d2e69*/
  qmemcpy(this + 0x25, (const void *)(a2 + 0x94), 0x20u); /*0x8d2e7c*/
  qmemcpy(this + 0x2D, (const void *)(a2 + 0xB4), 0x20u); /*0x8d2e8f*/
  qmemcpy(this + 0x35, (const void *)(a2 + 0xD4), 0x30u); /*0x8d2ea2*/
  return this; /*0x8d2ed6*/
}
