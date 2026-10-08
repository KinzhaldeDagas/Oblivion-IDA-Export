//
// DX11 restricted-bucket authority audit 2026-10-01: the BS accumulator branch of ShadowSceneNode_VisibleCullAndRankFullLights retains the previous renderer accumulator at 7C7D0F, installs current ESI through 405710 at 7C7D22, then invokes Flush via vtable+50 at 7C7D54 (return 7C7D56). Renderer+8 therefore owns a NiPointer reference to ESI throughout that call. Afterward 7C7D5D restores prior accumulator and 7C7D8D drops the current local reference. 405710 uses refcount+4 decrement/destroy then assign/increment. Distinguish the 7C7A79 branch: it allocates a NiAlphaAccumulator, so that return address is not by itself proof of an ordinary BS Lighting30 bucket. Bound accumulator lifetime does not prove mutable list, geometry/material, pool or writer exclusion.
// DX11 bucket owner audit 2026-10-01: protected read receipt for the ordinary BS branch checks actual Win32 CRITICAL_SECTION at renderer+80 (RecursionCount +88, OwningThread +8C), matching wrapper curThread+F8 / entryCount+FC, active state (renderer+200==1 OR +204==1) and ready byte+20C==1. Requires main OSGlobals thread (+10 via B33398), no parallel-update manager B3F940, current renderer B3F928/device+280/accumulator+8, BS vtable A8CC5C with Flush+50=7AE070 and bucket+60=7AC9A0, and enclosing reference count >=2. Only caller return7C7D56 is accepted; 7C7A79 is the alpha-accumulator branch. Renderer lock virtuals A88FCC/A88FD0 are both60D0A0 RET. Exact helper bodies 405710/763F60/763FA0/7D6A80/7D6B00 are now pinned in the renderer code catalog. These observed owner facts DO NOT acquire a geometry/property/pool/reference-writer lease or authorize replacement alone.
void __thiscall NiDX9Renderer::SetShaderAccumulator(NiDX9Renderer *this, BSShaderAccumulator *a2)
{
  volatile LONG *accumulator; // esi

  accumulator = (volatile LONG *)this->member.super.accumulator; /*0x405714*/
  if ( accumulator != (volatile LONG *)a2 ) /*0x40571e*/
  {
    if ( accumulator ) /*0x405722*/
    {
      if ( !InterlockedDecrement(accumulator + 1) ) /*0x405728*/
        (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1); /*0x40573e*/
    }
    this->member.super.accumulator = a2; /*0x405742*/
    if ( a2 ) /*0x405745*/
      InterlockedIncrement((volatile LONG *)a2 + 1); /*0x40574b*/
  }
}
