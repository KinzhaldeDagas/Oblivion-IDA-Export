std::__non_rtti_object *__thiscall std::__non_rtti_object::`scalar deleting destructor'(
        std::__non_rtti_object *this,
        char a2)
{
  *(_DWORD *)this = &std::bad_typeid::`vftable'; /*0x983e57*/
  std::exception::~exception(this); /*0x983e5d*/
  if ( (a2 & 1) != 0 ) /*0x983e67*/
    FormHeapFree((unsigned int)this); /*0x983e6a*/
  return this; /*0x983e72*/
}
