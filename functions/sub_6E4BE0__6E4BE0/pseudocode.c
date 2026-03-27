bool __thiscall sub_6E4BE0(float *this, int a2)
{
  return sub_6ED370(this, a2)
      && sub_6CE450(this + 7, (float *)(a2 + 0x1C))
      && *(_DWORD *)(a2 + 0x3C) == *((_DWORD *)this + 0xF)
      && *(_DWORD *)(a2 + 0x40) == *((_DWORD *)this + 0x10)
      && *(_DWORD *)(a2 + 0x44) == *((_DWORD *)this + 0x11);
}
