bool __thiscall sub_6E6A00(float *this, int a2)
{
  return sub_6ED370(this, a2)
      && !sub_632310(this + 7, (float *)(a2 + 0x1C))
      && *(_DWORD *)(a2 + 0x2C) == *((_DWORD *)this + 0xB);
}
