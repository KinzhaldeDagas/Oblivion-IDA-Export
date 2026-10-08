int __thiscall sub_4BD780(int *this, LONG a2, int a3)
{
  LONG (__stdcall *v3)(volatile LONG *, LONG, LONG); // ebp
  int result; // eax
  int *v6; // edi
  int v7; // ebx
  unsigned int v8; // edi
  LONG Comperand; // [esp+Ch] [ebp-Ch]

  v3 = InterlockedCompareExchange; /*0x4bd784*/
  do /*0x4bd7eb*/
  {
    if ( !sub_43C070(this, a2, a3) ) /*0x4bd7a3*/
    {
      LOBYTE(result) = 0; /*0x4bd859*/
      goto LABEL_14; /*0x4bd85b*/
    }
    Comperand = *(this + 6) & 0xFFFFFFFE; /*0x4bd7c0*/
  }
  while ( v3((volatile LONG *)((*(this + 5) & 0xFFFFFFFE) + 8), Comperand | 1, Comperand) != Comperand ); /*0x4bd7eb*/
  v6 = (int *)((*(this + 5) & 0xFFFFFFFE) + 4); /*0x4bd7f3*/
  v7 = *v6; /*0x4bd7f7*/
  if ( *v6 ) /*0x4bd7f7*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x4bd801*/
    {
      if ( v7 ) /*0x4bd80d*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x4bd817*/
    }
    *v6 = 0; /*0x4bd819*/
  }
  v8 = *(this + 5) & 0xFFFFFFFE; /*0x4bd834*/
  if ( v3((volatile LONG *)*(this + 4), Comperand, v8) == v8 ) /*0x4bd847*/
    sub_43AB20(this, *(this + 5) & 0xFFFFFFFE); /*0x4bd852*/
  else
    sub_43C070(this, a2, a3); /*0x4bd869*/
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x34))(*this); /*0x4bd875*/
  LOBYTE(result) = 1; /*0x4bd877*/
LABEL_14:
  *(_DWORD *)*(this + 1) = 0; /*0x4bd879*/
  *(_DWORD *)*(this + 2) = 0; /*0x4bd885*/
  *(_DWORD *)*(this + 3) = 0; /*0x4bd890*/
  return result; /*0x4bd88e*/
}
