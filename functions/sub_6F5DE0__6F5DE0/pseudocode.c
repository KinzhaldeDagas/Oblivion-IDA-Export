signed int __thiscall sub_6F5DE0(_DWORD *this, unsigned int a2, unsigned int a3, _DWORD *a4, unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v6; // eax
  _DWORD *v7; // edi
  signed int result; // eax

  if ( *(this + 5) < a2 ) /*0x6f5ded*/
    std::_String_base::_Xran(); /*0x6f5def*/
  v5 = a3; /*0x6f5df7*/
  if ( *(this + 5) - a2 < a3 ) /*0x6f5dff*/
    v5 = *(this + 5) - a2; /*0x6f5e01*/
  v6 = v5; /*0x6f5e09*/
  if ( v5 >= a5 ) /*0x6f5e0b*/
    v6 = a5; /*0x6f5e0d*/
  if ( *(this + 6) < 0x10u ) /*0x6f5e13*/
    v7 = this + 1; /*0x6f5e1a*/
  else
    v7 = (_DWORD *)*(this + 1); /*0x6f5e15*/
  result = sub_6F5CB0((_DWORD *)((char *)v7 + a2), a4, v6); /*0x6f5e26*/
  if ( !result ) /*0x6f5e30*/
  {
    if ( v5 >= a5 ) /*0x6f5e34*/
      return v5 != a5; /*0x6f5e44*/
    else
      return 0xFFFFFFFF; /*0x6f5e39*/
  }
  return result; /*0x6f5e36*/
}
