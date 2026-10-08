// Oblivion NiD3DShader vtable +0x4C pass-loop advance. Ends the current pass, increments CurrentPassIndex, refcounts the next pass into CurrentPass, and returns the remaining pass count.
// DX11 queue audit 2026-10-01: calls CurrentPass virtual+C (75F9E0) with current index before incrementing shader+34. When incremented index equals PassCount+38 it returns zero WITHOUT clearing or releasing CurrentPass+3C. Thus ordinary one-pass completion leaves index=1,count=1 and retains both array[0] and CurrentPass references. A bucket replacement must preserve these final owners plus separately reproduce pass-state restoration.
UInt32 __thiscall sub_77A0F0(NiD3DShader *this)
{
  NiD3DPass *CurrentPass; // ecx
  UInt32 v3; // eax
  NiD3DPass **v5; // edi
  NiD3DPass *v6; // ecx
  bool v7; // zf
  NiD3DPass *v8; // eax

  CurrentPass = this->member.CurrentPass; /*0x77a0f3*/
  if ( CurrentPass ) /*0x77a0f8*/
    CurrentPass->__vftable->sub_75F9E0(CurrentPass, this->member.CurrentPassIndex); /*0x77a103*/
  v3 = ++this->member.CurrentPassIndex; /*0x77a109*/
  if ( v3 == this->member.PassCount ) /*0x77a10f*/
    return 0; /*0x77a111*/
  v5 = (NiD3DPass **)(&this->member.Passes.data->__vftable + v3); /*0x77a119*/
  v6 = this->member.CurrentPass; /*0x77a11c*/
  if ( v6 != *v5 ) /*0x77a121*/
  {
    if ( v6 ) /*0x77a125*/
    {
      v7 = v6->RefCount-- == 1; /*0x77a127*/
      if ( v7 ) /*0x77a12b*/
        NiD3DPass_ReleaseToPool(v6); /*0x77a12d*/
    }
    v8 = *v5; /*0x77a132*/
    v7 = *v5 == 0; /*0x77a134*/
    this->member.CurrentPass = *v5; /*0x77a136*/
    if ( !v7 ) /*0x77a139*/
      ++v8->RefCount; /*0x77a13b*/
  }
  return this->member.PassCount - this->member.CurrentPassIndex; /*0x77a113*/
}
