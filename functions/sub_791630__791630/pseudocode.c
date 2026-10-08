//
// [2026-10-05 root ownership] Root extension uses this push on parent+8 after native constructor7915C0 and wrapped branch Compute. ChildPlacement layout index0, fraction4, owned CBranch*8, stride0C. Retained roots then participate in native BuildBranchVector/volume LOD and recursive cleanup790D00. Unretained/pruned root branches are cleaned and freed explicitly.
void __thiscall OB_CBranch_childVectorPush_010201A0(
        OB_stVectorBranchChildRef_010201A0 *this,
        OB_CBranchChildRef_010201A0 *value)
{
  OB_CBranchChildRef_010201A0 *begin; // edi
  unsigned int v4; // ecx
  OB_CBranchChildRef_010201A0 *end; // edi
  OB_CBranchChildRef_010201A0 *v6; // ebx
  OB_stVectorBranchChildRefIterator_010201A0 result; // [esp+8h] [ebp-8h] BYREF

  begin = this->begin; /*0x791637*/
  if ( begin ) /*0x79163c*/
    v4 = this->end - begin; /*0x791655*/
  else
    v4 = 0; /*0x79163e*/
  if ( begin && v4 < this->capacityEnd - begin ) /*0x791672*/
  {
    end = this->end; /*0x79167c*/
    LOBYTE(result.owner) = 0; /*0x79167f*/
    sub_6F1290(end, 1, value); /*0x79168f*/
    this->end = end + 1; /*0x79169a*/
  }
  else
  {
    v6 = this->end; /*0x7916a6*/
    if ( begin > v6 ) /*0x7916ab*/
      _invalid_parameter_noinfo(); /*0x7916ad*/
    OB_stVectorBranchChildRef_InsertOneChecked_010201A0(this, &result, this, v6, value); /*0x7916c0*/
  }
}
