void __cdecl _except1(__int64 dwExceptionCode, int a2, int a3, double a4, int a5)
{
  int v5; // eax
  ULONG_PTR v6; // [esp+0h] [ebp-9Ch]
  int Arguments; // [esp+1Ch] [ebp-80h] BYREF
  int v8; // [esp+5Ch] [ebp-40h]

  if ( !_handle_exc(dwExceptionCode, &a4, a5) )
  {
    v8 &= ~1u;
    HIDWORD(v6) = &a5;
    LODWORD(v6) = &Arguments;
    _raise_exc_ex(v6, dwExceptionCode, SHIDWORD(dwExceptionCode), (float *)&a2, (float *)&a4, 0);
  }
  v5 = _errcode(dwExceptionCode);
  if ( dword_B320E8 || !v5 )
  {
    unknown_libname_166(v5);
    _ctrlfp(a5, 0xFFFF);
  }
  else
  {
    _umatherr(
      v5,
      SHIDWORD(dwExceptionCode),
      a2,
      a3,
      COERCE_UNSIGNED_INT64(0.0),
      HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
      a4,
      a5);
  }
}
