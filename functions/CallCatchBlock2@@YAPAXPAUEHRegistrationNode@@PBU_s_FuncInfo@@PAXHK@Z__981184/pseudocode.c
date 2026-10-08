void __usercall _CallCatchBlock2(
        int a1@<edi>,
        int a2@<esi>,
        struct EHRegistrationNode *a3,
        const struct _s_FuncInfo *a4,
        void *a5,
        int a6,
        unsigned int a7)
{
  _DWORD v7[6]; // [esp+0h] [ebp-18h] BYREF

  v7[2] = (unsigned int)v7 ^ __security_cookie; /*0x98119b*/
  v7[3] = a4; /*0x9811a1*/
  v7[1] = CatchGuardHandler; /*0x9811a8*/
  v7[4] = a3; /*0x9811af*/
  v7[5] = a6 + 1; /*0x9811b2*/
  v7[0] = NtCurrentTeb()->Tib.ExceptionList; /*0x9811bb*/
  unknown_libname_88((int)a3, a1, a2, (int)a5, (int)a3, a7); /*0x9811ce*/
}
