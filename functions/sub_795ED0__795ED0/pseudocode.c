// OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized move of 0x10-byte vector owners. Constructs empty destinations, swaps begin/end/capacity ownership from each source, leaves sources empty, returns destinationFirst+count, and destroys the constructed prefix only on unwind. The prior noreturn annotation was false.
OB_stVector4_010201A0 *__cdecl OB_stVector4_UninitializedMoveRange_010201A0(
        OB_stVector4_010201A0 *first,
        OB_stVector4_010201A0 *last,
        OB_stVector4_010201A0 *destinationFirst)
{
  OB_stVector4_010201A0 *v3; // esi
  unsigned int *begin; // eax
  unsigned int *end; // eax
  unsigned int *capacity; // eax
  OB_stVector16_010201A0 *i; // esi
  int v10; // [esp+0h] [ebp-38h] BYREF
  OB_stVector4_010201A0 source; // [esp+10h] [ebp-28h] BYREF
  void *v12; // [esp+20h] [ebp-18h]
  OB_stVector16_010201A0 *v13; // [esp+24h] [ebp-14h]
  int *v14; // [esp+28h] [ebp-10h]
  int v15; // [esp+34h] [ebp-4h]

  v14 = &v10; /*0x795ef8*/
  v3 = destinationFirst; /*0x795efb*/
  v13 = (OB_stVector16_010201A0 *)destinationFirst; /*0x795f00*/
  memset(&source.begin, 0, 0xC); /*0x795f03*/
  v15 = 0; /*0x795f0f*/
  while ( 1 ) /*0x795f17*/
  {
    LOBYTE(v15) = 1; /*0x795f17*/
    if ( first == last ) /*0x795f1a*/
      break; /*0x795f1a*/
    v12 = v3; /*0x795f1f*/
    LOBYTE(v15) = 2; /*0x795f24*/
    if ( v3 ) /*0x795f28*/
      OB_stVector4_CopyCtor_010201A0(v3, &source); /*0x795f30*/
    begin = v3->begin; /*0x795f3a*/
    v3->begin = first->begin; /*0x795f3d*/
    first->begin = begin; /*0x795f40*/
    end = v3->end; /*0x795f46*/
    v3->end = first->end; /*0x795f49*/
    first->end = end; /*0x795f4c*/
    capacity = v3->capacity; /*0x795f52*/
    v3->capacity = first->capacity; /*0x795f55*/
    ++v3; /*0x795f58*/
    first->capacity = capacity; /*0x795f5b*/
    destinationFirst = v3; /*0x795f5e*/
    ++first; /*0x795f61*/
  }
  if ( source.begin )                           // Normal completion path: releases the temporary empty-owner buffer and returns the advanced destination pointer; the earlier 0x795F66 block is the exception-cleanup funclet, not the only exit. /*0x795f90*/
    FormHeapFree((unsigned int)source.begin); /*0x795f93*/
  for ( i = v13; i != (OB_stVector16_010201A0 *)destinationFirst; ++i ) /*0x795f6e*/
    OB_stVector4_DestroyStdcall_010201A0((OB_stVector4_010201A0 *)i); /*0x795f76*/
  ThrowException__(0, 0); /*0x795f86*/
}
