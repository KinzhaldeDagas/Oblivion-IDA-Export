_DWORD *__thiscall sub_8B3690(_DWORD *this, int a2)
{
  *this = *(_DWORD *)a2;
  *(this + 1) = *(_DWORD *)(a2 + 4);
  *((_OWORD *)this + 1) = *(_OWORD *)(a2 + 0x10);
  *((_OWORD *)this + 2) = *(_OWORD *)(a2 + 0x20);
  *((_OWORD *)this + 3) = *(_OWORD *)(a2 + 0x30);
  *((_OWORD *)this + 4) = *(_OWORD *)(a2 + 0x40);
  return this;
}
