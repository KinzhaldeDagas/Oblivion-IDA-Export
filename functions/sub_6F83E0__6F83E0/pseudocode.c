_DWORD *__thiscall sub_6F83E0(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ecx

  v2 = this;
  if ( !*(this + 0x13) )
    goto LABEL_5;
  if ( !sub_6F7AB0(this) )
    v2 = 0;
  if ( fclose((FILE *)*(this + 0x13)) )
LABEL_5:
    v2 = 0;
  *((_BYTE *)this + 0x48) = 0;
  *((_BYTE *)this + 0x41) = 0;
  sub_6F6F40(this);
  *(this + 0x13) = 0;
  v3 = dword_B3F16C;
  *(this + 0xF) = 0;
  *(this + 0x11) = v3;
  return v2;
}
