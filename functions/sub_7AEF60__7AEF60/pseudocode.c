// Generic shader flag/value setter used through shader vtable +0xA4. Stores caller arguments into inherited fields Unk074/Unk078.
UInt32 __thiscall sub_7AEF60(BSShader *this, UInt32 a2, char a3)
{
  this->member.Unk074 = a2; /*0x7aef68*/
  LOBYTE(this->member.Unk078) = a3; /*0x7aef6b*/
  return a2; /*0x7aef6e*/
}
