_DWORD *__thiscall sub_708E40(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  bool v4; // zf
  _DWORD *v5; // eax
  int v6; // ecx

  result = (_DWORD *)*(this + 0x30);
  if ( result )
  {
    while ( 1 )
    {
      v4 = a2 == (_DWORD *)result[2];
      result = (_DWORD *)*result;
      if ( v4 )
        break;
      if ( !result )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x2F) + 4))(this + 0x2F);
    v5[2] = a2;
    v5[1] = 0;
    *v5 = *(this + 0x30);
    v6 = *(this + 0x30);
    if ( v6 )
      *(_DWORD *)(v6 + 4) = v5;
    else
      *(this + 0x31) = v5;
    ++*(this + 0x32);
    *(this + 0x30) = v5;
    return sub_708E40(a2, (int)this);
  }
  return result;
}
