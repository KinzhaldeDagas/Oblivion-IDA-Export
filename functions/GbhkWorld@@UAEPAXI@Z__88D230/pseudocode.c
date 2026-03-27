bhkWorld *__thiscall bhkWorld::`scalar deleting destructor'(bhkWorld *this, char a2)
{
  bhkWorld::~bhkWorld(this);
  if ( (a2 & 1) != 0 )
  {
    if ( this )
      MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF));
  }
  return this;
}
