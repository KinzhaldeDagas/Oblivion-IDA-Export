// OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized copy of inner vector<unsigned short*> owners. Uses the shared 4-byte-element vector copy constructor and normally returns at 0x795C0E; prior noreturn metadata was false.
OB_stVectorUShortPtr_010201A0 *__cdecl OB_stVector_stVectorUShortPtr_UninitializedCopyRange_010201A0(
        const OB_stVectorUShortPtr_010201A0 *first,
        const OB_stVectorUShortPtr_010201A0 *last,
        OB_stVectorUShortPtr_010201A0 *destination)
{
  OB_stVector4_010201A0 *v3; // esi
  OB_stVector16_010201A0 *i; // esi
  int v7; // [esp+0h] [ebp-28h] BYREF
  void *v8; // [esp+10h] [ebp-18h]
  OB_stVector16_010201A0 *v9; // [esp+14h] [ebp-14h]
  int *v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  v10 = &v7; /*0x795ba8*/
  v3 = (OB_stVector4_010201A0 *)destination; /*0x795bab*/
  v9 = (OB_stVector16_010201A0 *)destination; /*0x795bb3*/
  v11 = 0; /*0x795bb6*/
  while ( first != last ) /*0x795bc3*/
  {
    v8 = v3; /*0x795bc8*/
    LOBYTE(v11) = 1; /*0x795bcd*/
    if ( v3 ) /*0x795bd1*/
      OB_stVector4_CopyCtor_010201A0(v3, (const OB_stVector4_010201A0 *)first); /*0x795bd6*/
    ++v3; /*0x795bdb*/
    LOBYTE(v11) = 0; /*0x795bde*/
    destination = (OB_stVectorUShortPtr_010201A0 *)v3; /*0x795be1*/
    ++first; /*0x795be4*/
  }
  for ( i = v9; i != (OB_stVector16_010201A0 *)destination; ++i ) /*0x795bf1*/
    OB_stVector4_DestroyStdcall_010201A0((OB_stVector4_010201A0 *)i); /*0x795bf9*/
  ThrowException__(0, 0); /*0x795c09*/
}
