BSSearchPath *__thiscall BSSearchPath::`scalar deleting destructor'(BSSearchPath *this, char a2)
{
  BSSearchPath::~BSSearchPath(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
