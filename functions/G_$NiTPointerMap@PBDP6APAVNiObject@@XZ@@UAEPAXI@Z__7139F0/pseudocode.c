unsigned int *__thiscall NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>::~NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>(this); /*0x7139f3*/
  if ( (a2 & 1) != 0 ) /*0x7139fd*/
    FormHeapFree((unsigned int)this); /*0x713a00*/
  return this; /*0x713a0a*/
}
