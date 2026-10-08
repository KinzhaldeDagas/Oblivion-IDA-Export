NiDX9TextureBufferData *__thiscall NiDX9TextureBufferData::`scalar deleting destructor'(
        NiDX9TextureBufferData *this,
        char a2)
{
  NiDX9TextureBufferData::~NiDX9TextureBufferData(this); /*0x76d8a3*/
  if ( (a2 & 1) != 0 ) /*0x76d8ad*/
    FormHeapFree((unsigned int)this); /*0x76d8b0*/
  return this; /*0x76d8ba*/
}
