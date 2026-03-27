bhkEntity *__thiscall bhkEntity::`scalar deleting destructor'(bhkEntity *this, char a2)
{
  bhkEntity::~bhkEntity(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
