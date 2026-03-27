BSShader *__thiscall SpeedTreeFrondShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  SpeedTreeFrondShader::~SpeedTreeFrondShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
