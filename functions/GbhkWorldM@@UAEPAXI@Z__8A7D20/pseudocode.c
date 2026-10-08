bhkWorld *__thiscall bhkWorldM::`scalar deleting destructor'(bhkWorld *this, char a2)
{
  this->__vftable = (NiObjectVtbl *)&bhkWorldM::`vftable'; /*0x8a7d23*/
  bhkWorld::~bhkWorld(this); /*0x8a7d29*/
  if ( (a2 & 1) != 0 ) /*0x8a7d33*/
    MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF)); /*0x8a7d43*/
  return this; /*0x8a7d4a*/
}
