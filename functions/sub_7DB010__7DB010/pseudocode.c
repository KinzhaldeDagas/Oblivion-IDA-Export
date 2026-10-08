void __thiscall sub_7DB010(unsigned int *this)
{
  if ( *this ) /*0x7db013*/
  {
    FormHeapFree(*this); /*0x7db01a*/
    *this = 0; /*0x7db022*/
  }
  if ( *(this + 1) ) /*0x7db028*/
  {
    FormHeapFree(*(this + 1)); /*0x7db030*/
    *(this + 1) = 0; /*0x7db038*/
  }
  NiTStringPointerMap<ShaderBufferEntry *>::~NiTStringPointerMap<ShaderBufferEntry *>(this + 2); /*0x7db043*/
}
