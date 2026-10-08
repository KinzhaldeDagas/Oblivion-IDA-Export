// OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized copy of inner vector<unsigned short> owners. Deep-copy-constructs the destination range, destroys only its constructed prefix on unwind, and normally returns the constructed end at 0x795B5E; prior noreturn metadata was false.
OB_stVectorUShort_010201A0 *__cdecl OB_stVector_stVectorUShort_UninitializedCopyRange_010201A0(
        const OB_stVectorUShort_010201A0 *first,
        const OB_stVectorUShort_010201A0 *last,
        OB_stVectorUShort_010201A0 *destination)
{
  OB_stVectorUShort_010201A0 *v3; // esi
  OB_stVector16_010201A0 *i; // esi
  int v7; // [esp+0h] [ebp-28h] BYREF
  void *v8; // [esp+10h] [ebp-18h]
  OB_stVector16_010201A0 *v9; // [esp+14h] [ebp-14h]
  int *v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  v10 = &v7; /*0x795af8*/
  v3 = destination; /*0x795afb*/
  v9 = (OB_stVector16_010201A0 *)destination; /*0x795b03*/
  v11 = 0; /*0x795b06*/
  while ( first != last ) /*0x795b13*/
  {
    v8 = v3; /*0x795b18*/
    LOBYTE(v11) = 1; /*0x795b1d*/
    if ( v3 ) /*0x795b21*/
      OB_stVectorUShort_CopyCtor_010201A0(v3, first); /*0x795b26*/
    ++v3; /*0x795b2b*/
    LOBYTE(v11) = 0; /*0x795b2e*/
    destination = v3; /*0x795b31*/
    ++first; /*0x795b34*/
  }
  for ( i = v9; i != (OB_stVector16_010201A0 *)destination; ++i ) /*0x795b41*/
    OB_stVector4_DestroyStdcall_010201A0((OB_stVector4_010201A0 *)i); /*0x795b49*/
  ThrowException__(0, 0); /*0x795b59*/
}
