int __thiscall sub_433380(int *this, LONG a2, int a3, int a4)
{
  int result; // eax
  int *v6; // edi
  int v7; // ebx
  LONG v8; // edi
  unsigned int Comperand; // [esp+Ch] [ebp-Ch]

  do /*0x4333f0*/
  {
    if ( !sub_432A60(this, a2, a3, a4) ) /*0x4333a8*/
    {
      LOBYTE(result) = 0; /*0x43345e*/
      goto LABEL_13; /*0x433460*/
    }
    Comperand = *(this + 6) & 0xFFFFFFFE; /*0x4333bf*/
  }
  while ( InterlockedCompareExchange((volatile LONG *)((*(this + 5) & 0xFFFFFFFE) + 0xC), Comperand | 1, Comperand) != Comperand ); /*0x4333f0*/
  v6 = (int *)((*(this + 5) & 0xFFFFFFFE) + 8); /*0x4333f8*/
  v7 = *v6; /*0x4333fc*/
  if ( *v6 ) /*0x4333fc*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x433406*/
    {
      if ( v7 ) /*0x433412*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x43341c*/
    }
    *v6 = 0; /*0x43341e*/
  }
  v8 = *(this + 5) & 0xFFFFFFFE; /*0x433439*/
  if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), Comperand, v8) == v8 ) /*0x43344c*/
    sub_432A00(this, *(this + 5) & 0xFFFFFFFE); /*0x433457*/
  else
    sub_432A60(this, a2, a3, a4); /*0x433473*/
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x34))(*this); /*0x43347f*/
  LOBYTE(result) = 1; /*0x433481*/
LABEL_13:
  *(_DWORD *)*(this + 1) = 0; /*0x433483*/
  *(_DWORD *)*(this + 2) = 0; /*0x43348f*/
  *(_DWORD *)*(this + 3) = 0; /*0x43349a*/
  return result; /*0x433498*/
}
