bhkWorld *__thiscall bhkWorld::`scalar deleting destructor'(bhkWorld *this, char a2)
{
  bhkWorld::~bhkWorld(this); /*0x88d233*/
  if ( (a2 & 1) != 0 ) /*0x88d23d*/
  {
    if ( this ) /*0x88d241*/
      MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF)); /*0x88d251*/
  }
  return this; /*0x88d258*/
}
