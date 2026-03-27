_BYTE *__thiscall sub_569D80(_BYTE *this, int a2)
{
  *this = *(_BYTE *)a2;
  *(this + 1) = *(_BYTE *)(a2 + 1);
  *(this + 2) = *(_BYTE *)(a2 + 2);
  *(this + 3) = *(_BYTE *)(a2 + 3);
  *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 4);
  return this;
}
