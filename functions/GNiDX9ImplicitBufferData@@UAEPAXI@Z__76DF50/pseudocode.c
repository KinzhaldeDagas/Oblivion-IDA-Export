NiDX9ImplicitBufferData *__thiscall NiDX9ImplicitBufferData::`scalar deleting destructor'(
        NiDX9ImplicitBufferData *this,
        char a2)
{
  NiDX9ImplicitBufferData::~NiDX9ImplicitBufferData(this); /*0x76df53*/
  if ( (a2 & 1) != 0 ) /*0x76df5d*/
    FormHeapFree((unsigned int)this); /*0x76df60*/
  return this; /*0x76df6a*/
}
