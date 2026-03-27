double __cdecl _floor_default_0(double a1)
{
  __int16 v1; // cx
  int v2; // ebx
  int v3; // eax
  __int16 v5; // [esp+10h] [ebp-14h]

  v2 = _ctrlfp(v1);
  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 )
  {
    v3 = _sptype(SLODWORD(a1), SHIDWORD(a1));
    if ( v3 <= 0 )
    {
LABEL_7:
      _except1(0xC00000008LL, SLODWORD(a1), SHIDWORD(a1), a1 + 1.0, v2);
      return a1;
    }
    if ( v3 > 2 )
    {
      if ( v3 == 3 )
        return _handle_qnan1(0xC, a1, v2);
      goto LABEL_7;
    }
  }
  else
  {
    _frnd(a1);
  }
  _ctrlfp(v5);
  return a1;
}
