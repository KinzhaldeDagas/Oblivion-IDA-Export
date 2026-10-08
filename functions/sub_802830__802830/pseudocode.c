int __thiscall sub_802830(BSImageSpaceShader *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  BSRenderedTexture *Unk07C; // esi

  Unk07C = this->member.Unk07C; /*0x802834*/
  if ( Unk07C ) /*0x802839*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&Unk07C->members) ) /*0x80283f*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk07C->vtbl)(Unk07C, 1); /*0x802855*/
    this->member.Unk07C = 0; /*0x802857*/
  }
  return NiD3DShader_FinishGeometryRender((NiD3DShader *)this, a2, a3, a4, a5, a6, a7, a8); /*0x802888*/
}
