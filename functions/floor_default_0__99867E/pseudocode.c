double __cdecl _floor_default_0(double a1)
{
  __int16 v1; // cx
  __int16 v2; // bx
  int v3; // eax
  __int16 v5; // [esp+10h] [ebp-14h]
  __int16 v6; // [esp+10h] [ebp-14h]
  double v7; // [esp+1Ch] [ebp-8h]

  v2 = _ctrlfp(v1); /*0x99869b*/
  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 ) /*0x9986ad*/
  {
    v3 = _sptype(SLODWORD(a1), SHIDWORD(a1)); /*0x9986af*/
    if ( v3 > 0 ) /*0x9986b8*/
    {
      if ( v3 <= 2 ) /*0x9986bd*/
      {
        _ctrlfp(v5); /*0x9986db*/
        return a1; /*0x9986e5*/
      }
      if ( v3 == 3 ) /*0x9986c2*/
        return _handle_qnan1(0xC, a1); /*0x9986d7*/
    }
    _except1(0xC00000008LL, SLODWORD(a1), SHIDWORD(a1), a1 + 1.0, v2); /*0x998702*/
    return a1; /*0x9986f8*/
  }
  else
  {
    v7 = _frnd(a1); /*0x998709*/
    if ( a1 == v7 || (v2 & 0x20) != 0 ) /*0x99872c*/
    {
      _ctrlfp(v6); /*0x99871d*/
      return v7; /*0x998722*/
    }
    else
    {
      _except1(0xC00000010LL, SLODWORD(a1), SHIDWORD(a1), v7, v2); /*0x998743*/
      return a1; /*0x998739*/
    }
  }
}
