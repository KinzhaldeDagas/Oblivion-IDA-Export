ExtraHeadingTarget *__thiscall ExtraHeadingTarget::`scalar deleting destructor'(ExtraHeadingTarget *this, char a2)
{
  *((_DWORD *)this + 3) = 0; /*0x42b068*/
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42b06f*/
  if ( (a2 & 1) != 0 ) /*0x42b075*/
    FormHeapFree((unsigned int)this); /*0x42b078*/
  return this; /*0x42b082*/
}
