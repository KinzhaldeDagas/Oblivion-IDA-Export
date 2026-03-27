_WORD *__thiscall sub_9193A0(_WORD *this, int a2)
{
  __int16 v3; // dx

  *(_DWORD *)this = &hkReferencedObject::`vftable';
  *(this + 2) = *(_WORD *)(a2 + 4);
  v3 = *(_WORD *)(a2 + 6);
  *(_DWORD *)this = &off_A9B2F4;
  *(this + 3) = v3;
  *((_OWORD *)this + 1) = *(_OWORD *)(a2 + 0x10);
  *((_OWORD *)this + 2) = *(_OWORD *)(a2 + 0x20);
  *((_OWORD *)this + 3) = *(_OWORD *)(a2 + 0x30);
  *((_OWORD *)this + 4) = *(_OWORD *)(a2 + 0x40);
  *((_DWORD *)this + 0x14) = *(_DWORD *)(a2 + 0x50);
  *((_DWORD *)this + 0x15) = *(_DWORD *)(a2 + 0x54);
  *(_DWORD *)this = &off_A9D2F4;
  *((_OWORD *)this + 6) = *(_OWORD *)(a2 + 0x60);
  *((_OWORD *)this + 7) = *(_OWORD *)(a2 + 0x70);
  return this;
}
