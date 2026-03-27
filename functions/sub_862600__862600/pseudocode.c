void __stdcall sub_862600(int a1, unsigned int a2)
{
  unsigned int i; // ebx
  int v3; // edi
  int v4; // esi

  for ( i = a2; i < *(_DWORD *)(a1 + 0x18); ++i )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * i);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
        *(_DWORD *)(v3 + 4) = 0;
      }
    }
  }
}
