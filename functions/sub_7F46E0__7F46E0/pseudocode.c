char __thiscall sub_7F46E0(BoltShader *this)
{
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  NiD3DPass *v8; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v9; // [esp+18h] [ebp-4h]

  if ( !this->Unk00[0x3F] ) /*0x7f4705*/
  {
    v2 = NiD3DPassPool_Acquire(&v8); /*0x7f471c*/
    v3 = (NiD3DPass *)this->Unk00[0x3F]; /*0x7f471e*/
    v4 = v3 == *v2; /*0x7f4724*/
    v9 = 0; /*0x7f4726*/
    if ( !v4 ) /*0x7f472e*/
    {
      if ( v3 ) /*0x7f4732*/
      {
        v4 = v3->RefCount-- == 1; /*0x7f4734*/
        if ( v4 ) /*0x7f4738*/
          NiD3DPass_ReleaseToPool(v3); /*0x7f473a*/
      }
      v5 = *v2; /*0x7f473f*/
      v4 = *v2 == 0; /*0x7f4741*/
      this->Unk00[0x3F] = (UInt32)*v2; /*0x7f4743*/
      if ( !v4 ) /*0x7f4749*/
        ++v5->RefCount; /*0x7f474b*/
    }
    v6 = v8; /*0x7f474f*/
    v9 = 0xFFFFFFFF; /*0x7f4755*/
    if ( v8 ) /*0x7f475d*/
    {
      --v8->RefCount; /*0x7f475f*/
      if ( !v6->RefCount ) /*0x7f4768*/
        NiD3DPass_ReleaseToPool(v6); /*0x7f476d*/
    }
  }
  sub_7F4190(this); /*0x7f4774*/
  return 1; /*0x7f477b*/
}
