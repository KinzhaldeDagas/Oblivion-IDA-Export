char __thiscall sub_7BD0A0(BSShader *this)
{
  char v2; // al
  NiD3DPass *Unk070; // ecx
  char v4; // bl

  v2 = sub_8025F0(this);
  Unk070 = (NiD3DPass *)this->member.Unk070;
  v4 = v2;
  if ( Unk070 )
  {
    if ( Unk070->RefCount-- == 1 )
      sub_7604D0(Unk070);
    this->member.Unk070 = 0;
  }
  return v4;
}
