BSShaderAccumulator *InitBSShaderAccumulator()
{
  BSShaderAccumulator *result; // eax
  BSShaderAccumulator *v1; // eax
  BSShaderAccumulator *v2; // esi
  BSShaderAccumulator *v3; // edi

  result = dword_B430FC;
  if ( !dword_B430FC )
  {
    v1 = (BSShaderAccumulator *)FormHeapAlloc(0x226Cu);
    if ( v1 )
      v2 = BSShaderAccumulator::BSShaderAccumulator(v1);
    else
      v2 = 0;
    result = dword_B430FC;
    if ( dword_B430FC != v2 )
    {
      if ( result )
      {
        v3 = dword_B430FC;
        if ( !InterlockedDecrement((volatile LONG *)result + 1) )
          (**(void (__thiscall ***)(BSShaderAccumulator *, int))v3)(v3, 1);
      }
      result = v2;
      dword_B430FC = v2;
      if ( v2 )
      {
        InterlockedIncrement((volatile LONG *)v2 + 1);
        return dword_B430FC;
      }
    }
  }
  return result;
}
