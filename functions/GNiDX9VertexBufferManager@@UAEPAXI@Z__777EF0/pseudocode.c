NiDX9VertexBufferManager *__thiscall NiDX9VertexBufferManager::`scalar deleting destructor'(
        NiDX9VertexBufferManager *this,
        char a2)
{
  NiDX9VertexBufferManager::~NiDX9VertexBufferManager(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
