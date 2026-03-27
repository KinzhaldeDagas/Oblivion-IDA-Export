NiDynamicGeometryGroup *__thiscall NiDynamicGeometryGroup::`scalar deleting destructor'(
        NiDynamicGeometryGroup *this,
        char a2)
{
  NiDynamicGeometryGroup::~NiDynamicGeometryGroup(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
