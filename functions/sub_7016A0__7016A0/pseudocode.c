void __thiscall NiPointerSlot_Release(void **slot)
{
  NiD3DVertexShader *v1; // esi

  v1 = (NiD3DVertexShader *)*slot; /*0x7016a1*/
  if ( *slot ) /*0x7016a1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v1 + 1) ) /*0x7016ab*/
    {
      if ( v1 ) /*0x7016b7*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v1)(v1, 1); /*0x7016c1*/
    }
  }
}
