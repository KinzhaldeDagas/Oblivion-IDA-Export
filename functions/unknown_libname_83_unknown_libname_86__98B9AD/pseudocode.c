// positive sp value has been detected, the output may be wrong!
DWORD *__usercall unknown_libname_83_::unknown_libname_86@<eax>(int a1@<ebp>, struct EHExceptionRecord *a2@<esi>)
{
  struct _s_FuncInfo *v2; // ebx
  DWORD *result; // eax

  v2 = *(struct _s_FuncInfo **)(a1 + 0x18); /*0x98b9ad*/
  if ( v2->nTryBlocks ) /*0x98b9b0*/
  {
    if ( *(_BYTE *)(a1 + 0x1C) ) /*0x98b9b6*/
      JUMPOUT(0x98B7DC); /*0x98b7dc*/
    FindHandlerForForeignException( /*0x98b9d4*/
      a2,
      *(struct EHRegistrationNode **)(a1 + 0xC),
      *(struct _CONTEXT **)(a1 + 0x10),
      *(struct _CONTEXT **)(a1 + 0x14),
      v2,
      *(_DWORD *)(a1 - 8),
      *(struct _s_HandlerType **)(a1 + 0x20),
      *(struct _s_CatchableType **)(a1 + 0x24));
  }
  result = _getptd(); /*0x98b9dc*/
  if ( result[0x25] ) /*0x98b9e1*/
    _inconsistency(); /*0x98b9ea*/
  return result; /*0x98b9f3*/
}
