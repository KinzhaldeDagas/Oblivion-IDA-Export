BSCullingProcess *__thiscall BSCullingProcess::`scalar deleting destructor'(BSCullingProcess *this, char a2)
{
  BSCullingProcess::~BSCullingProcess(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
