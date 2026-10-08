hkNiTriStripsShape *__thiscall hkNiTriStripsShape::`scalar deleting destructor'(hkNiTriStripsShape *this, char a2)
{
  hkNiTriStripsShape::~hkNiTriStripsShape(this); /*0x9162e3*/
  if ( (a2 & 1) != 0 ) /*0x9162ed*/
  {
    if ( this ) /*0x9162f1*/
      MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF)); /*0x916301*/
  }
  return this; /*0x916308*/
}
