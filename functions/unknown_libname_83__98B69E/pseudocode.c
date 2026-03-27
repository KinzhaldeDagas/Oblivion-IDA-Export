int __cdecl unknown_libname_83(struct EHExceptionRecord *a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  signed int v6; // ecx
  unsigned int magicNumber; // eax
  struct EHExceptionRecord *v8; // esi
  unsigned int v9; // eax
  int *v10; // edi
  int v11; // eax
  int v12; // esi
  int v14; // ebx
  struct EHExceptionRecord *v15; // [esp-4h] [ebp-3Ch]
  _DWORD v16[10]; // [esp+Ch] [ebp-2Ch] BYREF
  char v17; // [esp+37h] [ebp-1h]

  v5 = *(_DWORD *)(a5 + 4);
  v17 = 0;
  if ( v5 > 0x80 )
    v6 = *(_DWORD *)(a2 + 8);
  else
    v6 = *(char *)(a2 + 8);
  v16[9] = v6;
  if ( v6 < (int)0xFFFFFFFF || v6 >= v5 )
    _inconsistency();
  if ( a1->ExceptionCode != 0xE06D7363 )
    JUMPOUT(0x98B9B0);
  if ( a1->NumberParameters != 3 )
    goto LABEL_38;
  magicNumber = a1->params.magicNumber;
  if ( magicNumber != 0x19930520 && magicNumber != 0x19930521 && magicNumber != 0x19930522 )
    goto LABEL_38;
  if ( a1->params.pThrowInfo )
    goto LABEL_38;
  if ( !*(_DWORD *)(_getptd() + 0x88) )
    JUMPOUT(0x98B9EF);
  v8 = *(struct EHExceptionRecord **)(_getptd() + 0x88);
  a1 = v8;
  a3 = *(_DWORD *)(_getptd() + 0x8C);
  if ( !unknown_libname_193((int)v8) )
    _inconsistency();
  if ( v8->ExceptionCode == 0xE06D7363 && v8->NumberParameters == 3 )
  {
    v9 = v8->params.magicNumber;
    if ( (v9 == 0x19930520 || v9 == 0x19930521 || v9 == 0x19930522) && !v8->params.pThrowInfo )
      _inconsistency();
  }
  if ( !*(_DWORD *)(_getptd() + 0x94) )
LABEL_38:
    JUMPOUT(0x98B81D);
  v10 = *(int **)(_getptd() + 0x94);
  v11 = _getptd();
  v15 = a1;
  v12 = 0;
  *(_DWORD *)(v11 + 0x94) = 0;
  if ( !IsInExceptionSpec(v10, v15) )
  {
    v14 = 0;
    if ( *v10 > 0 )
    {
      do
      {
        if ( unknown_libname_12(*(const char **)(v14 + v10[1] + 4), (int)&std::bad_exception `RTTI Type Descriptor') )
        {
          __DestructExceptionObject(a1);
          a1 = (struct EHExceptionRecord *)"bad exception";
          std::exception::exception((std::exception *)v16, (const char **)&a1);
          v16[0] = &std::bad_exception::`vftable';
          ThrowException__((DWORD)v16, &_TI2_AVbad_exception_std__);
        }
        ++v12;
        v14 += 0x10;
      }
      while ( v12 < *v10 );
    }
    terminate();
  }
  return unknown_libname_83_::unknown_libname_84(a1, a2, a3);
}
