// Reference-counted NiD3DPass vertex-shader setter. Replaces pass+0x58 and AddRefs the new NiD3DVertexShader.
// DX11 vertex refresh: this setter writes pass+58 with native reference-count transitions. Constructor mapping is checked against the actual current pass field; no setter/constructor is executed by frame capture, and no resource ownership or per-geometry override closure is inferred from a matching pointer.
void __thiscall NiD3DPass_SetVertexShader(NiD3DPass *this, NiD3DVertexShader *a2)
{
  volatile LONG *VertexShader; // esi

  VertexShader = (volatile LONG *)this->VertexShader; /*0x7aecb4*/
  if ( VertexShader != (volatile LONG *)a2 ) /*0x7aecbe*/
  {
    if ( VertexShader ) /*0x7aecc2*/
    {
      if ( !InterlockedDecrement(VertexShader + 1) ) /*0x7aecc8*/
        (**(void (__thiscall ***)(volatile LONG *, int))VertexShader)(VertexShader, 1); /*0x7aecde*/
    }
    this->VertexShader = a2; /*0x7aece2*/
    if ( a2 ) /*0x7aece5*/
      InterlockedIncrement((volatile LONG *)a2 + 1); /*0x7aeceb*/
  }
}
