void __stdcall sub_551CB0(unsigned int a1)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v2; // esi
  int v3; // esi

  v1 = InterlockedDecrement;
  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( !v1((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( v3 )
    {
      if ( !v1((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    FormHeapFree(a1);
  }
}
