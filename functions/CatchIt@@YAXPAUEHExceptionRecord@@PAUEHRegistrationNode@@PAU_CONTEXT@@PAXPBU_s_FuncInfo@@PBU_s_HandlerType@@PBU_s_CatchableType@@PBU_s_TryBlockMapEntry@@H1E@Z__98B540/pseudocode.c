void __usercall CatchIt(
        int *a1@<ebx>,
        int *a2@<edi>,
        struct EHRegistrationNode *a3@<esi>,
        EXCEPTION_RECORD *ExceptionRecord,
        struct _CONTEXT *a5,
        struct _CONTEXT *a6,
        struct _s_FuncInfo *a7,
        const struct _s_FuncInfo *a8,
        struct _s_HandlerType *a9,
        struct _s_CatchableType *TargetFrame)
{
  void (__stdcall *v10)(void *, struct EHRegistrationNode *); // eax

  if ( a8 ) /*0x98b547*/
    __BuildCatchObject((int)ExceptionRecord, (int *)a3, a1, (int)a8); /*0x98b551*/
  if ( TargetFrame ) /*0x98b560*/
    unknown_libname_8(TargetFrame, ExceptionRecord); /*0x98b568*/
  else
    unknown_libname_8(a3, ExceptionRecord); /*0x98b563*/
  __FrameUnwindToState((int)a3, (int)a6, (int)a7, *a2); /*0x98b576*/
  a3->state = a2[1] + 1; /*0x98b58a*/
  v10 = (void (__stdcall *)(void *, struct EHRegistrationNode *))CallCatchBlock( /*0x98b597*/
                                                                   (struct EHExceptionRecord *)ExceptionRecord,
                                                                   a3,
                                                                   a5,
                                                                   a7,
                                                                   a9,
                                                                   0x100u);
  if ( v10 ) /*0x98b5a1*/
    _JumpToContinuation(v10, a3); /*0x98b5a5*/
}
