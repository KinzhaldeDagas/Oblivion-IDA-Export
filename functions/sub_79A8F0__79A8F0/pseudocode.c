// OBLIVION AUTHORITY (2026-08-30): Copies CBranchChildRef records backward from [first,last) into the range ending at destinationLast. Each record is exactly 0x0C bytes (three dwords: parent vertex index, interpolation fraction, child pointer); returns the first destination record. RT4.1 StructsSupport.h:131-147 corroborates the already-observed SIdvBranch layout.
OB_CBranchChildRef_010201A0 *__cdecl OB_CBranchChildRef_CopyBackward_010201A0(
        const OB_CBranchChildRef_010201A0 *first,
        const OB_CBranchChildRef_010201A0 *last,
        OB_CBranchChildRef_010201A0 *destinationLast)
{
  const OB_CBranchChildRef_010201A0 *v3; // ecx
  OB_CBranchChildRef_010201A0 *result; // eax
  int v5; // edx
  int parentVertexIndex; // edi

  v3 = last; /*0x79a8f0*/
  result = &destinationLast[-(last - first)]; /*0x79a91d*/
  if ( first != last ) /*0x79a921*/
  {
    v5 = (char *)destinationLast - (char *)last; /*0x79a923*/
    do /*0x79a93e*/
    {
      parentVertexIndex = v3[0xFFFFFFFF].parentVertexIndex; /*0x79a925*/
      v3 += 0xFFFFFFFF; /*0x79a928*/
      *(int *)((char *)&v3->parentVertexIndex + v5) = parentVertexIndex; /*0x79a92d*/
      *(float *)((char *)&v3->percentBetweenParentVertices + v5) = v3->percentBetweenParentVertices; /*0x79a933*/
      *(int *)((char *)&v3->childBranch + v5) = v3->childBranch; /*0x79a93a*/
    }
    while ( v3 != first ); /*0x79a93e*/
  }
  return result; /*0x79a940*/
}
