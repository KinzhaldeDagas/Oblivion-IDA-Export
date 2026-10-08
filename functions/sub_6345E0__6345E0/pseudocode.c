int __thiscall sub_6345E0(_DWORD *this)
{
  int (*v2)(void); // edx
  int result; // eax
  int (__thiscall *v4)(_DWORD *); // edx

  v2 = *(int (**)(void))(*this + 0x4CC); /*0x6345e5*/
  *(this + 0xB3) = 0; /*0x6345eb*/
  *((_BYTE *)this + 0x2DD) = 0; /*0x6345f5*/
  result = v2(); /*0x6345fc*/
  if ( *(this + 0xB9) != result ) /*0x634604*/
  {
    v4 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x634608*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x634610*/
    result = v4(this); /*0x634617*/
    *(this + 0xB9) = result; /*0x634619*/
  }
  return result; /*0x63461f*/
}
