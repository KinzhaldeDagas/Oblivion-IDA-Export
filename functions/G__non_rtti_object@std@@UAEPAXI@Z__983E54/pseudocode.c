std::__non_rtti_object *__thiscall std::__non_rtti_object::`scalar deleting destructor'(
        std::__non_rtti_object *this,
        char a2)
{
  *(_DWORD *)this = &std::bad_typeid::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
