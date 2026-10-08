int __thiscall sub_634630(_DWORD *this)
{
  int (*v2)(void); // edx
  int result; // eax
  int (__thiscall *v4)(_DWORD *); // edx

  v2 = *(int (**)(void))(*this + 0x4CC); /*0x634635*/
  *(this + 0xB4) = 0; /*0x63463b*/
  *((_BYTE *)this + 0x2DE) = 0; /*0x634645*/
  result = v2(); /*0x63464c*/
  if ( *(this + 0xB9) != result ) /*0x634654*/
  {
    v4 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x634658*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x634660*/
    result = v4(this); /*0x634667*/
    *(this + 0xB9) = result; /*0x634669*/
  }
  return result; /*0x63466f*/
}
