int __cdecl _InitializeGlobals_(int a1)
{
  int result; // eax
  void (**v2)(void); // esi

  if ( off_AA3E84 )
  {
    if ( _IsNonwritableInCurrentImage(&off_AA3E84) )
      off_AA3E84(a1);
  }
  _initp_misc_cfltcvt_tab();
  result = _initterm_e(_x__a_0, (unsigned int)&_x__z_0);
  if ( !result )
  {
    atexit(sub_98D7E1);
    v2 = (void (**)(void))&unk_A283D0;
    if ( &unk_A283D0 < (_UNKNOWN *)&dword_A2F77C )
    {
      do
      {
        if ( *v2 )
          (*v2)();
        ++v2;
      }
      while ( v2 < &dword_A2F77C );
    }
    if ( dword_BABC18 )
    {
      if ( _IsNonwritableInCurrentImage(&dword_BABC18) )
        ((void (__stdcall *)(_DWORD, int, _DWORD))dword_BABC18)(0, 2, 0);
    }
    return 0;
  }
  return result;
}
