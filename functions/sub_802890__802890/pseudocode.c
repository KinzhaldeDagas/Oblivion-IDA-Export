void __thiscall sub_802890(BSImageSpaceShader *this, BSRenderedTexture *a2)
{
  BSRenderedTexture *Unk07C; // esi

  Unk07C = this->member.Unk07C;
  if ( Unk07C != a2 )
  {
    if ( Unk07C )
    {
      if ( !InterlockedDecrement((volatile LONG *)&Unk07C->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))Unk07C->vtbl)(Unk07C, 1);
    }
    this->member.Unk07C = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)&a2->members);
  }
}
