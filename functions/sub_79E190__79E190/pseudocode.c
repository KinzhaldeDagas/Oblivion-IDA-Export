// Exception-safe uninitialized_fill_n for compact SFrondGuide records. Placement-copy-constructs count values; unwind cleanup destroys the constructed prefix before rethrowing.
// positive sp value has been detected, the output may be wrong!
OB_SFrondGuide_010201A0 *__cdecl OB_SFrondGuide_UninitializedFillN_010201A0(
        OB_SFrondGuide_010201A0 *destination,
        unsigned int count,
        const OB_SFrondGuide_010201A0 *value)
{
  OB_SFrondGuide_010201A0 *v3; // edi
  OB_SFrondGuide_010201A0 *v5; // esi
  int v7; // [esp-4h] [ebp-28h] BYREF
  OB_stVector16_010201A0 *p_vertexVector; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v9 = &v7; /*0x79e1b8*/
  v3 = destination; /*0x79e1bb*/
  p_vertexVector = &destination->vertexVector; /*0x79e1c4*/
  v10 = 0; /*0x79e1c7*/
  while ( count ) /*0x79e1d2*/
  {
    OB_SFrondGuide_PlacementCopyConstruct_010201A0(v3, value); /*0x79e1d6*/
    --count; /*0x79e1de*/
    destination = ++v3; /*0x79e1e4*/
  }
  v5 = (OB_SFrondGuide_010201A0 *)p_vertexVector; /*0x79e1e9*/
  if ( p_vertexVector != (OB_stVector16_010201A0 *)destination ) /*0x79e1f1*/
  {
    do /*0x79e203*/
      OB_stVector4_DestroyStdcall_010201A0(v5++); /*0x79e1f9*/
    while ( v5 != destination ); /*0x79e203*/
  }
  ThrowException__(0, 0); /*0x79e209*/
}
