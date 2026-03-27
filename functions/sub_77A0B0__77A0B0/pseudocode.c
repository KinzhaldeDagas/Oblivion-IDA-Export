UInt32 __thiscall sub_77A0B0(NiD3DShader *this)
{
  NiD3DPass *CurrentPass; // ecx
  NiD3DPass **data; // edi
  bool v4; // zf
  NiD3DPass *v5; // eax

  this->member.CurrentPassIndex = 0;
  CurrentPass = this->member.CurrentPass;
  data = (NiD3DPass **)this->member.Passes.data;
  if ( CurrentPass != *data )
  {
    if ( CurrentPass )
    {
      v4 = CurrentPass->RefCount-- == 1;
      if ( v4 )
        sub_7604D0(CurrentPass);
    }
    v5 = *data;
    v4 = *data == 0;
    this->member.CurrentPass = *data;
    if ( !v4 )
      ++v5->RefCount;
  }
  return this->member.PassCount;
}
