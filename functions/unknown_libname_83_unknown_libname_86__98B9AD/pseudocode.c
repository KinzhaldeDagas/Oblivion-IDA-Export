// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_83_::unknown_libname_86@<eax>(int a1@<ebp>, struct EHExceptionRecord *a2@<esi>)
{
  struct _s_FuncInfo *v2; // ebx
  int result; // eax

  v2 = *(struct _s_FuncInfo **)(a1 + 0x18);
  if ( v2->nTryBlocks )
  {
    if ( *(_BYTE *)(a1 + 0x1C) )
      JUMPOUT(0x98B7DC);
    FindHandlerForForeignException(
      a2,
      *(struct EHRegistrationNode **)(a1 + 0xC),
      *(struct _CONTEXT **)(a1 + 0x10),
      *(struct _CONTEXT **)(a1 + 0x14),
      v2,
      *(_DWORD *)(a1 - 8),
      *(struct _s_HandlerType **)(a1 + 0x20),
      *(struct _s_CatchableType **)(a1 + 0x24));
  }
  result = _getptd();
  if ( *(_DWORD *)(result + 0x94) )
    _inconsistency();
  return result;
}
