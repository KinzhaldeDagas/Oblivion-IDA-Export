int _wopen(const wchar_t *lpFileName, int a2, ...)
{
  int v2; // ebx
  int v3; // edi
  _BYTE *v5; // eax
  int v6; // [esp+10h] [ebp-24h]
  int v7; // [esp+14h] [ebp-20h] BYREF
  int v8; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]
  int v10; // [esp+44h] [ebp+10h]
  va_list va; // [esp+48h] [ebp+14h] BYREF

  va_start(va, a2);
  v10 = va_arg(va, _DWORD);
  v8 = 0xFFFFFFFF;
  v7 = 0;
  if ( !lpFileName )
  {
    *_errno() = 0x16;
    _invalid_parameter(v2, v3, 0);
    return 0xFFFFFFFF;
  }
  ms_exc.registration.TryLevel = 0;
  v6 = _tsopen_nolock(&v8, &v7, (LPCSTR)lpFileName, a2, 0x40, v10);
  ms_exc.registration.TryLevel = 0xFFFFFFFE;
  if ( v7 )
  {
    if ( v6 )
    {
      v5 = (_BYTE *)(dword_BAAAC0[v8 >> 5] + 0x28 * (v8 & 0x1F) + 4);
      *v5 &= ~1u;
    }
    _unlock_fhandle(v8);
  }
  if ( v6 )
  {
    *_errno() = v6;
    return 0xFFFFFFFF;
  }
  return v8;
}
