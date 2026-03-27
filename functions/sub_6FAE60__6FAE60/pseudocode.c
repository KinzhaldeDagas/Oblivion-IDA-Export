BOOL __thiscall sub_6FAE60(float *this, int a2)
{
  return *(float *)a2 != *this
      || *(float *)(a2 + 4) != *(this + 1)
      || *(float *)(a2 + 8) != *(this + 2)
      || *((_BYTE *)this + 0xE) != *(_BYTE *)(a2 + 0xE)
      || *((_WORD *)this + 6) != *(_WORD *)(a2 + 0xC);
}
