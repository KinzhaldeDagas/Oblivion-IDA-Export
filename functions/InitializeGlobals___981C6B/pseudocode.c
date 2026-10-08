// Verified (Oblivion CRT): CRT_InitializeGlobals runs _initterm_e and then iterates function pointers in g_CppGlobalInitializersBegin..End before later startup. The inspected initializer ranges contain no direct pointers to ActiveEffect_Register_*_Factory or ActiveEffectCreatorMap_GlobalCtor; invocation of those routines is Unknown.
int __cdecl CRT_InitializeGlobals(int initializeCRTGlobals)
{
  int result; // eax
  CppGlobalInitRoutine *i; // esi

  if ( off_AA3E84 ) /*0x981c6b*/
  {
    if ( _IsNonwritableInCurrentImage((int)&off_AA3E84) ) /*0x981c79*/
      off_AA3E84(initializeCRTGlobals); /*0x981c87*/
  }
  _initp_misc_cfltcvt_tab(); /*0x981c8e*/
  result = _initterm_e(_x__a_0, (unsigned int)&_x__z_0); /*0x981c9d*/
  if ( !result ) /*0x981ca6*/
  {
    atexit(sub_98D7E1); /*0x981caf*/
    for ( i = &g_CppGlobalInitializersBegin; i < &g_CppGlobalInitializersEnd; ++i ) /*0x981cc3*/
    {
      if ( *i ) /*0x981cc5*/
        (*i)(); /*0x981ccb*/
    }
    if ( dword_BABC18[0] ) /*0x981cd4*/
    {
      if ( _IsNonwritableInCurrentImage((int)dword_BABC18) ) /*0x981ce4*/
        ((void (__stdcall *)(_DWORD, int, _DWORD))dword_BABC18[0])(0, 2, 0); /*0x981cf4*/
    }
    return 0; /*0x981cfa*/
  }
  return result; /*0x981cfc*/
}
