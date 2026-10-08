// MoonSugarEffect decode: stores source BSRenderedTexture in BSImageSpaceShader +0x7C with refcounting; render pass then samples this as primary scene texture.
void __thiscall sub_802890(BSImageSpaceShader *this, BSRenderedTexture *a2)
{
  BSRenderedTexture *Unk07C; // esi

  Unk07C = this->member.Unk07C; /*0x802894*/
  if ( Unk07C != a2 ) /*0x80289e*/
  {
    if ( Unk07C ) /*0x8028a2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Unk07C->members) ) /*0x8028a8*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))Unk07C->vtbl)(Unk07C, 1); /*0x8028be*/
    }
    this->member.Unk07C = a2; /*0x8028c2*/
    if ( a2 ) /*0x8028c5*/
      InterlockedIncrement((volatile LONG *)&a2->members); /*0x8028cb*/
  }
}
