hkWorldRayCaster *__thiscall hkWorldRayCaster::`scalar deleting destructor'(hkWorldRayCaster *this, char a2)
{
  this->__vftable = &hkBroadPhaseCastCollector::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
