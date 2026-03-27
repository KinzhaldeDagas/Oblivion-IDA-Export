NiDX9SourceTextureData *__thiscall NiDX9SourceTextureData::`scalar deleting destructor'(
        NiDX9SourceTextureData *this,
        char a2)
{
  NiDX9SourceTextureData::~NiDX9SourceTextureData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
