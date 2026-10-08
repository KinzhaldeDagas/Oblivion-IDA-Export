NiDX9SourceTextureData *__thiscall NiDX9SourceTextureData::`scalar deleting destructor'(
        NiDX9SourceTextureData *this,
        char a2)
{
  NiDX9SourceTextureData::~NiDX9SourceTextureData(this); /*0x761253*/
  if ( (a2 & 1) != 0 ) /*0x76125d*/
    FormHeapFree((unsigned int)this); /*0x761260*/
  return this; /*0x76126a*/
}
