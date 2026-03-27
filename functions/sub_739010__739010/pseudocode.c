int *__thiscall sub_739010(int *this, int a2, _DWORD **a3)
{
  int *result; // eax
  int *v5; // edi
  int v6; // esi

  sub_700770(this, a2, a3);
  result = (int *)FormHeapAlloc(0x30u);
  if ( result )
  {
    result = sub_731620(result, *(this + 2));
    v5 = result;
  }
  else
  {
    v5 = 0;
  }
  v6 = *(_DWORD *)(a2 + 8);
  if ( (int *)v6 != v5 )
  {
    if ( v6 )
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(v6 + 4));
      if ( !result )
        result = (int *)(**(int (__thiscall ***)(int, int))v6)(v6, 1);
    }
    *(_DWORD *)(a2 + 8) = v5;
    if ( v5 )
      return (_DWORD *)InterlockedIncrement(v5 + 1);
  }
  return result;
}
