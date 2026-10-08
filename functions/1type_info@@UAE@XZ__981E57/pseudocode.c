void __thiscall type_info::~type_info(type_info *this)
{
  *(_DWORD *)this = &type_info::`vftable'; /*0x981e58*/
  type_info::_Type_info_dtor(this); /*0x981e5e*/
}
