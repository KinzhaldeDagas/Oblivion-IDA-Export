// CULLING MainWorld goal 2026-09-27: lazy global initializer at 0xB430FC allocates 0x226C bytes and constructs BSShaderAccumulator. Verified native table 0xA8CC5C: +0x4C=0x7A9800 begin, +0x50=0x7AE070 flush, +0x54=0x71AC10 array path, +0x58=0x7AD270 single-geometry handling.
//
// CULLING goal clarification 2026-09-27: descriptive name GetOrCreateGlobal replaces InitBSShaderAccumulator. Existing nonnull singleton is returned WITHOUT resetting pending state, camera, or lists. Repeated calls do not establish a fresh render-pass accumulator.
BSShaderAccumulator *InitBSShaderAccumulator()
{
  BSShaderAccumulator *result; // eax
  BSShaderAccumulator *v1; // eax
  BSShaderAccumulator *v2; // esi
  BSShaderAccumulator *v3; // edi

  result = unk_B430FC; /*0x7b7673*/
  if ( !unk_B430FC ) /*0x7b7673*/
  {
    v1 = (BSShaderAccumulator *)FormHeapAlloc(0x226Cu); /*0x7b7681*/
    if ( v1 ) /*0x7b7697*/
      v2 = BSShaderAccumulator::BSShaderAccumulator(v1); /*0x7b76a0*/
    else
      v2 = 0; /*0x7b76a4*/
    result = unk_B430FC; /*0x7b76a6*/
    if ( unk_B430FC != v2 ) /*0x7b76b5*/
    {
      if ( result ) /*0x7b76b9*/
      {
        v3 = unk_B430FC; /*0x7b76bb*/
        if ( !InterlockedDecrement((volatile LONG *)result + 1) ) /*0x7b76c1*/
          (**(void (__thiscall ***)(BSShaderAccumulator *, int))v3)(v3, 1); /*0x7b76d7*/
      }
      result = v2; /*0x7b76db*/
      unk_B430FC = v2; /*0x7b76dd*/
      if ( v2 ) /*0x7b76e2*/
      {
        InterlockedIncrement((volatile LONG *)v2 + 1); /*0x7b76e8*/
        return unk_B430FC; /*0x7b76ee*/
      }
    }
  }
  return result; /*0x7b76f3*/
}
