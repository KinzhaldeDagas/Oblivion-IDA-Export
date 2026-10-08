NiDynamicGeometryGroup *__thiscall NiDynamicGeometryGroup::`scalar deleting destructor'(
        NiDynamicGeometryGroup *this,
        char a2)
{
  NiDynamicGeometryGroup::~NiDynamicGeometryGroup(this); /*0x77eac3*/
  if ( (a2 & 1) != 0 ) /*0x77eacd*/
    FormHeapFree((unsigned int)this); /*0x77ead0*/
  return this; /*0x77eada*/
}
