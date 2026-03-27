bhkWorld *__thiscall bhkWorldM::`scalar deleting destructor'(bhkWorld *this, char a2)
{
  this->__vftable = (NiObjectVtbl *)&bhkWorldM::`vftable';
  bhkWorld::~bhkWorld(this);
  if ( (a2 & 1) != 0 )
    MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF));
  return this;
}
