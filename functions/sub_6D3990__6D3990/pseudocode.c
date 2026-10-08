Ni2DBuffer *__thiscall sub_6D3990(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer *result; // eax
  int v4; // esi

  result = a2; /*0x6d3990*/
  if ( a2 ) /*0x6d3999*/
    return (Ni2DBuffer *)NiSmartPointer_Set__(this + 0x10, a2); /*0x6d399f*/
  v4 = (int)*(this + 0x10); /*0x6d39a9*/
  if ( v4 ) /*0x6d39ae*/
  {
    result = (Ni2DBuffer *)InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x6d39b4*/
    if ( !result ) /*0x6d39bc*/
      result = (Ni2DBuffer *)(**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d39ca*/
    *(this + 0x10) = 0; /*0x6d39cc*/
  }
  return result; /*0x6d39a4*/
}
