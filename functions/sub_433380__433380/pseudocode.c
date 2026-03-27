int __thiscall sub_433380(int *this, LONG a2, int a3, int a4)
{
  int result; // eax
  int *v6; // edi
  int v7; // ebx
  LONG v8; // edi
  unsigned int Comperand; // [esp+Ch] [ebp-Ch]

  do
  {
    if ( !sub_432A60(this, a2, a3, a4) )
    {
      LOBYTE(result) = 0;
      goto LABEL_13;
    }
    Comperand = *(this + 6) & 0xFFFFFFFE;
  }
  while ( InterlockedCompareExchange((volatile LONG *)((*(this + 5) & 0xFFFFFFFE) + 0xC), Comperand | 1, Comperand) != Comperand );
  v6 = (int *)((*(this + 5) & 0xFFFFFFFE) + 8);
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
  if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), Comperand, v8) == v8 )
    sub_432A00(this, *(this + 5) & 0xFFFFFFFE);
  else
    sub_432A60(this, a2, a3, a4);
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x34))(*this);
  LOBYTE(result) = 1;
LABEL_13:
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return result;
}
