hkWorldRayCaster *__thiscall hkWorldRayCaster::`scalar deleting destructor'(hkWorldRayCaster *this, char a2)
{
  this->__vftable = &hkBroadPhaseCastCollector::`vftable'; /*0x683bf8*/
  if ( (a2 & 1) != 0 ) /*0x683bfe*/
    FormHeapFree((unsigned int)this); /*0x683c01*/
  return this; /*0x683c0b*/
}
