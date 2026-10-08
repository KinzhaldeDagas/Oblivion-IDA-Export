_DWORD *__thiscall NiTStringPointerMap<NiObject * (__cdecl *)(void)>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  NiTStringPointerMap<NiObject * (__cdecl *)(void)>::~NiTStringPointerMap<NiObject * (__cdecl *)(void)>(this); /*0x7146d3*/
  if ( (a2 & 1) != 0 ) /*0x7146dd*/
    FormHeapFree((unsigned int)this); /*0x7146e0*/
  return this; /*0x7146ea*/
}
