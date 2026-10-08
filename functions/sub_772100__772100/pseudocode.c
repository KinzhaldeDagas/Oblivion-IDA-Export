NiD3DPass *__thiscall sub_772100(unsigned int *this)
{
  int v2; // eax
  NiD3DPass *result; // eax
  int v4; // esi

  v2 = *(this + 5); /*0x772103*/
  if ( v2 ) /*0x772108*/
    sub_77CB50(*(_DWORD *)(v2 + 8)); /*0x77210e*/
  result = sub_773620((NiD3DPass *)*(this + 3)); /*0x77211a*/
  v4 = *(this + 1); /*0x77211f*/
  if ( v4 ) /*0x772127*/
  {
    result = (NiD3DPass *)InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x77212d*/
    if ( !result ) /*0x772135*/
      return (NiD3DPass *)(**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x772143*/
  }
  return result; /*0x772145*/
}
