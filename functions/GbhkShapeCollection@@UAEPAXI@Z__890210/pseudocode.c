bhkShapeCollection *__thiscall bhkShapeCollection::`scalar deleting destructor'(bhkShapeCollection *this, char a2)
{
  bhkShapeCollection::~bhkShapeCollection(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
