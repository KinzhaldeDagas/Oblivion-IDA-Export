double __cdecl _floor_default(double a1)
{
  __int16 v1; // cx
  __int16 v2; // bx
  int v3; // eax
  __int16 v5; // [esp+10h] [ebp-14h]
  __int16 v6; // [esp+10h] [ebp-14h]
  double v7; // [esp+1Ch] [ebp-8h]

  v2 = _ctrlfp(v1); /*0x993e65*/
  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 ) /*0x993e77*/
  {
    v3 = _sptype(SLODWORD(a1), SHIDWORD(a1)); /*0x993e79*/
    if ( v3 > 0 ) /*0x993e82*/
    {
      if ( v3 <= 2 ) /*0x993e87*/
      {
        _ctrlfp(v5); /*0x993ea5*/
        return a1; /*0x993eaf*/
      }
      if ( v3 == 3 ) /*0x993e8c*/
        return _handle_qnan1(0xB, a1); /*0x993ea1*/
    }
    _except1(0xB00000008LL, SLODWORD(a1), SHIDWORD(a1), a1 + 1.0, v2); /*0x993ecc*/
    return a1; /*0x993ec2*/
  }
  else
  {
    v7 = _frnd(a1); /*0x993ed3*/
    if ( a1 == v7 || (v2 & 0x20) != 0 ) /*0x993ef6*/
    {
      _ctrlfp(v6); /*0x993ee7*/
      return v7; /*0x993eec*/
    }
    else
    {
      _except1(0xB00000010LL, SLODWORD(a1), SHIDWORD(a1), v7, v2); /*0x993f0d*/
      return a1; /*0x993f03*/
    }
  }
}
