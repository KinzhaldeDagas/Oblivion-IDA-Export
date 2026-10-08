_DWORD *__thiscall sub_708E40(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  bool v4; // zf
  _DWORD *v5; // eax
  int v6; // ecx

  result = (_DWORD *)*(this + 0x30); /*0x708e43*/
  if ( result ) /*0x708e50*/
  {
    while ( 1 ) /*0x708e52*/
    {
      v4 = a2 == (_DWORD *)result[2]; /*0x708e52*/
      result = (_DWORD *)*result; /*0x708e5a*/
      if ( v4 ) /*0x708e5c*/
        break; /*0x708e5c*/
      if ( !result ) /*0x708e60*/
        goto LABEL_6; /*0x708e60*/
    }
  }
  else
  {
LABEL_6:
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x2F) + 4))(this + 0x2F); /*0x708e68*/
    v5[2] = a2; /*0x708e7c*/
    v5[1] = 0; /*0x708e7f*/
    *v5 = *(this + 0x30); /*0x708e89*/
    v6 = *(this + 0x30); /*0x708e8b*/
    if ( v6 ) /*0x708e90*/
      *(_DWORD *)(v6 + 4) = v5; /*0x708e92*/
    else
      *(this + 0x31) = v5; /*0x708e97*/
    ++*(this + 0x32); /*0x708e9a*/
    *(this + 0x30) = v5; /*0x708ea1*/
    return sub_708E40(a2, this); /*0x708ea4*/
  }
  return result; /*0x708eaa*/
}
