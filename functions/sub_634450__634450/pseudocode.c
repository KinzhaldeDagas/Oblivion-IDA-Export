int __thiscall sub_634450(_DWORD *this, int a2)
{
  int v3; // edx
  int (*v4)(void); // eax
  int result; // eax
  int (__thiscall *v6)(_DWORD *); // eax

  v3 = *this; /*0x634457*/
  *(this + 0xB4) = a2; /*0x634459*/
  v4 = *(int (**)(void))(v3 + 0x4CC); /*0x63445f*/
  *((_BYTE *)this + 0x2DE) = 1; /*0x634465*/
  result = v4(); /*0x63446c*/
  if ( *(this + 0xB9) != result ) /*0x634474*/
  {
    v6 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x634478*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x634480*/
    result = v6(this); /*0x634487*/
    *(this + 0xB9) = result; /*0x634489*/
  }
  return result; /*0x63448f*/
}
