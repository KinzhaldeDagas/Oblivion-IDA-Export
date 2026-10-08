// CULLING audit 2026-09-27 (observed Oblivion behavior): Reads BYTE process+0x90: nonzero tail-jumps to base culler 0x70DFB0; zero tail-jumps object OnVisible(+0x7C). Only native constructor reference to its vtable observed in this focused pass is MiscPass 0x57F1BF, which creates a temporary process and zeroes this flag. Do not infer a main-world bypass from this override alone.
void __thiscall BSCullingProcess_Culling(BSCullingProcess *this, NiAVObject *a2)
{
  if ( this->useFrustumCull ) /*0x6fbb80*/
    NiCullingProcess_CullBoundAndDispatch(this, a2); /*0x6fbb89*/
  else
    a2->vtbl->OnVisible(a2, &this->super); /*0x6fbb9d*/
}
