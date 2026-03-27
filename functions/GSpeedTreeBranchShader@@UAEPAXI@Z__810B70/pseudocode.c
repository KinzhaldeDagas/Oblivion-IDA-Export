BSShader *__thiscall SpeedTreeBranchShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  SpeedTreeBranchShader::~SpeedTreeBranchShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
