// Reference-counted NiD3DPass pixel-shader setter. Replaces pass+0x44 and AddRefs the new NiD3DPixelShader.
// DX11 pass-resource audit 2026-10-01: identity-equal assignment is a no-op. Otherwise InterlockedDecrement(old+4) and zero-count virtual destructor execute before pass+44 publication, followed by InterlockedIncrement(new+4). Same transfer shape as texture-stage76C910, whose destination is stage+4. A future combined resource plan must preserve intermediate zero/alias semantics, not only final counts.
// DX11 shared-pass audit 2026-10-01: a pooled NiD3DPass can select different pixel programs for successive geometry occurrences. The old pointer for each setter is the preceding assignment result, not the pre-bucket snapshot each time. Resource replay must aggregate by physical destination/object identity and reject any intermediate zero-reference destructor unless cleanup is explicitly implemented.
void __thiscall NiD3DPass_SetPixelShader(NiD3DPass *this, NiD3DPixelShader *shader)
{
  volatile LONG *PixelShader; // esi

  PixelShader = (volatile LONG *)this->PixelShader; /*0x7aec64*/
  if ( PixelShader != (volatile LONG *)shader ) /*0x7aec6e*/
  {
    if ( PixelShader ) /*0x7aec72*/
    {
      if ( !InterlockedDecrement(PixelShader + 1) ) /*0x7aec78*/
        (**(void (__thiscall ***)(volatile LONG *, int))PixelShader)(PixelShader, 1); /*0x7aec8e*/
    }
    this->PixelShader = shader; /*0x7aec92*/
    if ( shader ) /*0x7aec95*/
      InterlockedIncrement((volatile LONG *)shader + 1); /*0x7aec9b*/
  }
}
