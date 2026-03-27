BSShader *__thiscall SpeedTreeLeafShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  SpeedTreeLeafShader::~SpeedTreeLeafShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
