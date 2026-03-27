char __thiscall sub_55EF30(int *this, LONG Comperand, _DWORD *a3)
{
  LONG (__stdcall *v3)(volatile LONG *, LONG, LONG); // ebp
  unsigned int v5; // eax
  int v6; // edx
  int *v8; // [esp+18h] [ebp-4h]
  LONG Comperanda; // [esp+20h] [ebp+4h]

  v3 = InterlockedCompareExchange;
  v8 = (int *)(*(_DWORD *)(*this + 0xC) + 4 * Comperand);
  do
  {
LABEL_2:
    *(this + 4) = (int)v8;
    *(this + 5) = *v8;
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
    Comperanda = *(this + 5) & 0xFFFFFFFE;
    if ( *(_DWORD *)*(this + 4) != Comperanda )
      goto LABEL_2;
    if ( (*(this + 6) & 1) == 0 )
      break;
    if ( v3((volatile LONG *)*(this + 4), *(this + 6) & 0xFFFFFFFE, Comperanda) != Comperanda )
      goto LABEL_2;
    v5 = *(this + 5) & 0xFFFFFFFE;
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 4) = *(this + 7);
    ++*(this + 8);
    v6 = *this;
    *(this + 7) = v5;
    if ( *(this + 8) == *(_DWORD *)(v6 + 0x10) )
      sub_435FE0(this);
LABEL_12:
    *(this + 5) = *(this + 6);
    *(_DWORD *)*(this + 2) = *(this + 6) & 0xFFFFFFFE;
  }
  if ( *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4) != *a3 )
  {
    *(this + 4) = (*(this + 5) & 0xFFFFFFFE) + 8;
    *(_DWORD *)*(this + 3) = *(this + 5) & 0xFFFFFFFE;
    goto LABEL_12;
  }
  return 1;
}
