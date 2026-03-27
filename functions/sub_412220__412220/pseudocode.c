bool __thiscall sub_412220(_DWORD *this, int a2, int a3)
{
  return ((1 << (a2 + 0x10 * a3 - 0x20 * ((unsigned int)(a2 + 0x10 * a3) >> 5)))
        & *(this + ((unsigned int)(a2 + 0x10 * a3) >> 5) + 1)) != 0;
}
