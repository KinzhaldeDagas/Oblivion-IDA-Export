_DWORD *__thiscall NiTStringPointerMap<NiObject * (__cdecl *)(void)>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  NiTStringPointerMap<NiObject * (__cdecl *)(void)>::~NiTStringPointerMap<NiObject * (__cdecl *)(void)>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
