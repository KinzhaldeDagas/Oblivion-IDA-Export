int __thiscall HighProcess::SetUnk2ACCallD5(HighProcess *this, float a2)
{
  int result; // eax

  result = ((int (__thiscall *)(HighProcess *))this->InitUnk2B0)(this);
  this->unk2AC = a2;
  return result;
}
