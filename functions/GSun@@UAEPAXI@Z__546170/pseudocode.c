Sun *__thiscall Sun::`scalar deleting destructor'(Sun *this, char a2)
{
  Sun::~Sun(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
