double __cdecl _handle_qnan1(int a1, double a2, int a3)
{
  if ( !dword_B320E8 )
    return _umatherr(
             1,
             a1,
             SLODWORD(a2),
             SHIDWORD(a2),
             COERCE_UNSIGNED_INT64(0.0),
             HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
             a2,
             a3);
  *_errno() = 0x21;
  _ctrlfp(a3, 0xFFFF);
  return a2;
}
