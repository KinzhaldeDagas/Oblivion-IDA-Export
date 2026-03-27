void __cdecl sub_70C000(NiCamera *a1, _DWORD *a2)
{
  volatile LONG *accumulator; // esi

  if ( g_Renderer )
  {
    if ( a1 )
    {
      accumulator = (volatile LONG *)g_Renderer->member.super.accumulator;
      if ( accumulator )
      {
        InterlockedIncrement(accumulator + 1);
        (*(void (__thiscall **)(volatile LONG *, NiCamera *))(*accumulator + 0x4C))(accumulator, a1);
      }
      sub_70BF30(a2);
      if ( accumulator )
      {
        (*(void (__thiscall **)(volatile LONG *))(*accumulator + 0x50))(accumulator);
        if ( !InterlockedDecrement(accumulator + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1);
      }
    }
  }
}
