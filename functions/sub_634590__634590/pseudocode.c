int __thiscall sub_634590(_DWORD *this)
{
  int (*v2)(void); // edx
  int result; // eax
  int (__thiscall *v4)(_DWORD *); // edx

  v2 = *(int (**)(void))(*this + 0x4CC); /*0x634595*/
  *(this + 0xB2) = 0; /*0x63459b*/
  *((_BYTE *)this + 0x2DC) = 0; /*0x6345a5*/
  result = v2(); /*0x6345ac*/
  if ( *(this + 0xB9) != result ) /*0x6345b4*/
  {
    v4 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x6345b8*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x6345c0*/
    result = v4(this); /*0x6345c7*/
    *(this + 0xB9) = result; /*0x6345c9*/
  }
  return result; /*0x6345cf*/
}
