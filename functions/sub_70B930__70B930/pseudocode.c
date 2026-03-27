_DWORD *__thiscall sub_70B930(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  bool v5; // zf

  result = (_DWORD *)*(this + 0x30);
  if ( result )
  {
    v4 = a2;
    while ( 1 )
    {
      v5 = a2 == (_DWORD *)result[2];
      result = (_DWORD *)*result;
      if ( v5 )
        break;
      if ( !result )
        return result;
    }
    sub_776690(this + 0x2F, (int *)&a2);
    return sub_70B930(v4, (int)this);
  }
  return result;
}
