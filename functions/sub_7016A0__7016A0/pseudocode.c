void __thiscall sub_7016A0(NiD3DVertexShader *this)
{
  NiD3DVertexShader *v1; // esi

  v1 = *(NiD3DVertexShader **)this;
  if ( *(_DWORD *)this )
  {
    if ( !InterlockedDecrement((volatile LONG *)v1 + 1) )
    {
      if ( v1 )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v1)(v1, 1);
    }
  }
}
