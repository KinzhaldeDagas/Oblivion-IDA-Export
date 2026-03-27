NiD3DGeometryGroupManager *__thiscall NiD3DGeometryGroupManager::`scalar deleting destructor'(
        NiD3DGeometryGroupManager *this,
        char a2)
{
  NiD3DGeometryGroupManager::~NiD3DGeometryGroupManager(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
