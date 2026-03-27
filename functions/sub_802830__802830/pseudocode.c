int __thiscall sub_802830(BSImageSpaceShader *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  BSRenderedTexture *Unk07C; // esi

  Unk07C = this->member.Unk07C;
  if ( Unk07C )
  {
    if ( !InterlockedDecrement((volatile LONG *)&Unk07C->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk07C->vtbl)(Unk07C, 1);
    this->member.Unk07C = 0;
  }
  return sub_76C7D0(this, a2, a3, a4, a5, a6, a7, a8);
}
