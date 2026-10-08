int __thiscall sub_634780(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int result; // eax
  int (__thiscall *v6)(_DWORD *); // edx

  v3 = 0; /*0x634787*/
  v4 = this + 0xB2; /*0x634789*/
  do /*0x6347ab*/
  {
    if ( *v4 == a2 ) /*0x634792*/
    {
      *v4 = 0; /*0x634794*/
      *((_BYTE *)this + v3 + 0x2DC) = 0; /*0x63479a*/
    }
    ++v3; /*0x6347a2*/
    ++v4; /*0x6347a5*/
  }
  while ( v3 < 5 ); /*0x6347ab*/
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x4CC))(this); /*0x6347b7*/
  if ( *(this + 0xB9) != result ) /*0x6347bf*/
  {
    v6 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x6347c3*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x6347cb*/
    result = v6(this); /*0x6347d2*/
    *(this + 0xB9) = result; /*0x6347d4*/
  }
  return result; /*0x6347da*/
}
