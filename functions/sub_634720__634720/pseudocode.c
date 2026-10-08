int __thiscall sub_634720(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int result; // eax
  int (__thiscall *v5)(_DWORD *); // edx

  v2 = 0; /*0x634723*/
  v3 = this + 0xB2; /*0x634725*/
  do /*0x634747*/
  {
    *v3 = 0; /*0x634730*/
    *((_BYTE *)this + v2++ + 0x2DC) = 0; /*0x634736*/
    ++v3; /*0x634741*/
  }
  while ( v2 < 5 ); /*0x634747*/
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x4CC))(this); /*0x634753*/
  if ( *(this + 0xB9) != result ) /*0x63475b*/
  {
    v5 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x63475f*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x634767*/
    result = v5(this); /*0x63476e*/
    *(this + 0xB9) = result; /*0x634770*/
  }
  return result; /*0x634776*/
}
