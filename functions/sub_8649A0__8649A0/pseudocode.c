// MoonSugarEffect decode: ParallaxShader pooled-pass builder. Creates/refcounts 0x3C NiD3DPass entries in global table 0x00B47620, then calls vtable +0xC0 to populate pass stages/shaders.
char __thiscall sub_8649A0(void *this)
{
  unsigned int i; // edi
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  NiD3DPass *v8; // [esp+10h] [ebp-14h] BYREF
  void *v9; // [esp+14h] [ebp-10h]
  unsigned int v10; // [esp+20h] [ebp-4h]

  v9 = this; /*0x8649c6*/
  for ( i = 0; i < 0x3C; ++i ) /*0x8649ca*/
  {
    v2 = NiD3DPassPool_Acquire(&v8); /*0x8649dd*/
    v3 = (NiD3DPass *)unk_B47620[i]; /*0x8649df*/
    v4 = v3 == *v2; /*0x8649e5*/
    v10 = 0; /*0x8649e7*/
    if ( !v4 ) /*0x8649ef*/
    {
      if ( v3 ) /*0x8649f3*/
      {
        v4 = v3->RefCount-- == 1; /*0x8649f5*/
        if ( v4 ) /*0x8649f8*/
          NiD3DPass_ReleaseToPool(v3); /*0x8649fa*/
      }
      v5 = *v2; /*0x8649ff*/
      v4 = *v2 == 0; /*0x864a01*/
      unk_B47620[i] = (int)*v2; /*0x864a03*/
      if ( !v4 ) /*0x864a09*/
        ++v5->RefCount; /*0x864a0b*/
    }
    v6 = v8; /*0x864a0f*/
    v10 = 0xFFFFFFFF; /*0x864a15*/
    if ( v8 ) /*0x864a19*/
    {
      --v8->RefCount; /*0x864a1b*/
      if ( !v6->RefCount ) /*0x864a23*/
        NiD3DPass_ReleaseToPool(v6); /*0x864a28*/
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)v9 + 0xC0))(v9); /*0x864a44*/
  return 1; /*0x864a48*/
}
