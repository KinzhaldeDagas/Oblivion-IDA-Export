NiDX9VertexBufferManager *__thiscall NiDX9VertexBufferManager::`scalar deleting destructor'(
        NiDX9VertexBufferManager *this,
        char a2)
{
  NiDX9VertexBufferManager::~NiDX9VertexBufferManager(this); /*0x777ef3*/
  if ( (a2 & 1) != 0 ) /*0x777efd*/
    FormHeapFree((unsigned int)this); /*0x777f00*/
  return this; /*0x777f0a*/
}
