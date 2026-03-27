NighteyeShader *__thiscall NighteyeShader::`scalar deleting destructor'(NighteyeShader *this, char a2)
{
  NighteyeShader::~NighteyeShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
