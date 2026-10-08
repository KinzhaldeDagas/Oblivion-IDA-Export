// OBLIVION AUTHORITY 2026-08-27: Recursively accumulates hierarchical branch placement percent. Base is 0 when branch is null or has no parent. Otherwise A(branch)=A(parent)+(1-A(parent))*branch->percentAlongParent. This visits the full parent chain; it is not the RT4.1 limited-depth product formula.
float __cdecl OB_CBranch_AccumulateLeafDimmingPercent_010201A0(const OB_CBranch_010201A0 *branch)
{
  float brancha; // [esp+8h] [ebp+4h]

  if ( branch && branch->parentBranch ) /*0x78fa09*/
  {
    brancha = OB_CBranch_AccumulateLeafDimmingPercent_010201A0((const OB_CBranch_010201A0 *)branch->parentBranch); /*0x78fa15*/
    return brancha + (1.0 - brancha) * branch->percentAlongParent; /*0x78fa30*/
  }
  else
  {
    return 0.0; /*0x78fa35*/
  }
}
