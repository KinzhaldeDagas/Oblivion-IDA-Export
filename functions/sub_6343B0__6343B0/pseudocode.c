int __thiscall sub_6343B0(_DWORD *this, int a2)
{
  int v3; // edx
  int (*v4)(void); // eax
  int result; // eax
  int (__thiscall *v6)(_DWORD *); // eax

  v3 = *this; /*0x6343b7*/
  *(this + 0xB2) = a2; /*0x6343b9*/
  v4 = *(int (**)(void))(v3 + 0x4CC); /*0x6343bf*/
  *((_BYTE *)this + 0x2DC) = 1; /*0x6343c5*/
  result = v4(); /*0x6343cc*/
  if ( *(this + 0xB9) != result ) /*0x6343d4*/
  {
    v6 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x6343d8*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x6343e0*/
    result = v6(this); /*0x6343e7*/
    *(this + 0xB9) = result; /*0x6343e9*/
  }
  return result; /*0x6343ef*/
}
