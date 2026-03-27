BSTempEffectGeometryDecal *__thiscall BSTempEffectGeometryDecal::`scalar deleting destructor'(
        BSTempEffectGeometryDecal *this,
        char a2)
{
  BSTempEffectGeometryDecal::~BSTempEffectGeometryDecal(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
