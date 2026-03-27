void __cdecl sub_70BF30(_DWORD *a1)
{
  NiDX9Renderer *v1; // ebp
  volatile LONG *accumulator; // esi
  unsigned int v3; // edi
  unsigned int i; // esi
  volatile LONG *v5; // [esp+14h] [ebp-10h]

  v1 = g_Renderer;
  if ( g_Renderer )
  {
    accumulator = (volatile LONG *)v1->member.super.accumulator;
    v5 = accumulator;
    if ( accumulator )
    {
      InterlockedIncrement(accumulator + 1);
      (*(void (__thiscall **)(volatile LONG *, _DWORD *))(*accumulator + 0x54))(accumulator, a1);
    }
    else
    {
      v3 = a1[1];
      for ( i = 0; i < v3; ++i )
        (*(void (__thiscall **)(_DWORD, NiDX9Renderer *))(**(_DWORD **)(*a1 + 4 * i) + 0x84))(
          *(_DWORD *)(*a1 + 4 * i),
          v1);
      accumulator = v5;
    }
    if ( accumulator )
    {
      if ( !InterlockedDecrement(accumulator + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1);
    }
  }
}
