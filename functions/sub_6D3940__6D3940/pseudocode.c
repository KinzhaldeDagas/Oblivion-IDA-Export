Ni2DBuffer *__thiscall sub_6D3940(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer *result; // eax
  int v4; // esi

  result = a2; /*0x6d3940*/
  if ( a2 ) /*0x6d3949*/
    return (Ni2DBuffer *)NiSmartPointer_Set__(this + 0xF, a2); /*0x6d394f*/
  v4 = (int)*(this + 0xF); /*0x6d3959*/
  if ( v4 ) /*0x6d395e*/
  {
    result = (Ni2DBuffer *)InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x6d3964*/
    if ( !result ) /*0x6d396c*/
      result = (Ni2DBuffer *)(**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d397a*/
    *(this + 0xF) = 0; /*0x6d397c*/
  }
  return result; /*0x6d3954*/
}
