bool __thiscall sub_718BF0(_WORD *this, int a2)
{
  return sub_6D7E00(this, a2)
      && *(_WORD *)(a2 + 0x18) == *(this + 0xC)
      && *(_DWORD *)(a2 + 0x1C) == *((_DWORD *)this + 7)
      && *(_DWORD *)(a2 + 0x20) == *((_DWORD *)this + 8);
}
