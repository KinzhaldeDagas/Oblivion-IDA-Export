hkNiTriStripsShape *__thiscall hkNiTriStripsShape::`scalar deleting destructor'(hkNiTriStripsShape *this, char a2)
{
  hkNiTriStripsShape::~hkNiTriStripsShape(this);
  if ( (a2 & 1) != 0 )
  {
    if ( this )
      MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF));
  }
  return this;
}
