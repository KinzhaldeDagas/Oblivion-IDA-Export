unsigned int *__thiscall NiTPointerMap<NiObject *,NiObject *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<NiObject *,NiObject *>::~NiTPointerMap<NiObject *,NiObject *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
