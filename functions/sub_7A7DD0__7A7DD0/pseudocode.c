_DWORD *__thiscall sub_7A7DD0(_DWORD *this, int a2)
{
  if ( (_DWORD *)a2 != this )
  {
    sub_78ED20(this, (_DWORD *)a2);
    *((_BYTE *)this + 0x10) = *(_BYTE *)(a2 + 0x10);
    *(this + 5) = *(_DWORD *)(a2 + 0x14);
    *((_BYTE *)this + 0x18) = *(_BYTE *)(a2 + 0x18);
    *(this + 7) = *(_DWORD *)(a2 + 0x1C);
    *(this + 8) = *(_DWORD *)(a2 + 0x20);
    *(this + 9) = *(_DWORD *)(a2 + 0x24);
    *((_BYTE *)this + 0x40) = *(_BYTE *)(a2 + 0x40);
    *((float *)this + 0x11) = *(float *)(a2 + 0x44);
    *(this + 0x12) = *(_DWORD *)(a2 + 0x48);
    *(this + 0xA) = *(_DWORD *)(a2 + 0x28);
    *(this + 0xB) = *(_DWORD *)(a2 + 0x2C);
    *(this + 0xC) = *(_DWORD *)(a2 + 0x30);
    *(this + 0xD) = *(_DWORD *)(a2 + 0x34);
    *(this + 0xE) = *(_DWORD *)(a2 + 0x38);
    *(this + 0xF) = *(_DWORD *)(a2 + 0x3C);
  }
  return this;
}
