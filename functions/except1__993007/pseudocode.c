void __cdecl _except1(__int64 dwExceptionCode, int a2, int a3, double a4, __int16 a5)
{
  __int16 v5; // fps
  int v6; // eax
  __int16 v7; // cx
  ULONG_PTR v8; // [esp+0h] [ebp-9Ch]
  int Arguments; // [esp+1Ch] [ebp-80h] BYREF
  int v10; // [esp+5Ch] [ebp-40h]

  if ( !_handle_exc(dwExceptionCode, &a4, a5) ) /*0x993028*/
  {
    v10 &= ~1u; /*0x993034*/
    HIDWORD(v8) = &a5; /*0x99304b*/
    LODWORD(v8) = &Arguments; /*0x993050*/
    _raise_exc_ex(v5, v8, dwExceptionCode, SHIDWORD(dwExceptionCode), (float *)&a2, (float *)&a4, 0); /*0x993051*/
  }
  v6 = _errcode(dwExceptionCode); /*0x99305c*/
  if ( dword_B320E8 || !v6 ) /*0x99306f*/
  {
    unknown_libname_166(v6); /*0x993099*/
    _ctrlfp(v7); /*0x9930a8*/
  }
  else
  {
    _umatherr( /*0x99308e*/
      v6,
      SHIDWORD(dwExceptionCode),
      a2,
      a3,
      COERCE_UNSIGNED_INT64(0.0),
      HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
      a4);
  }
}
