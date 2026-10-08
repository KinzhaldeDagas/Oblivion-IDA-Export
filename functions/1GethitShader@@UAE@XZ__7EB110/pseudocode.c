void __thiscall GethitShader::~GethitShader(GethitShader *this)
{
  NiD3DPixelShader **Pixel; // edi
  int v3; // ebx
  NiD3DPixelShader *v4; // esi
  NiD3DPixelShader *v5; // esi
  NiD3DPass *v6; // ecx
  bool v7; // zf
  NiD3DPass *v8; // ecx

  this->super.__vftable = (BSImageSpaceShaderVtbl *)&GethitShader::`vftable'; /*0x7eb13b*/
  Pixel = this->Pixel; /*0x7eb14a*/
  v3 = 3; /*0x7eb150*/
  do /*0x7eb1ad*/
  {
    v4 = Pixel[0xFFFFFFFD]; /*0x7eb155*/
    if ( v4 ) /*0x7eb15a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v4 + 1) ) /*0x7eb160*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v4)(v4, 1); /*0x7eb176*/
      Pixel[0xFFFFFFFD] = 0; /*0x7eb178*/
    }
    v5 = *Pixel; /*0x7eb17f*/
    if ( *Pixel ) /*0x7eb17f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v5 + 1) ) /*0x7eb189*/
      {
        if ( v5 ) /*0x7eb195*/
          (**(void (__thiscall ***)(NiD3DPixelShader *, int))v5)(v5, 1); /*0x7eb19f*/
      }
      *Pixel = 0; /*0x7eb1a1*/
    }
    ++Pixel; /*0x7eb1a7*/
    --v3; /*0x7eb1aa*/
  }
  while ( v3 ); /*0x7eb1ad*/
  v6 = (NiD3DPass *)this->UnkA8[1]; /*0x7eb1af*/
  if ( v6 ) /*0x7eb1bf*/
  {
    v7 = v6->RefCount-- == 1; /*0x7eb1c1*/
    if ( v7 ) /*0x7eb1c4*/
      NiD3DPass_ReleaseToPool(v6); /*0x7eb1c6*/
  }
  v8 = (NiD3DPass *)this->UnkA8[0]; /*0x7eb1cb*/
  if ( v8 ) /*0x7eb1d8*/
  {
    v7 = v8->RefCount-- == 1; /*0x7eb1da*/
    if ( v7 ) /*0x7eb1dd*/
      NiD3DPass_ReleaseToPool(v8); /*0x7eb1df*/
  }
  _LN21((char *)this->Pixel, 4u, 3, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7eb1f9*/
  _LN21((char *)this->Vertex, 4u, 3, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7eb213*/
  BSImageSpaceShader::~BSImageSpaceShader(&this->super); /*0x7eb21e*/
}
