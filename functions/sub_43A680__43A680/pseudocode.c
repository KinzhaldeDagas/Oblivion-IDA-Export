int __thiscall sub_43A680(int *this, LONG a2, LONG Comperand)
{
  int result; // eax
  LONG v6; // edi
  unsigned int v7; // eax
  int v8; // edx
  unsigned int Comperanda; // [esp+20h] [ebp+8h]

  do
  {
    if ( !sub_55EF30(this, a2, Comperand) )
    {
      LOBYTE(result) = 0;
      goto LABEL_9;
    }
    Comperanda = *(this + 6) & 0xFFFFFFFE;
  }
  while ( InterlockedCompareExchange((volatile LONG *)((*(this + 5) & 0xFFFFFFFE) + 8), Comperanda | 1, Comperanda) != Comperanda );
  v6 = *(this + 5) & 0xFFFFFFFE;
  if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), Comperanda, v6) == v6 )
  {
    v7 = *(this + 5) & 0xFFFFFFFE;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)(v7 + 4) = *(this + 7);
    ++*(this + 8);
    v8 = *this;
    *(this + 7) = v7;
    result = *(this + 8);
    if ( result == *(_DWORD *)(v8 + 0x10) )
      result = sub_435FE0(this);
  }
  else
  {
    sub_55EF30(this, a2, Comperand);
  }
  LOBYTE(result) = 1;
LABEL_9:
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return result;
}
