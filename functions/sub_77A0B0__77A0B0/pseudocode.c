// Oblivion NiD3DShader vtable +0x48 pass-loop begin. Sets CurrentPassIndex=0, refcounts Passes[0] into CurrentPass, and returns PassCount. After ResetPassQueue and a null selector resolution, Passes[0] and CurrentPass are null and the returned zero is the renderer's no-draw guard.
UInt32 __thiscall sub_77A0B0(NiD3DShader *this)
{
  NiD3DPass *CurrentPass; // ecx
  NiD3DPass **data; // edi
  bool v4; // zf
  NiD3DPass *v5; // eax

  this->member.CurrentPassIndex = 0;            // Begin pass loop at index zero and synchronize CurrentPass from Passes[0]. ResetPassQueue leaves both null on selector failure. /*0x77a0b3*/
  CurrentPass = this->member.CurrentPass; /*0x77a0ba*/
  data = (NiD3DPass **)this->member.Passes.data; /*0x77a0be*/
  if ( CurrentPass != *data ) /*0x77a0c3*/
  {
    if ( CurrentPass ) /*0x77a0c7*/
    {
      v4 = CurrentPass->RefCount-- == 1; /*0x77a0c9*/
      if ( v4 ) /*0x77a0cd*/
        NiD3DPass_ReleaseToPool(CurrentPass); /*0x77a0cf*/
    }
    v5 = *data; /*0x77a0d4*/
    v4 = *data == 0; /*0x77a0d6*/
    this->member.CurrentPass = *data; /*0x77a0d8*/
    if ( !v4 ) /*0x77a0db*/
      ++v5->RefCount; /*0x77a0dd*/
  }
  return this->member.PassCount;                // Return PassCount. Zero is the rigid and skinned renderer guard that bypasses all pass work and D3D draw calls. /*0x77a0e4*/
}
