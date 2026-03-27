char __thiscall sub_559C40(volatile LONG *this)
{
  LONG (__stdcall *v2)(volatile LONG *, LONG, LONG); // ebx
  volatile LONG *v3; // esi
  char result; // al
  int v5; // eax
  unsigned int v6; // ebp

  v2 = InterlockedCompareExchange;
  v3 = this + 6;
  result = InterlockedCompareExchange(this + 6, 1, 0) == 0;
  if ( result )
  {
    v5 = *((_DWORD *)this + 3);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( v6 )
      {
        sub_559A70(*(_DWORD **)(v5 + 8));
        FormHeapFree(v6);
        *(_DWORD *)(*((_DWORD *)this + 3) + 8) = 0;
      }
    }
    return v2(v3, 0, 1);
  }
  return result;
}
