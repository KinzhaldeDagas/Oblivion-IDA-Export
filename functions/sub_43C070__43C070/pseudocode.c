char __thiscall sub_43C070(_DWORD *this, LONG Comperand, int a3)
{
  int v4; // edi
  unsigned int v5; // edi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  _DWORD *v10; // [esp+18h] [ebp-4h]
  unsigned int Comperanda; // [esp+20h] [ebp+4h]

  v10 = (_DWORD *)(*(_DWORD *)(*this + 0xC) + 4 * Comperand);
  do
  {
LABEL_2:
    *(this + 4) = v10;
    *(this + 5) = *v10;
    *(_DWORD *)*(this + 2) = *(this + 5) & 0xFFFFFFFE;
  }
  while ( *(_DWORD *)*(this + 4) != (*(this + 5) & 0xFFFFFFFE) );
  while ( 1 )
  {
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 )
      return 0;
    *(this + 6) = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8);
    *(_DWORD *)*(this + 1) = *(this + 6) & 0xFFFFFFFE;
    if ( *(this + 6) != *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) )
      goto LABEL_2;
    v4 = *(_DWORD *)(*(this + 5) & 0xFFFFFFFE);
    Comperanda = *(this + 5) & 0xFFFFFFFE;
    if ( *(_DWORD *)*(this + 4) != Comperanda )
      goto LABEL_2;
    if ( (*(this + 6) & 1) == 0 )
      break;
    if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), *(this + 6) & 0xFFFFFFFE, Comperanda) != Comperanda )
      goto LABEL_2;
    v5 = *(this + 5) & 0xFFFFFFFE;
    v6 = *(_DWORD *)(v5 + 4);
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 8)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      *(_DWORD *)(v5 + 4) = 0;
    }
    *(_DWORD *)(v5 + 4) = *(this + 7);
    v7 = ++*(this + 8);
    v8 = *this;
    *(this + 7) = v5;
    if ( v7 == *(_DWORD *)(v8 + 0x10) )
      sub_43A3F0(this);
LABEL_16:
    *(this + 5) = *(this + 6);
    *(_DWORD *)*(this + 2) = *(this + 6) & 0xFFFFFFFE;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*this + 0x28))(*this, v4, a3) )
  {
    *(this + 4) = (*(this + 5) & 0xFFFFFFFE) + 8;
    *(_DWORD *)*(this + 3) = *(this + 5) & 0xFFFFFFFE;
    goto LABEL_16;
  }
  return (*(char (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*this + 0x2C))(*this, v4, a3);
}
