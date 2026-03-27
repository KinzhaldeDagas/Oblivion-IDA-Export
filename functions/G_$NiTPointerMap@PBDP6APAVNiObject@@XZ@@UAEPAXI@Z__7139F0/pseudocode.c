unsigned int *__thiscall NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>::~NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
