// Allocates a 0x4C-byte CBillboardLeaf, default-constructs it, then applies the local copy-assignment helper.
OB_CBillboardLeaf_010201A0 *__thiscall OB_CBillboardLeaf_Clone_010201A0(const OB_CBillboardLeaf_010201A0 *this)
{
  OB_CBillboardLeaf_010201A0 *v2; // eax
  OB_CBillboardLeaf_010201A0 *v3; // esi

  v2 = (OB_CBillboardLeaf_010201A0 *)FormHeapAlloc(0x4Cu); /*0x7a7e77*/
  v3 = 0; /*0x7a7e83*/
  if ( v2 ) /*0x7a7e8b*/
    v3 = OB_CBillboardLeaf_ctor_010201A0(v2); /*0x7a7e94*/
  OB_CBillboardLeaf_copy_assign_010201A0(v3, this); /*0x7a7ea1*/
  return v3; /*0x7a7ea8*/
}
