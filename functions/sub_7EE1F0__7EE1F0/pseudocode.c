int __thiscall sub_7EE1F0(_DWORD *this)
{
  _DWORD *v1; // eax

  if ( !*(this + 0x24) ) /*0x7ee1f0*/
    return 0; /*0x7ee20b*/
  v1 = (_DWORD *)*(this + 0x24); /*0x7ee1f9*/
  *(this + 0x24) = *v1; /*0x7ee201*/
  return v1[2]; /*0x7ee20a*/
}
