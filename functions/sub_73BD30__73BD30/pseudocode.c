char *__thiscall sub_73BD30(char **this, int a2, _DWORD **a3)
{
  int v4; // esi
  int v5; // eax
  char *result; // eax

  sub_708B00(this, a2, a3);
  v4 = *(_DWORD *)(a2 + 0x13C);
  if ( (char *)v4 != *(this + 0x4F) )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    v5 = (int)*(this + 0x4F);
    *(_DWORD *)(a2 + 0x13C) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  qmemcpy((void *)(a2 + 0xDC), this + 0x37, 0x30u);
  *(_DWORD *)(a2 + 0x140) = *(this + 0x50);
  *(_DWORD *)(a2 + 0x144) = *(this + 0x51);
  *(_DWORD *)(a2 + 0x148) = *(this + 0x52);
  *(_DWORD *)(a2 + 0x14C) = *(this + 0x53);
  *(_BYTE *)(a2 + 0x150) = *((_BYTE *)this + 0x150);
  *(_DWORD *)(a2 + 0x154) = *(this + 0x55);
  *(_DWORD *)(a2 + 0x158) = *(this + 0x56);
  *(_DWORD *)(a2 + 0x15C) = *(this + 0x57);
  *(_DWORD *)(a2 + 0x160) = *(this + 0x58);
  *(_DWORD *)(a2 + 0x164) = *(this + 0x59);
  *(_DWORD *)(a2 + 0x168) = *(this + 0x5A);
  *(_DWORD *)(a2 + 0x16C) = *(this + 0x5B);
  result = *(this + 0x5C);
  *(_DWORD *)(a2 + 0x170) = result;
  return result;
}
