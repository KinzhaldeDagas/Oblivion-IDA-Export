char __thiscall sub_6C5760(_DWORD *this, int a2, const char *a3, int a4)
{
  bool v5; // zf

  if ( this && *(_DWORD *)(a2 + 0x40) )
    return 0;
  v5 = *(_DWORD *)(a2 + 0x5C) == 0;
  *(_DWORD *)(a2 + 0x40) = this;
  if ( v5 )
    sub_49F4D0((unsigned int *)a2, *(char **)(*(this + 0xC) + 8));
  if ( (_BYTE)a4 && !sub_6C9590((_DWORD *)a2, (_DWORD *)*(this + 0xC)) )
  {
    *(_DWORD *)(a2 + 0x40) = 0;
    return 0;
  }
  if ( a3 )
    sub_434930((unsigned int *)a2, a3);
  a4 = a2;
  InterlockedIncrement((volatile LONG *)(a2 + 4));
  sub_6C5240((int)(this + 0xF), &a4);
  if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
    (**(void (__thiscall ***)(int, int))a2)(a2, 1);
  sub_412D30(this + 0x16, *(_DWORD *)(a2 + 8), (TESForm *)a2);
  return 1;
}
