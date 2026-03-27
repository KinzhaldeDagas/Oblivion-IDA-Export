int __thiscall sub_55F270(_DWORD *this, LONG a2, LONG Comperand)
{
  LONG (__stdcall *v3)(volatile LONG *, LONG, LONG); // ebx
  int result; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  LONG Comperanda; // [esp+20h] [ebp+8h]

  v3 = InterlockedCompareExchange;
  do
  {
    if ( !sub_43A260(this, a2, Comperand) )
    {
      LOBYTE(result) = 0;
      goto LABEL_10;
    }
    Comperanda = *(this + 6) & 0xFFFFFFFE;
  }
  while ( v3((volatile LONG *)((*(this + 5) & 0xFFFFFFFE) + 8), Comperanda | 1, Comperanda) != Comperanda );
  *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4) = 0;
  v7 = *(this + 5) & 0xFFFFFFFE;
  if ( v3((volatile LONG *)*(this + 4), Comperanda, v7) == v7 )
  {
    v8 = *(this + 5) & 0xFFFFFFFE;
    *(_DWORD *)(v8 + 4) = 0;
    *(_DWORD *)(v8 + 4) = *(this + 7);
    ++*(this + 8);
    v9 = *this;
    *(this + 7) = v8;
    if ( *(this + 8) == *(_DWORD *)(v9 + 0x10) )
      sub_435FE0(this);
  }
  else
  {
    sub_43A260(this, a2, Comperand);
  }
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x34))(*this);
  LOBYTE(result) = 1;
LABEL_10:
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return result;
}
