char __thiscall sub_7BD0A0(BSShader *this)
{
  char v2; // al
  NiD3DPass *Unk070; // ecx
  char v4; // bl

  v2 = sub_8025F0(this); /*0x7bd0a4*/
  Unk070 = (NiD3DPass *)this->member.Unk070; /*0x7bd0a9*/
  v4 = v2; /*0x7bd0ae*/
  if ( Unk070 ) /*0x7bd0b0*/
  {
    if ( Unk070->RefCount-- == 1 ) /*0x7bd0b2*/
      NiD3DPass_ReleaseToPool(Unk070); /*0x7bd0b8*/
    this->member.Unk070 = 0; /*0x7bd0bd*/
  }
  return v4; /*0x7bd0c4*/
}
