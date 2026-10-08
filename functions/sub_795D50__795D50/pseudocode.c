// OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized_fill_n for vector<unsigned short> owners. Deep-copy-constructs count values and normally returns at 0x795DE0; prior noreturn metadata was false.
OB_stVectorUShort_010201A0 *__cdecl OB_stVector_stVectorUShort_UninitializedFillN_010201A0(
        OB_stVectorUShort_010201A0 *destination,
        unsigned int count,
        const OB_stVectorUShort_010201A0 *value)
{
  OB_stVectorUShort_010201A0 *v3; // esi
  OB_stVector16_010201A0 *i; // esi
  int v7; // [esp+0h] [ebp-28h] BYREF
  void *v8; // [esp+10h] [ebp-18h]
  OB_stVector16_010201A0 *v9; // [esp+14h] [ebp-14h]
  int *v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  v10 = &v7; /*0x795d78*/
  v3 = destination; /*0x795d7b*/
  v9 = (OB_stVector16_010201A0 *)destination; /*0x795d83*/
  v11 = 0; /*0x795d86*/
  while ( count ) /*0x795d92*/
  {
    v8 = v3; /*0x795d97*/
    LOBYTE(v11) = 1; /*0x795d9c*/
    if ( v3 ) /*0x795da0*/
      OB_stVectorUShort_CopyCtor_010201A0(v3, value); /*0x795da8*/
    --count; /*0x795dad*/
    ++v3; /*0x795db0*/
    LOBYTE(v11) = 0; /*0x795db3*/
    destination = v3; /*0x795db6*/
  }
  for ( i = v9; i != (OB_stVector16_010201A0 *)destination; ++i ) /*0x795dc3*/
    OB_stVector4_DestroyStdcall_010201A0((OB_stVector4_010201A0 *)i); /*0x795dcb*/
  ThrowException__(0, 0); /*0x795ddb*/
}
