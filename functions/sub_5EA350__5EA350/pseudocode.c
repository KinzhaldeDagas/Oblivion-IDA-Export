int __thiscall sub_5EA350(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  int result; // eax
  _DWORD *v5; // ecx

  v3 = (_DWORD *)*(this + 0xD9); /*0x5ea353*/
  if ( v3 ) /*0x5ea360*/
    result = sub_89F4D0(v3, a2); /*0x5ea363*/
  v5 = (_DWORD *)*(this + 0xDA); /*0x5ea368*/
  if ( v5 ) /*0x5ea370*/
    return sub_89F4D0(v5, a2); /*0x5ea373*/
  return result; /*0x5ea378*/
}
