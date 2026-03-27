Clouds *__thiscall Clouds::`scalar deleting destructor'(Clouds *this, char a2)
{
  Clouds::~Clouds(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
