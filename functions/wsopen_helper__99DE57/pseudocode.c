int __usercall _wsopen_helper@<eax>(int a1@<ebx>, LPCSTR lpFileName, int a3, int a4, int a5, int *a6, int a7)
{
  int result; // eax
  _BYTE *v8; // eax
  int v9; // [esp+14h] [ebp-20h]
  int v10; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v10 = 0;
  if ( !a6 || (*a6 = 0xFFFFFFFF, !lpFileName) || a7 && (a5 & 0xFFFFFE7F) != 0 )
  {
    *_errno() = 0x16;
    _invalid_parameter(a1, 0x16, 0);
    return 0x16;
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    v9 = _tsopen_nolock(a6, &v10, lpFileName, a3, a4, a5);
    ms_exc.registration.TryLevel = 0xFFFFFFFE;
    if ( v10 )
    {
      if ( v9 )
      {
        v8 = (_BYTE *)(dword_BAAAC0[*a6 >> 5] + 0x28 * (*a6 & 0x1F) + 4);
        *v8 &= ~1u;
      }
      _unlock_fhandle(*a6);
    }
    result = v9;
    if ( v9 )
      *a6 = 0xFFFFFFFF;
  }
  return result;
}
