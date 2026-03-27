void __thiscall sub_7AEC60(NiD3DPassVtbl **this, NiD3DPixelShader *a2)
{
  volatile LONG *v3; // esi

  v3 = (volatile LONG *)*(this + 0x11);
  if ( v3 != (volatile LONG *)a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement(v3 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
    }
    *(this + 0x11) = (NiD3DPassVtbl *)a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)a2 + 1);
  }
}
