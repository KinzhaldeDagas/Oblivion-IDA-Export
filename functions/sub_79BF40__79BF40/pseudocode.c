// OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized_fill_n for vector<float> elements of vector<vector<float>>. Deep-copy-constructs each inner vector and destroys only the constructed prefix on unwind. Its normal return at 0x79BFD0 proves the prior noreturn annotation false.
void __cdecl OB_stVector_stVectorFloat_UninitializedFillN_010201A0(
        OB_stVectorFloat_010201A0 *destination,
        unsigned int count,
        const OB_stVectorFloat_010201A0 *value)
{
  OB_stVector4_010201A0 *v3; // esi
  OB_stVector16_010201A0 *i; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  OB_stVector16_010201A0 *v8; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = &v6; /*0x79bf68*/
  v3 = (OB_stVector4_010201A0 *)destination; /*0x79bf6b*/
  v8 = (OB_stVector16_010201A0 *)destination; /*0x79bf73*/
  v10 = 0; /*0x79bf76*/
  while ( count ) /*0x79bf82*/
  {
    v7 = v3; /*0x79bf87*/
    LOBYTE(v10) = 1; /*0x79bf8c*/
    if ( v3 ) /*0x79bf90*/
      OB_stVector4_CopyCtor_010201A0(v3, (const OB_stVector4_010201A0 *)value); /*0x79bf98*/
    --count; /*0x79bf9d*/
    ++v3; /*0x79bfa0*/
    LOBYTE(v10) = 0; /*0x79bfa3*/
    destination = (OB_stVectorFloat_010201A0 *)v3; /*0x79bfa6*/
  }
  for ( i = v8; i != (OB_stVector16_010201A0 *)destination; ++i ) /*0x79bfb3*/
    OB_stVector4_DestroyStdcall_010201A0((OB_stVector4_010201A0 *)i); /*0x79bfbb*/
  ThrowException__(0, 0); /*0x79bfcb*/
}
