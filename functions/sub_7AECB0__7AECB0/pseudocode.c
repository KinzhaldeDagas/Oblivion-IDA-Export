void __thiscall sub_7AECB0(NiD3DPass *this, NiD3DVertexShader *a2)
{
  volatile LONG *VertexShader; // esi

  VertexShader = (volatile LONG *)this->VertexShader;
  if ( VertexShader != (volatile LONG *)a2 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement(VertexShader + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))VertexShader)(VertexShader, 1);
    }
    this->VertexShader = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)a2 + 1);
  }
}
