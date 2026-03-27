int __thiscall sub_4BD780(int *this, LONG a2, int a3)
{
  LONG (__stdcall *v3)(volatile LONG *, LONG, LONG); // ebp
  int result; // eax
  int *v6; // edi
  int v7; // ebx
  unsigned int v8; // edi
  LONG Comperand; // [esp+Ch] [ebp-Ch]

  v3 = InterlockedCompareExchange;
  do
  {
    if ( !sub_43C070(this, a2, a3) )
    {
      LOBYTE(result) = 0;
      goto LABEL_14;
    }
    Comperand = *(this + 6) & 0xFFFFFFFE;
  }
  while ( v3((volatile LONG *)((*(this + 5) & 0xFFFFFFFE) + 8), Comperand | 1, Comperand) != Comperand );
  v6 = (int *)((*(this + 5) & 0xFFFFFFFE) + 4);
  v7 = *v6;
  if ( *v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) )
    {
      if ( v7 )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *v6 = 0;
  }
  v8 = *(this + 5) & 0xFFFFFFFE;
  if ( v3((volatile LONG *)*(this + 4), Comperand, v8) == v8 )
    sub_43AB20(this, *(this + 5) & 0xFFFFFFFE);
  else
    sub_43C070(this, a2, a3);
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x34))(*this);
  LOBYTE(result) = 1;
LABEL_14:
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return result;
}
