void __thiscall NiImageConverter::~NiImageConverter(_RTL_CRITICAL_SECTION_0 *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiImageConverter::`vftable'; /*0x71ae68*/
  if ( unk_B3FD24 ) /*0x71ae6e*/
    FormHeapFree((unsigned int)unk_B3FD24); /*0x71ae80*/
  unk_B3FD24 = 0; /*0x71ae8e*/
  NiNIFImageReader::~NiNIFImageReader(this + 4); /*0x71ae98*/
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiRefObject::`vftable'; /*0x71aea2*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x71aea8*/
}
