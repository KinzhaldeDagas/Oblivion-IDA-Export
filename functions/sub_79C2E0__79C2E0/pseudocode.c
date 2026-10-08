// Exception-safe uninitialized copy of compact SFrondGuide records. Placement-copy-constructs [first,last) into destination; unwind cleanup destroys the already constructed prefix before rethrowing.
// positive sp value has been detected, the output may be wrong!
OB_SFrondGuide_010201A0 *__cdecl OB_SFrondGuide_UninitializedCopy_010201A0(
        const OB_SFrondGuide_010201A0 *first,
        const OB_SFrondGuide_010201A0 *last,
        OB_SFrondGuide_010201A0 *destinationFirst)
{
  OB_SFrondGuide_010201A0 *v3; // edi
  OB_SFrondGuide_010201A0 *v5; // esi
  int v7; // [esp-4h] [ebp-28h] BYREF
  OB_stVector16_010201A0 *p_vertexVector; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v9 = &v7; /*0x79c308*/
  v3 = destinationFirst; /*0x79c30b*/
  p_vertexVector = &destinationFirst->vertexVector; /*0x79c314*/
  v10 = 0; /*0x79c317*/
  while ( first != last ) /*0x79c322*/
  {
    OB_SFrondGuide_PlacementCopyConstruct_010201A0(v3++, first); /*0x79c326*/
    destinationFirst = v3; /*0x79c331*/
    ++first; /*0x79c334*/
  }
  v5 = (OB_SFrondGuide_010201A0 *)p_vertexVector; /*0x79c339*/
  if ( p_vertexVector != (OB_stVector16_010201A0 *)destinationFirst ) /*0x79c341*/
  {
    do /*0x79c353*/
      OB_stVector4_DestroyStdcall_010201A0(v5++); /*0x79c349*/
    while ( v5 != destinationFirst ); /*0x79c353*/
  }
  ThrowException__(0, 0); /*0x79c359*/
}
