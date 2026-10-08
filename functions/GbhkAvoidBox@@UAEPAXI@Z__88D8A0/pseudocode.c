bhkSerializable *__thiscall bhkAvoidBox::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  this->__vftable = (NiObjectVtbl *)&bhkAvoidBox::`vftable'; /*0x88d8a3*/
  bhkAabbPhantom::~bhkAabbPhantom(this); /*0x88d8a9*/
  if ( (a2 & 1) != 0 ) /*0x88d8b3*/
    MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF)); /*0x88d8c3*/
  return this; /*0x88d8ca*/
}
