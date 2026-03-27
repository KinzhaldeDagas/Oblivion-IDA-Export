char __thiscall sub_432A60(_DWORD *this, LONG Comperand, int a3, int a4)
{
  int *v5; // eax
  int v6; // edi
  int v7; // ebp
  unsigned int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  _DWORD *v13; // [esp+18h] [ebp-4h]

  v13 = (_DWORD *)(*(_DWORD *)(*this + 0xC) + 4 * Comperand);
  do
  {
LABEL_2:
    *(this + 4) = v13;
    *(this + 5) = *v13;
    *(_DWORD *)*(this + 2) = *(this + 5) & 0xFFFFFFFE;
  }
  while ( *(_DWORD *)*(this + 4) != (*(this + 5) & 0xFFFFFFFE) );
  while ( 1 )
  {
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 )
      return 0;
    *(this + 6) = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 0xC);
    *(_DWORD *)*(this + 1) = *(this + 6) & 0xFFFFFFFE;
    if ( *(this + 6) != *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 0xC) )
      goto LABEL_2;
    v5 = (int *)(*(this + 5) & 0xFFFFFFFE);
    v6 = *v5;
    v7 = v5[1];
    if ( *(int **)*(this + 4) != v5 )
      goto LABEL_2;
    if ( (*(this + 6) & 1) == 0 )
      break;
    if ( (int *)InterlockedCompareExchange((volatile LONG *)*(this + 4), *(this + 6) & 0xFFFFFFFE, (LONG)v5) != v5 )
      goto LABEL_2;
    v8 = *(this + 5) & 0xFFFFFFFE;
    v9 = *(_DWORD *)(v8 + 8);
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 8)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
      *(_DWORD *)(v8 + 8) = 0;
    }
    *(_DWORD *)(v8 + 8) = *(this + 7);
    v10 = ++*(this + 8);
    v11 = *this;
    *(this + 7) = v8;
    if ( v10 == *(_DWORD *)(v11 + 0x10) )
      sub_4328B0(this);
LABEL_16:
    *(this + 5) = *(this + 6);
    *(_DWORD *)*(this + 2) = *(this + 6) & 0xFFFFFFFE;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, int, int, int))(*(_DWORD *)*this + 0x28))(*this, v6, v7, a3, a4) )
  {
    *(this + 4) = (*(this + 5) & 0xFFFFFFFE) + 0xC;
    *(_DWORD *)*(this + 3) = *(this + 5) & 0xFFFFFFFE;
    goto LABEL_16;
  }
  return (*(char (__thiscall **)(_DWORD, int, int, int, int))(*(_DWORD *)*this + 0x2C))(*this, v6, v7, a3, a4);
}
