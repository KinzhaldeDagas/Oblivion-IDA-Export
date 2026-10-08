NiDX9IndexBufferManager *__thiscall NiDX9IndexBufferManager::`scalar deleting destructor'(
        NiDX9IndexBufferManager *this,
        char a2)
{
  NiDX9IndexBufferManager::~NiDX9IndexBufferManager(this); /*0x778b93*/
  if ( (a2 & 1) != 0 ) /*0x778b9d*/
    FormHeapFree((unsigned int)this); /*0x778ba0*/
  return this; /*0x778baa*/
}
