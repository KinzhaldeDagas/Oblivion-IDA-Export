NiD3DShaderDeclaration *__thiscall NiD3DShaderDeclaration::NiD3DShaderDeclaration(NiD3DShaderDeclaration *this)
{
  NiObject_constr((NiObject *)this);
  this->member.Renderer = 0;
  this->member.BufferManager = 0;
  this->member.Device = 0;
  this->member.Unk014 = 0;
  this->member.Unk018 = 0;
  this->member.Unk01C = 0;
  this->member.StreamCount = 0;
  this->member.Unk024 = 0;
  LOBYTE(this->member.Unk028) = 0;
  this->__vftable = (#9279 *)&NiD3DShaderDeclaration::`vftable';
  return this;
}
