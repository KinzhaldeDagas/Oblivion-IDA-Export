unsigned int *__thiscall NiTPointerMap<Actor *,PathingData *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<Actor *,PathingData *>::~NiTPointerMap<Actor *,PathingData *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
