// Reset a NiD3DShader pass queue before per-geometry setup. Releases every Passes[0..PassCount) slot through NiTArray assignment, releases and nulls CurrentPass, then zeros PassCount and CurrentPassIndex. A subsequent selector-resolution failure therefore cannot reuse a pass from the previous geometry or selector.
void __thiscall NiD3DShader_RemoveShaderPasses_(NiD3DShader *this)
{
  NiD3DPass *v2; // edi
  NiD3DPass *CurrentPass; // ecx
  NiD3DPass *v5; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0; /*0x77aa18*/
  if ( this->member.PassCount ) /*0x77aa1a*/
  {
    v5 = 0; /*0x77aa20*/
    do /*0x77aa3a*/
    {
      NiTArray_NiD3DPass_SetAt(&this->member.Passes, v2, &v5);// Release/null each previously queued NiD3DPass slot before building the current geometry's pass. /*0x77aa2f*/
      v2 = (NiD3DPass *)((char *)v2 + 1); /*0x77aa34*/
    }
    while ( (unsigned int)v2 < this->member.PassCount ); /*0x77aa3a*/
  }
  CurrentPass = this->member.CurrentPass; /*0x77aa3d*/
  if ( CurrentPass ) /*0x77aa42*/
  {
    if ( CurrentPass->RefCount-- == 1 ) /*0x77aa44*/
      NiD3DPass_ReleaseToPool(CurrentPass); /*0x77aa4a*/
    this->member.CurrentPass = 0;               // Prior CurrentPass has been released; clear the pointer so a failed selector cannot reuse it. /*0x77aa4f*/
  }
  this->member.PassCount = 0;                   // Reset PassCount to zero before selector resolution. /*0x77aa53*/
  this->member.CurrentPassIndex = 0;            // Reset CurrentPassIndex to zero with the pass queue. /*0x77aa56*/
}
