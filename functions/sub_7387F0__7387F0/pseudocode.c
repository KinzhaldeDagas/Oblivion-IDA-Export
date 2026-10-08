void __thiscall sub_7387F0(unsigned int *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *(this + 2); /*0x7387f6*/
  *this = (unsigned int)&NiScreenGeometryData::ScreenElement::`vftable'; /*0x7387f7*/
  FormHeapFree(v2); /*0x7387fd*/
  FormHeapFree(*(this + 3)); /*0x738806*/
  FormHeapFree(*(this + 4)); /*0x73880f*/
}
