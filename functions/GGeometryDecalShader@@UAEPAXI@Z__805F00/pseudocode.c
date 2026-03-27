BSShader *__thiscall GeometryDecalShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  GeometryDecalShader::~GeometryDecalShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
