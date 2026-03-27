NiNode *sub_499E20()
{
  NiNode *result; // eax
  bool v1; // zf

  result = LodWaterRoot;
  v1 = LodWaterRoot == 0;
  byte_B35229 = 0;
  if ( !v1 )
    result->members.super.m_flags |= 1u;
  return result;
}
