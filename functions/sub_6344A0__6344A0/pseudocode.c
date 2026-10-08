int __thiscall sub_6344A0(_DWORD *this, int a2)
{
  int v3; // edx
  int (*v4)(void); // eax
  int result; // eax
  int (__thiscall *v6)(_DWORD *); // eax

  v3 = *this; /*0x6344a7*/
  *(this + 0xB5) = a2; /*0x6344a9*/
  v4 = *(int (**)(void))(v3 + 0x4CC); /*0x6344af*/
  *((_BYTE *)this + 0x2DF) = 1; /*0x6344b5*/
  result = v4(); /*0x6344bc*/
  if ( *(this + 0xB9) != result ) /*0x6344c4*/
  {
    v6 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x6344c8*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x6344d0*/
    result = v6(this); /*0x6344d7*/
    *(this + 0xB9) = result; /*0x6344d9*/
  }
  return result; /*0x6344df*/
}
