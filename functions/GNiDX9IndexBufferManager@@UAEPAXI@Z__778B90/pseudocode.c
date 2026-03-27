NiDX9IndexBufferManager *__thiscall NiDX9IndexBufferManager::`scalar deleting destructor'(
        NiDX9IndexBufferManager *this,
        char a2)
{
  NiDX9IndexBufferManager::~NiDX9IndexBufferManager(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
