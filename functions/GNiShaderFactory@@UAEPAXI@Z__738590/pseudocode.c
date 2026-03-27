NiShaderFactory *__thiscall NiShaderFactory::`scalar deleting destructor'(NiShaderFactory *this, char a2)
{
  NiShaderFactory::~NiShaderFactory(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
