NiAVObject *__thiscall NiAVObject::`scalar deleting destructor'(NiAVObject *this, char a2)
{
  NiAVObject::~NiAVObject(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
