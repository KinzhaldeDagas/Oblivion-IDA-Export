bool __thiscall sub_751D60(float *this, int a2)
{
  return sub_752CD0(this, a2)
      && *(_WORD *)(a2 + 0x18) == *((_WORD *)this + 0xC)
      && *(this + 7) == *(float *)(a2 + 0x1C)
      && *(_WORD *)(a2 + 0x20) == *((_WORD *)this + 0x10)
      && *(_WORD *)(a2 + 0x22) == *((_WORD *)this + 0x11)
      && *(this + 9) == *(float *)(a2 + 0x24)
      && *(this + 0xA) == *(float *)(a2 + 0x28)
      && *(this + 0xB) == *(float *)(a2 + 0x2C)
      && *(this + 0xC) == *(float *)(a2 + 0x30);
}
