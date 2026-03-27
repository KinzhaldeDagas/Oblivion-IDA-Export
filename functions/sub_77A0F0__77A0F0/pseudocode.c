UInt32 __thiscall sub_77A0F0(NiD3DShader *this)
{
  NiD3DPass *CurrentPass; // ecx
  UInt32 v3; // eax
  NiD3DPass **v5; // edi
  NiD3DPass *v6; // ecx
  bool v7; // zf
  NiD3DPass *v8; // eax

  CurrentPass = this->member.CurrentPass;
  if ( CurrentPass )
    CurrentPass->__vftable->sub_75F9E0(CurrentPass, this->member.CurrentPassIndex);
  v3 = ++this->member.CurrentPassIndex;
  if ( v3 == this->member.PassCount )
    return 0;
  v5 = (NiD3DPass **)(&this->member.Passes.data->__vftable + v3);
  v6 = this->member.CurrentPass;
  if ( v6 != *v5 )
  {
    if ( v6 )
    {
      v7 = v6->RefCount-- == 1;
      if ( v7 )
        sub_7604D0(v6);
    }
    v8 = *v5;
    v7 = *v5 == 0;
    this->member.CurrentPass = *v5;
    if ( !v7 )
      ++v8->RefCount;
  }
  return this->member.PassCount - this->member.CurrentPassIndex;
}
