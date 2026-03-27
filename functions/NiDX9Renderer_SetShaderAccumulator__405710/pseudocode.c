void __thiscall NiDX9Renderer::SetShaderAccumulator(NiDX9Renderer *this, BSShaderAccumulator *a2)
{
  volatile LONG *accumulator; // esi

  accumulator = (volatile LONG *)this->member.super.accumulator;
  if ( accumulator != (volatile LONG *)a2 )
  {
    if ( accumulator )
    {
      if ( !InterlockedDecrement(accumulator + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1);
    }
    this->member.super.accumulator = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)a2 + 1);
  }
}
