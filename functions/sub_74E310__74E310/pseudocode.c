bool __thiscall sub_74E310(float *this, int a2)
{
  return sub_752CD0(this, a2)
      && *(this + 6) == *(float *)(a2 + 0x18)
      && *(this + 7) == *(float *)(a2 + 0x1C)
      && *(_BYTE *)(a2 + 0x35) == *((_BYTE *)this + 0x35)
      && *(this + 8) == *(float *)(a2 + 0x20)
      && *(this + 9) == *(float *)(a2 + 0x24)
      && *(_BYTE *)(a2 + 0x34) == *((_BYTE *)this + 0x34)
      && !sub_8AA390((float *)(a2 + 0x28), this + 0xA);
}
