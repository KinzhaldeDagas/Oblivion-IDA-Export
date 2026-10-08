Ni2DBuffer *__thiscall sub_6D38F0(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer *result; // eax
  int v4; // esi

  result = a2; /*0x6d38f0*/
  if ( a2 ) /*0x6d38f9*/
    return (Ni2DBuffer *)NiSmartPointer_Set__(this + 0xE, a2); /*0x6d38ff*/
  v4 = (int)*(this + 0xE); /*0x6d3909*/
  if ( v4 ) /*0x6d390e*/
  {
    result = (Ni2DBuffer *)InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x6d3914*/
    if ( !result ) /*0x6d391c*/
      result = (Ni2DBuffer *)(**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d392a*/
    *(this + 0xE) = 0; /*0x6d392c*/
  }
  return result; /*0x6d3904*/
}
