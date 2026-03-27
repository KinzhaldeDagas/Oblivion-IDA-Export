bool __thiscall sub_720480(const char **this, int a2)
{
  return sub_7022D0(this, a2)
      && *(this + 6) == *(const char **)(a2 + 0x18)
      && *(this + 8) == *(const char **)(a2 + 0x20)
      && *(this + 7) == *(const char **)(a2 + 0x1C)
      && *((_BYTE *)this + 0x40) == *(_BYTE *)(a2 + 0x40);
}
