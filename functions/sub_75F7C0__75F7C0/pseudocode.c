bool __thiscall sub_75F7C0(float *this, int a2)
{
  return *(float *)a2 == *this
      && *(float *)(a2 + 4) == *(this + 1)
      && *(float *)(a2 + 8) == *(this + 2)
      && *(float *)(a2 + 0xC) == *(this + 3)
      && *(float *)(a2 + 0x10) == *(this + 4)
      && *(float *)(a2 + 0x14) == *(this + 5)
      && *((_WORD *)this + 0xC) == *(_WORD *)(a2 + 0x18)
      && *((_WORD *)this + 0xD) == *(_WORD *)(a2 + 0x1A);
}
