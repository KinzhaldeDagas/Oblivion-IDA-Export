// Build age overlay through engine FindFile (loose/archive lookup): exact requested age first, then floor decade descending to zero. Does not search upwards; null can mean only higher-age overlays exist. Prettier Faces 1.19.9 fixes prior midpoint-only fallback: probe ascending higher decades while closer than current lower result, preserve exact match and lower ties, reconstruct winner because each call mutates outPath. Native unbounded source copy into 260-byte stack buffer remains guarded by plugin path length check in randomizer scope.
char *__cdecl FaceGen_BuildAgeTexturePath(
        BSStringT *outPath,
        int sex,
        unsigned __int8 age,
        const char *baseTexturePath)
{
  const char *sourceCursor; // eax
  char sexSuffix; // bl
  char v6; // cl
  char *extension; // eax
  int fallbackAge; // edi
  char basePathWithoutExtension[260]; // [esp+10h] [ebp-108h] BYREF

  sourceCursor = baseTexturePath; /*0x551a14*/
  sexSuffix = 0x4D; /*0x551a30*/
  if ( !baseTexturePath ) /*0x551a32*/
    return 0; /*0x551a32*/
  if ( age > 0x64u ) /*0x551a3b*/
    return 0; /*0x551a3b*/
  if ( sex >= 2 ) /*0x551a4b*/
    return 0; /*0x551a4b*/
  do /*0x551a61*/
  {
    v6 = *sourceCursor;                         // Begin an unbounded byte copy of baseTexturePath, including its NUL, into a 260-byte stack buffer. A source length >= 260 writes beyond the frame before any extension validation. /*0x551a57*/
    sourceCursor[basePathWithoutExtension - baseTexturePath] = *sourceCursor;// Vanilla/native robustness finding: NUL-inclusive unbounded copy into 260-byte stack array, >=260-byte source length exceeds array. 0x551A00..+0x135 IDA bytes match deployed EXE SHA256 range 0011d4f5799710e459b39e375a8c11e514988f4c4f9e8d6b55057089ad3b5aab. Trigger asset-path reachability and observed crash not tested; unrelated to OCO load defect absent further evidence. /*0x551a59*/
    ++sourceCursor; /*0x551a5c*/
  }
  while ( v6 ); /*0x551a61*/
  extension = strrchr(basePathWithoutExtension, 0x2E); /*0x551a6a*/
  if ( !extension ) /*0x551a74*/
    return 0; /*0x551b1a*/
  *extension = 0; /*0x551a7d*/
  if ( sex == 1 ) /*0x551a80*/
    sexSuffix = 0x46; /*0x551a82*/
  BSStringT_Static_Format(outPath, "Textures\\%s%c%d.dds", basePathWithoutExtension, sexSuffix, age); /*0x551a94*/
  if ( !MEMORY[0xB33A04] || !MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], outPath->m_data, 0, 0, 0xFFFFFFFF) ) /*0x551ab4*/
  {
    fallbackAge = 0xA * (age / 0xA); /*0x551ad2*/
    while ( 1 ) /*0x551ae1*/
    {
      BSStringT_Static_Format(outPath, "Textures\\%s%c%d.dds", basePathWithoutExtension, sexSuffix, fallbackAge); /*0x551ae1*/
      if ( MEMORY[0xB33A04] ) /*0x551ae6*/
      {
        if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], outPath->m_data, 0, 0, 0xFFFFFFFF) ) /*0x551b01*/
          break; /*0x551b01*/
      }
      fallbackAge -= 0xA; /*0x551b07*/
      if ( fallbackAge < 0 ) /*0x551b0a*/
      {
        BSStringT_Set(outPath, EmptyString, 0); /*0x551b15*/
        return 0; /*0x551b15*/
      }
    }
  }
  return outPath->m_data; /*0x551b1c*/
}
