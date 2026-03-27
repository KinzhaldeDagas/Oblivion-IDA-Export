void __cdecl FindHandlerForForeignException(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        struct _CONTEXT *a4,
        struct _s_FuncInfo *a5,
        int a6,
        struct _s_HandlerType *a7,
        struct _s_CatchableType *a8)
{
  _DWORD *v8; // edi
  int v9; // esi
  TryBlockMapEntry *i; // edi
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // [esp+4h] [ebp-8h] BYREF
  unsigned int v14; // [esp+8h] [ebp-4h] BYREF

  if ( a1->ExceptionCode != 0x80000003 )
  {
    if ( !*(_DWORD *)(_getptd() + 0x80)
      || (v8 = (_DWORD *)(_getptd() + 0x80), *v8 == _encoded_null())
      || a1->ExceptionCode == 0xE0434F4D
      || !unknown_libname_10(a1, a2, (int)a3, (int)a4, (int)a5, (int)a7, (int)a8) )
    {
      if ( !a5->nTryBlocks )
        _inconsistency();
      v9 = a6;
      for ( i = _GetRangeOfTrysToCheck(a5, (int)a7, a6, &v14, &v13); v14 < v13; ++i )
      {
        if ( v9 >= i->tryLow && v9 <= i->tryHigh )
        {
          v11 = (int)i->pHandlerArray + 0x10 * i->nCatches;
          v12 = *(_DWORD *)(v11 - 0xC);
          if ( (!v12 || !*(_BYTE *)(v12 + 8)) && (*(_BYTE *)(v11 - 0x10) & 0x40) == 0 )
          {
            CatchIt((int *)(v11 - 0x10), &i->tryLow, a2, (EXCEPTION_RECORD *)a1, a3, a4, a5, 0, a7, a8);
            v9 = a6;
          }
        }
        ++v14;
      }
    }
  }
}
