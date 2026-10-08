double __cdecl _handle_qnan1(int a1, double a2)
{
  __int16 v3; // cx

  if ( !dword_B320E8 ) /*0x992fbe*/
    return _umatherr( /*0x992fde*/
             1,
             a1,
             SLODWORD(a2),
             SHIDWORD(a2),
             COERCE_UNSIGNED_INT64(0.0),
             HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
             a2);
  *_errno() = 0x21; /*0x992ff5*/
  _ctrlfp(v3); /*0x992ffb*/
  return a2; /*0x992fe6*/
}
