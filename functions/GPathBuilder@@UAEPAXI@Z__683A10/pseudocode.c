PathBuilder *__thiscall PathBuilder::`scalar deleting destructor'(PathBuilder *this, char a2)
{
  PathBuilder::~PathBuilder(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
