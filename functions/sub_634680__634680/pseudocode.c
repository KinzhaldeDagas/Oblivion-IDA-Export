int __thiscall sub_634680(_DWORD *this)
{
  int (*v2)(void); // edx
  int result; // eax
  int (__thiscall *v4)(_DWORD *); // edx

  v2 = *(int (**)(void))(*this + 0x4CC); /*0x634685*/
  *(this + 0xB5) = 0; /*0x63468b*/
  *((_BYTE *)this + 0x2DF) = 0; /*0x634695*/
  result = v2(); /*0x63469c*/
  if ( *(this + 0xB9) != result ) /*0x6346a4*/
  {
    v4 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x6346a8*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x6346b0*/
    result = v4(this); /*0x6346b7*/
    *(this + 0xB9) = result; /*0x6346b9*/
  }
  return result; /*0x6346bf*/
}
