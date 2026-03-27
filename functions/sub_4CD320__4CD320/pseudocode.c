_DWORD *__thiscall sub_4CD320(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *result; // eax

  if ( this )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x58))(this);
    if ( v3 )
      sub_899CA0(v3, a2);
  }
  result = (_DWORD *)(*(this + 0x1A) & 0x3FFFFFFF);
  if ( (_DWORD *)*(this + 0x19) == result )
    result = (_DWORD *)sub_8A6EE0((int)(this + 0x18), 4);
  *(_DWORD *)(*(this + 0x18) + 4 * (*(this + 0x19))++) = a2;
  if ( this )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x58))(this);
    if ( result )
    {
      if ( a2 )
      {
        result = (_DWORD *)sub_899CE0(result, a2 + 0x14);
        *(this + 9) = a2;
        return result;
      }
      result = (_DWORD *)sub_899CE0(result, 0);
    }
  }
  *(this + 9) = a2;
  return result;
}
