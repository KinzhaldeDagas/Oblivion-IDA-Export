int __cdecl unknown_libname_83(struct EHExceptionRecord *a1, int a2, DWORD a3, int a4, int a5)
{
  int v5; // eax
  signed int v6; // ecx
  unsigned int magicNumber; // eax
  struct EHExceptionRecord *v8; // esi
  unsigned int v9; // eax
  int *v10; // edi
  DWORD *v11; // eax
  int v12; // esi
  int v14; // ebx
  struct EHExceptionRecord *v15; // [esp-4h] [ebp-3Ch]
  _DWORD v16[10]; // [esp+Ch] [ebp-2Ch] BYREF
  char v17; // [esp+37h] [ebp-1h]

  v5 = *(_DWORD *)(a5 + 4); /*0x98b6ab*/
  v17 = 0; /*0x98b6b5*/
  if ( v5 > 0x80 ) /*0x98b6b9*/
    v6 = *(_DWORD *)(a2 + 8); /*0x98b6c1*/
  else
    v6 = *(char *)(a2 + 8); /*0x98b6bb*/
  v16[9] = v6; /*0x98b6c7*/
  if ( v6 < (int)0xFFFFFFFF || v6 >= v5 ) /*0x98b6ce*/
    _inconsistency(); /*0x98b6d0*/
  if ( a1->ExceptionCode != 0xE06D7363 ) /*0x98b6df*/
    JUMPOUT(0x98B9B0); /*0x98b9b0*/
  if ( a1->NumberParameters != 3 ) /*0x98b6ee*/
    goto LABEL_38; /*0x98b6ee*/
  magicNumber = a1->params.magicNumber; /*0x98b6f4*/
  if ( magicNumber != 0x19930520 && magicNumber != 0x19930521 && magicNumber != 0x19930522 ) /*0x98b707*/
    goto LABEL_38; /*0x98b707*/
  if ( a1->params.pThrowInfo ) /*0x98b70d*/
    goto LABEL_38; /*0x98b70d*/
  if ( !_getptd()[0x22] ) /*0x98b723*/
    JUMPOUT(0x98B9EF); /*0x98b9ef*/
  v8 = (struct EHExceptionRecord *)_getptd()[0x22]; /*0x98b72e*/
  a1 = v8; /*0x98b734*/
  a3 = _getptd()[0x23]; /*0x98b745*/
  if ( !unknown_libname_193((int)v8) ) /*0x98b748*/
    _inconsistency(); /*0x98b753*/
  if ( v8->ExceptionCode == 0xE06D7363 && v8->NumberParameters == 3 ) /*0x98b760*/
  {
    v9 = v8->params.magicNumber; /*0x98b762*/
    if ( (v9 == 0x19930520 || v9 == 0x19930521 || v9 == 0x19930522) && !v8->params.pThrowInfo ) /*0x98b777*/
      _inconsistency(); /*0x98b77d*/
  }
  if ( !_getptd()[0x25] ) /*0x98b787*/
LABEL_38:
    JUMPOUT(0x98B81D); /*0x98b81d*/
  v10 = (int *)_getptd()[0x25]; /*0x98b799*/
  v11 = _getptd(); /*0x98b79f*/
  v15 = a1; /*0x98b7a4*/
  v12 = 0; /*0x98b7a7*/
  v11[0x25] = 0; /*0x98b7a9*/
  if ( !IsInExceptionSpec(v10, v15) ) /*0x98b7af*/
  {
    v14 = 0; /*0x98b7b9*/
    if ( *v10 > 0 ) /*0x98b7bd*/
    {
      do /*0x98b7da*/
      {
        if ( unknown_libname_12(*(const char **)(v14 + v10[1] + 4), (int)&std::bad_exception `RTTI Type Descriptor') ) /*0x98b7cb*/
        {
          __DestructExceptionObject(a1); /*0x98b7e6*/
          a1 = (struct EHExceptionRecord *)"bad exception"; /*0x98b7f4*/
          std::exception::exception((std::exception *)v16, (const char **)&a1); /*0x98b7fb*/
          v16[0] = &std::bad_exception::`vftable'; /*0x98b809*/
          ThrowException__((DWORD)v16, &_TI2_AVbad_exception_std__); /*0x98b810*/
        }
        ++v12; /*0x98b7d4*/
        v14 += 0x10; /*0x98b7d5*/
      }
      while ( v12 < *v10 ); /*0x98b7da*/
    }
    terminate(); /*0x98b7dc*/
  }
  return unknown_libname_83_::unknown_libname_84(a1, a2, a3);
}
