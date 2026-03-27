char __thiscall sub_559BA0(volatile LONG *this)
{
  LONG (__stdcall *v2)(volatile LONG *, LONG, LONG); // ebx
  volatile LONG *v3; // esi
  char result; // al
  int v5; // eax
  unsigned int v6; // ebp

  v2 = InterlockedCompareExchange;
  v3 = this + 5;
  result = InterlockedCompareExchange(this + 5, 1, 0) == 0;
  if ( result )
  {
    v5 = *((_DWORD *)this + 2);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( v6 )
      {
        sub_5599B0(*(_DWORD **)(v5 + 8));
        FormHeapFree(v6);
        *(_DWORD *)(*((_DWORD *)this + 2) + 8) = 0;
      }
    }
    return v2(v3, 0, 1);
  }
  return result;
}
