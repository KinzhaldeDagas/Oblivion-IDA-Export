SpecificItemCollector *__thiscall SpecificItemCollector::`scalar deleting destructor'(
        SpecificItemCollector *this,
        char a2)
{
  *(_DWORD *)this = &hkRayHitCollector::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
