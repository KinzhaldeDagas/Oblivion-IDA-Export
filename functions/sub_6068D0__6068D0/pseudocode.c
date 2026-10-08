// RadiantAI: AlarmPackage constructor candidate with actor/ref argument. Hooked by RadiantAIRestored only for opt-in logging.
TESPackage *__thiscall sub_6068D0(TESPackage *this, int a2)
{
  _DWORD *v3; // eax

  TESPackage::TESPackage(this); /*0x6068f8*/
  this->__vftable = &AlarmPackage::`vftable'; /*0x606907*/
  v3 = (_DWORD *)FormHeapAlloc(8u); /*0x60690d*/
  if ( v3 ) /*0x606917*/
  {
    *v3 = 0; /*0x606919*/
    v3[1] = 0; /*0x60691f*/
  }
  else
  {
    v3 = 0; /*0x606928*/
  }
  *((_DWORD *)this + 0xF) = v3; /*0x606930*/
  if ( a2 ) /*0x606933*/
    BSSimpleList_PushFront(v3, a2); /*0x606938*/
  return this; /*0x60693f*/
}
