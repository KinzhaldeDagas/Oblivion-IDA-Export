// Refcount-aware replacement of interpolators[index]: releases the old NiInterpolator, stores the new pointer, and acquires it. Semantically void; prior EAX/LONG output was refcount/index residue.
void __thiscall NiGeomMorpherController_SetInterpolator(
        NiGeomMorpherController *this,
        NiInterpolator *interpolator,
        unsigned __int16 index)
{
  NiInterpolator **interpolators; // ecx
  volatile LONG *v4; // esi
  NiInterpolator **v5; // edi

  interpolators = this->interpolators; /*0x6d0b15*/
  v4 = (volatile LONG *)interpolators[index]; /*0x6d0b1e*/
  v5 = &interpolators[index]; /*0x6d0b24*/
  if ( v4 != (volatile LONG *)interpolator ) /*0x6d0b27*/
  {
    if ( v4 ) /*0x6d0b2b*/
    {
      if ( !InterlockedDecrement(v4 + 1) ) /*0x6d0b31*/
        (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x6d0b47*/
    }
    *v5 = interpolator; /*0x6d0b4b*/
    if ( interpolator ) /*0x6d0b4d*/
      InterlockedIncrement((volatile LONG *)interpolator + 1); /*0x6d0b53*/
  }
}
