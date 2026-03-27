LONG __thiscall sub_436710(void *this, int *a2)
{
  LONG v2; // ebx
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // eax
  bool v7; // zf
  LONG result; // eax
  LONG *Comperand; // [esp+Ch] [ebp-4h]

  v2 = 0;
  v4 = (_DWORD *)FormHeapAlloc(8u);
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
    v2 = (LONG)v4;
  }
  v5 = *(_DWORD *)(v2 + 4);
  if ( v5 != *a2 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 8)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    v6 = *a2;
    v7 = *a2 == 0;
    *(_DWORD *)(v2 + 4) = *a2;
    if ( !v7 )
      InterlockedIncrement((volatile LONG *)(v6 + 8));
  }
  do
  {
    while ( 1 )
    {
      do
      {
        Comperand = *(LONG **)(*(_DWORD *)this + 8);
        **((_DWORD **)this + 1) = Comperand;
      }
      while ( Comperand != *(LONG **)(*(_DWORD *)this + 8) );
      if ( !*Comperand )
        break;
      InterlockedCompareExchange((volatile LONG *)(*(_DWORD *)this + 8), *Comperand, (LONG)Comperand);
    }
  }
  while ( InterlockedCompareExchange(Comperand, v2, 0) );
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)this + 4))(*(_DWORD *)this);
  result = InterlockedCompareExchange((volatile LONG *)(*(_DWORD *)this + 8), v2, (LONG)Comperand);
  **((_DWORD **)this + 1) = 0;
  return result;
}
