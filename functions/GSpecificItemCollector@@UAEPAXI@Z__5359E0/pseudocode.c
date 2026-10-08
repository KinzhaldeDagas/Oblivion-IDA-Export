SpecificItemCollector *__thiscall SpecificItemCollector::`scalar deleting destructor'(
        SpecificItemCollector *this,
        char a2)
{
  *(_DWORD *)this = &hkRayHitCollector::`vftable'; /*0x5359e8*/
  if ( (a2 & 1) != 0 ) /*0x5359ee*/
    FormHeapFree((unsigned int)this); /*0x5359f1*/
  return this; /*0x5359fb*/
}
