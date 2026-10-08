bhkShape *__thiscall bhkShapeCollection::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkShapeCollection::~bhkShapeCollection(this); /*0x890213*/
  if ( (a2 & 1) != 0 ) /*0x89021d*/
    FormHeapFree((unsigned int)this); /*0x890220*/
  return this; /*0x89022a*/
}
