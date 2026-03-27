Sky *__thiscall Sky::`scalar deleting destructor'(Sky *this, char a2)
{
  Sky::~Sky(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
