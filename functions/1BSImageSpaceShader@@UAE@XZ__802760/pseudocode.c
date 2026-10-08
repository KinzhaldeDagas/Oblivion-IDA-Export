// MoonSugarEffect decode: BSImageSpaceShader dtor releases source BSRenderedTexture at +0x7C, clears +0x80..+0x8C, then calls BSShader dtor.
void __thiscall BSImageSpaceShader::~BSImageSpaceShader(BSImageSpaceShader *this)
{
  BSRenderedTexture *Unk07C; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  BSRenderedTexture *v4; // edi

  this->__vftable = (BSImageSpaceShaderVtbl *)&BSImageSpaceShader::`vftable'; /*0x80278a*/
  Unk07C = this->member.Unk07C; /*0x802790*/
  v3 = InterlockedDecrement; /*0x802795*/
  if ( Unk07C ) /*0x8027a3*/
  {
    if ( !v3((volatile LONG *)&Unk07C->members) ) /*0x8027a9*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk07C->vtbl)(Unk07C, 1); /*0x8027bb*/
    this->member.Unk07C = 0; /*0x8027bd*/
  }
  this->member.Unk080 = 0; /*0x8027c6*/
  this->member.Unk084 = 0; /*0x8027cc*/
  this->member.Unk088 = 0; /*0x8027d2*/
  this->member.Unk08C = 0; /*0x8027d8*/
  v4 = this->member.Unk07C; /*0x8027de*/
  if ( v4 ) /*0x8027e7*/
  {
    if ( !v3((volatile LONG *)&v4->members) ) /*0x8027ed*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))v4->vtbl)(v4, 1); /*0x8027ff*/
  }
  BSShader::~BSShader((BSShader *)this); /*0x80280b*/
}
