int __thiscall sub_634540(_DWORD *this, int a2)
{
  int v3; // edx
  int (*v4)(void); // eax
  int result; // eax
  int (__thiscall *v6)(_DWORD *); // eax

  v3 = *this; /*0x634547*/
  *(this + 0xB6) = a2; /*0x634549*/
  v4 = *(int (**)(void))(v3 + 0x4CC); /*0x63454f*/
  *((_BYTE *)this + 0x2E0) = 1; /*0x634555*/
  result = v4(); /*0x63455c*/
  if ( *(this + 0xB9) != result ) /*0x634564*/
  {
    v6 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x634568*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x634570*/
    result = v6(this); /*0x634577*/
    *(this + 0xB9) = result; /*0x634579*/
  }
  return result; /*0x63457f*/
}
