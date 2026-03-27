unsigned __int16 __thiscall sub_74FD20(Ni2DBuffer **this, Ni2DBuffer *a2, unsigned __int16 a3)
{
  unsigned __int16 result; // ax

  result = a3;
  if ( !a3 )
    return (unsigned __int16)NiSmartPointer_Set__(this + 0xF, a2);
  if ( a3 == 1 )
    return (unsigned __int16)NiSmartPointer_Set__(this + 0x12, a2);
  return result;
}
