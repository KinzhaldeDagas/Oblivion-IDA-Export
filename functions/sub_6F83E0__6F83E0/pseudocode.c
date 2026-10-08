_DWORD *__thiscall sub_6F83E0(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ecx

  v2 = this; /*0x6f83ea*/
  if ( !*(this + 0x13) ) /*0x6f83e6*/
    goto LABEL_5; /*0x6f83e6*/
  if ( !sub_6F7AB0(this) ) /*0x6f83ee*/
    v2 = 0; /*0x6f83f7*/
  if ( fclose((FILE *)*(this + 0x13)) ) /*0x6f83fd*/
LABEL_5:
    v2 = 0; /*0x6f8409*/
  *((_BYTE *)this + 0x48) = 0; /*0x6f840d*/
  *((_BYTE *)this + 0x41) = 0; /*0x6f8410*/
  sub_6F6F40(this); /*0x6f8413*/
  *(this + 0x13) = 0; /*0x6f8418*/
  v3 = *(_DWORD *)&destination[0x100]; /*0x6f841b*/
  *(this + 0xF) = 0; /*0x6f8424*/
  *(this + 0x11) = v3; /*0x6f8427*/
  return v2; /*0x6f8423*/
}
