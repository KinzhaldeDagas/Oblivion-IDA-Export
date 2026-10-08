// BSShaderAccumulator begin entry (vtable +0x4C). Stores the camera at +0x8 and sets pending flag +0x2268 only when no accumulation is already pending.
//
// CULLING MainWorld goal 2026-09-27: when pending byte+0x2268 is already set, begin leaves the previous accumulator camera+8 unchanged. Caller/process camera identity alone is therefore insufficient to attribute reused/pending accumulator contents.
void __thiscall BSShaderAccumulator_BeginAccumulation(BSShaderAccumulator *this, NiCamera *camera)
{
  if ( !*((_BYTE *)this + 0x2268) ) /*0x7a9800*/
  {
    *((_DWORD *)this + 2) = camera; /*0x7a980d*/
    *((_BYTE *)this + 0x2268) = 1; /*0x7a9810*/
  }
}
