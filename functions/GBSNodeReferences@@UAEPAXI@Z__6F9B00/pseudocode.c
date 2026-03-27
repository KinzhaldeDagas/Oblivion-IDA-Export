BSNodeReferences *__thiscall BSNodeReferences::`scalar deleting destructor'(BSNodeReferences *this, char a2)
{
  BSNodeReferences::~BSNodeReferences(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
