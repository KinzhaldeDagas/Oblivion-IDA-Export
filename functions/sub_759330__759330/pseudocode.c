bool __thiscall sub_759330(float *this, int a2)
{
  return sub_75E890(this, a2)
      && *(_BYTE *)(a2 + 0x30) == *((_BYTE *)this + 0x30)
      && !sub_8AA390((float *)(a2 + 0x34), this + 0xD);
}
