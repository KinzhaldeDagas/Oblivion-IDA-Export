unsigned int *__thiscall NiTPointerMap<int,NiPointer<NiAVObject>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<int,NiPointer<NiAVObject>>::~NiTPointerMap<int,NiPointer<NiAVObject>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
