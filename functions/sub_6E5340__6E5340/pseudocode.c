bool __thiscall sub_6E5340(float *this, int a2)
{
  return sub_6ED370(this, a2)
      && !sub_8AA390(this + 7, (float *)(a2 + 0x1C))
      && *(_DWORD *)(a2 + 0x28) == *((_DWORD *)this + 0xA);
}
