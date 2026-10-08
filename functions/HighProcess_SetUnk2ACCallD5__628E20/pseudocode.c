int __thiscall HighProcess::SetUnk2ACCallD5(HighProcess *this, float a2)
{
  int result; // eax

  result = ((int (__thiscall *)(HighProcess *))this->InitUnk2B0)(this); /*0x628e2b*/
  this->unk2AC = a2; /*0x628e31*/
  return result; /*0x628e37*/
}
