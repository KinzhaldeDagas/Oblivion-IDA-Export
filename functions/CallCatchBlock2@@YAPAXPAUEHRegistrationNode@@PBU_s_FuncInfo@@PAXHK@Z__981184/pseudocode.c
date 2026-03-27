void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  _DWORD v6[6]; // [esp+0h] [ebp-18h] BYREF

  v6[2] = (unsigned int)v6 ^ __security_cookie;
  v6[3] = a2;
  v6[1] = CatchGuardHandler;
  v6[4] = a1;
  v6[5] = a4 + 1;
  v6[0] = NtCurrentTeb()->Tib.ExceptionList;
  return (void *)unknown_libname_88(a3, a1, a5);
}
