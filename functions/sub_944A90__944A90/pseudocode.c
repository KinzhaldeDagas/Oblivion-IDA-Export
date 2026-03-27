_DWORD *__thiscall sub_944A90(_DWORD *this, int a2)
{
  *(_OWORD *)this = *(_OWORD *)a2;
  *(this + 4) = *(_DWORD *)(a2 + 0x10);
  *(this + 5) = *(_DWORD *)(a2 + 0x14);
  *(this + 6) = *(_DWORD *)(a2 + 0x18);
  *(this + 7) = *(_DWORD *)(a2 + 0x1C);
  return this;
}
