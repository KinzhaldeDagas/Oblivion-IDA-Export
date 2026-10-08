int __thiscall sub_6346D0(_DWORD *this)
{
  int (*v2)(void); // edx
  int result; // eax
  int (__thiscall *v4)(_DWORD *); // edx

  v2 = *(int (**)(void))(*this + 0x4CC); /*0x6346d5*/
  *(this + 0xB6) = 0; /*0x6346db*/
  *((_BYTE *)this + 0x2E0) = 0; /*0x6346e5*/
  result = v2(); /*0x6346ec*/
  if ( *(this + 0xB9) != result ) /*0x6346f4*/
  {
    v4 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x6346f8*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x634700*/
    result = v4(this); /*0x634707*/
    *(this + 0xB9) = result; /*0x634709*/
  }
  return result; /*0x63470f*/
}
