// Pass225/226: Tests whether NiGeometryBufferData is live: stream count nonzero and every VBChip has a D3D vertex buffer.
// DX11 static-buffer audit 2026-10-01: predicate requires nonzero StreamCount(+1C), nonnull VBChip array entries(+24) and nonnull chip VB(+8) for all streams. It proves native allocation association only, not initialized/current CPU/GPU bytes, device ownership or lifetime. DX11 buffer publication receipts and retained bindings remain separate requirements.
unsigned __int8 __thiscall NiGeometryBufferData_HasLiveStreams(NiGeometryBufferData *this)
{
  UInt32 StreamCount; // esi
  int v3; // edx
  NiVBChip **i; // eax

  StreamCount = this->StreamCount; /*0x777f11*/
  if ( StreamCount ) /*0x777f16*/
  {
    v3 = 0; /*0x777f1c*/
    for ( i = this->VBChip; *i && (*i)->VB; ++i ) /*0x777f22*/
    {
      if ( ++v3 >= StreamCount ) /*0x777f3a*/
        return 1; /*0x777f3c*/
    }
  }
  return 0; /*0x777f1a*/
}
