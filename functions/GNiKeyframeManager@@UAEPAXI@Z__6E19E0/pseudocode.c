NiKeyframeManager *__thiscall NiKeyframeManager::`scalar deleting destructor'(NiKeyframeManager *this, char a2)
{
  NiKeyframeManager::~NiKeyframeManager(this); /*0x6e19e3*/
  if ( (a2 & 1) != 0 ) /*0x6e19ed*/
    FormHeapFree((unsigned int)this); /*0x6e19f0*/
  return this; /*0x6e19fa*/
}
