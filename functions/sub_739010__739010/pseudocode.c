int *__thiscall sub_739010(int *this, int a2, _DWORD **a3)
{
  int *result; // eax
  int *v5; // edi
  int v6; // esi

  sub_700770(this, a2, a3); /*0x73903f*/
  result = (int *)FormHeapAlloc(0x30u); /*0x739046*/
  if ( result ) /*0x73905c*/
  {
    result = (int *)sub_731620((char *)result, *(this + 2)); /*0x739064*/
    v5 = result; /*0x739069*/
  }
  else
  {
    v5 = 0; /*0x73906d*/
  }
  v6 = *(_DWORD *)(a2 + 8); /*0x73906f*/
  if ( (int *)v6 != v5 ) /*0x73907c*/
  {
    if ( v6 ) /*0x739080*/
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(v6 + 4)); /*0x739086*/
      if ( !result ) /*0x73908e*/
        result = (int *)(**(int (__thiscall ***)(int, int))v6)(v6, 1); /*0x73909c*/
    }
    *(_DWORD *)(a2 + 8) = v5; /*0x7390a0*/
    if ( v5 ) /*0x7390a3*/
      return (int *)InterlockedIncrement(v5 + 1); /*0x7390a9*/
  }
  return result; /*0x7390af*/
}
