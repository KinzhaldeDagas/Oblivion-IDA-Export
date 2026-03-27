void __thiscall NiD3DShader_RemoveShaderPasses_(NiD3DShader *this)
{
  NiD3DPass *v2; // edi
  NiD3DPass *CurrentPass; // ecx
  NiD3DPass *v5; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  if ( this->member.PassCount )
  {
    v5 = 0;
    do
    {
      sub_76CE40(&this->member.Passes, v2, &v5);
      v2 = (NiD3DPass *)((char *)v2 + 1);
    }
    while ( (unsigned int)v2 < this->member.PassCount );
  }
  CurrentPass = this->member.CurrentPass;
  if ( CurrentPass )
  {
    if ( CurrentPass->RefCount-- == 1 )
      sub_7604D0(CurrentPass);
    this->member.CurrentPass = 0;
  }
  this->member.PassCount = 0;
  this->member.CurrentPassIndex = 0;
}
