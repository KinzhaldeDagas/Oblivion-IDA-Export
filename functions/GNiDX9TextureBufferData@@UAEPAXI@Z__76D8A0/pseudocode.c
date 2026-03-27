NiDX9TextureBufferData *__thiscall NiDX9TextureBufferData::`scalar deleting destructor'(
        NiDX9TextureBufferData *this,
        char a2)
{
  NiDX9TextureBufferData::~NiDX9TextureBufferData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
