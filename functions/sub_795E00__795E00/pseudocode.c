// OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized move for vector<unsigned short> owners. Constructs empty destinations then swaps their buffers with sources, leaving sources empty; normal return is at 0x795EA8.
OB_stVectorUShort_010201A0 *__cdecl OB_stVector_stVectorUShort_UninitializedMoveRange_010201A0(
        OB_stVectorUShort_010201A0 *first,
        OB_stVectorUShort_010201A0 *last,
        OB_stVectorUShort_010201A0 *destination)
{
  OB_stVectorUShort_010201A0 *v3; // esi
  OB_stVector16_010201A0 *i; // esi
  int v7; // [esp+0h] [ebp-38h] BYREF
  OB_stVector4_010201A0 v8; // [esp+10h] [ebp-28h] BYREF
  void *v9; // [esp+20h] [ebp-18h]
  OB_stVector16_010201A0 *v10; // [esp+24h] [ebp-14h]
  int *v11; // [esp+28h] [ebp-10h]
  int v12; // [esp+34h] [ebp-4h]

  v11 = &v7; /*0x795e28*/
  v3 = destination; /*0x795e2b*/
  v10 = (OB_stVector16_010201A0 *)destination; /*0x795e30*/
  memset(&v8.begin, 0, 0xC); /*0x795e33*/
  v12 = 1; /*0x795e41*/
  while ( first != last ) /*0x795e4a*/
  {
    v9 = v3; /*0x795e4f*/
    LOBYTE(v12) = 2; /*0x795e54*/
    if ( v3 ) /*0x795e58*/
      OB_stVectorUShort_CopyCtor_010201A0(v3, (const OB_stVectorUShort_010201A0 *)&v8); /*0x795e60*/
    LOBYTE(v12) = 1; /*0x795e68*/
    OB_stVectorUShort_Swap_010201A0(v3++, first++); /*0x795e6b*/
    destination = v3; /*0x795e76*/
  }
  if ( v8.begin ) /*0x795ead*/
    FormHeapFree((unsigned int)v8.begin); /*0x795eb0*/
  for ( i = v10; i != (OB_stVector16_010201A0 *)destination; ++i ) /*0x795e85*/
    OB_stVector4_DestroyStdcall_010201A0((OB_stVector4_010201A0 *)i); /*0x795e93*/
  ThrowException__(0, 0); /*0x795ea3*/
}
