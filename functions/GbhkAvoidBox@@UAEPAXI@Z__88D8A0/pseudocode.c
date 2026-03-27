bhkAvoidBox *__thiscall bhkAvoidBox::`scalar deleting destructor'(bhkAvoidBox *this, char a2)
{
  *(_DWORD *)this = &bhkAvoidBox::`vftable';
  bhkAabbPhantom::~bhkAabbPhantom(this);
  if ( (a2 & 1) != 0 )
    MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF));
  return this;
}
