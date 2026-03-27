BSPSysArrayEmitter *__thiscall BSPSysArrayEmitter::`scalar deleting destructor'(BSPSysArrayEmitter *this, char a2)
{
  BSPSysArrayEmitter::~BSPSysArrayEmitter(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
