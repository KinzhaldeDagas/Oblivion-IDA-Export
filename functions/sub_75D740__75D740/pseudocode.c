char __thiscall sub_75D740(const void **this, int a2, _DWORD **a3)
{
  LONG v4; // eax
  int v5; // ebx
  LONG v6; // ebp

  sub_759940(this, a2, a3);
  v4 = (*(int (__thiscall **)(_DWORD, _DWORD **))(*(_DWORD *)*(this + 0x1A) + 0x18))(*(this + 0x1A), a3);
  v5 = *(_DWORD *)(a2 + 0x68);
  v6 = v4;
  if ( v5 == v4 )
  {
    LOBYTE(v4) = *((_BYTE *)this + 0x6C);
    *(_BYTE *)(a2 + 0x6C) = v4;
  }
  else
  {
    if ( v5 )
    {
      v4 = InterlockedDecrement((volatile LONG *)(v5 + 4));
      if ( !v4 )
        LOBYTE(v4) = (**(int (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *(_DWORD *)(a2 + 0x68) = v6;
    if ( v6 )
      LOBYTE(v4) = InterlockedIncrement((volatile LONG *)(v6 + 4));
    *(_BYTE *)(a2 + 0x6C) = *((_BYTE *)this + 0x6C);
  }
  return v4;
}
