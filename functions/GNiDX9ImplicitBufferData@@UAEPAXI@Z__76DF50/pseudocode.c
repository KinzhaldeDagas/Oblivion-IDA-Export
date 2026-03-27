NiDX9ImplicitBufferData *__thiscall NiDX9ImplicitBufferData::`scalar deleting destructor'(
        NiDX9ImplicitBufferData *this,
        char a2)
{
  NiDX9ImplicitBufferData::~NiDX9ImplicitBufferData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
