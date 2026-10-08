NiD3DGeometryGroupManager *__thiscall NiD3DGeometryGroupManager::`scalar deleting destructor'(
        NiD3DGeometryGroupManager *this,
        char a2)
{
  NiD3DGeometryGroupManager::~NiD3DGeometryGroupManager(this); /*0x778e83*/
  if ( (a2 & 1) != 0 ) /*0x778e8d*/
    FormHeapFree((unsigned int)this); /*0x778e90*/
  return this; /*0x778e9a*/
}
