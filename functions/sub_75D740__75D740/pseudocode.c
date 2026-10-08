char __thiscall sub_75D740(const void **this, int a2, _DWORD **a3)
{
  LONG v4; // eax
  int v5; // ebx
  LONG v6; // ebp

  sub_759940(this, (NiGeometryData *)a2, a3); /*0x75d750*/
  v4 = (*(int (__thiscall **)(_DWORD, _DWORD **))(*(_DWORD *)*(this + 0x1A) + 0x18))(*(this + 0x1A), a3); /*0x75d75e*/
  v5 = *(_DWORD *)(a2 + 0x68); /*0x75d760*/
  v6 = v4; /*0x75d763*/
  if ( v5 == v4 ) /*0x75d767*/
  {
    LOBYTE(v4) = *((_BYTE *)this + 0x6C); /*0x75d7b4*/
    *(_BYTE *)(a2 + 0x6C) = v4; /*0x75d7b7*/
  }
  else
  {
    if ( v5 ) /*0x75d76b*/
    {
      v4 = InterlockedDecrement((volatile LONG *)(v5 + 4)); /*0x75d771*/
      if ( !v4 ) /*0x75d779*/
        LOBYTE(v4) = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x75d787*/
    }
    *(_DWORD *)(a2 + 0x68) = v6; /*0x75d78b*/
    if ( v6 ) /*0x75d78e*/
      LOBYTE(v4) = InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x75d794*/
    *(_BYTE *)(a2 + 0x6C) = *((_BYTE *)this + 0x6C); /*0x75d79d*/
  }
  return v4; /*0x75d7a0*/
}
