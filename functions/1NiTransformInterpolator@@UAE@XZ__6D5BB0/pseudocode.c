// Oblivion NiTransformInterpolator destructor. Releases the refcounted NiTransformData pointer at +0x2C, deleting it at zero references, then runs the interpolator base destructor.
void __thiscall NiTransformInterpolator::~NiTransformInterpolator(NiTransformInterpolator *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 0xB); /*0x6d5bd9*/
  if ( v2 ) /*0x6d5be6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6d5bec*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6d5c02*/
  }
  sub_6EC250(this); /*0x6d5c0e*/
}
