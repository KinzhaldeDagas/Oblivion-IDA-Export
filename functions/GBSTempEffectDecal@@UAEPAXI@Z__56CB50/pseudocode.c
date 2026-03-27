BSTempEffectDecal *__thiscall BSTempEffectDecal::`scalar deleting destructor'(BSTempEffectDecal *this, char a2)
{
  BSTempEffectDecal::~BSTempEffectDecal(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
