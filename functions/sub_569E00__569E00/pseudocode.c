bool __thiscall sub_569E00(_DWORD *this, int a2)
{
  return !a2
      || *((_BYTE *)this + 1) != *(_BYTE *)(a2 + 1)
      || *(_BYTE *)this != *(_BYTE *)a2
      || *((_BYTE *)this + 2) != *(_BYTE *)(a2 + 2)
      || *((_BYTE *)this + 3) != *(_BYTE *)(a2 + 3)
      || *(this + 1) != *(_DWORD *)(a2 + 4);
}
