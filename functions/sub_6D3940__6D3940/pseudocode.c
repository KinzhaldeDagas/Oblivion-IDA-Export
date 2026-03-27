Ni2DBuffer *__thiscall sub_6D3940(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer *result; // eax
  int v4; // esi

  result = a2;
  if ( a2 )
    return (Ni2DBuffer *)NiSmartPointer_Set__(this + 0xF, a2);
  v4 = (int)*(this + 0xF);
  if ( v4 )
  {
    result = (Ni2DBuffer *)InterlockedDecrement((volatile LONG *)(v4 + 4));
    if ( !result )
      result = (Ni2DBuffer *)(**(int (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 0xF) = 0;
  }
  return result;
}
