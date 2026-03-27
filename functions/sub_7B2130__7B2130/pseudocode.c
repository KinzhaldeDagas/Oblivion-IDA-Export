char __cdecl sub_7B2130(char a1)
{
  NiNode *v1; // ecx
  char result; // al

  v1 = LODTree;
  if ( !LODTree )
  {
    nullsub_return0_0arg();
    v1 = LODTree;
  }
  result = v1->members.super.m_flags & 1;
  if ( a1 )
    v1->members.super.m_flags |= 1u;
  else
    v1->members.super.m_flags &= ~1u;
  return result;
}
