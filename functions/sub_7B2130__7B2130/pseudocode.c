char __cdecl sub_7B2130(char a1)
{
  NiNode *v1; // ecx
  char result; // al

  v1 = MEMORY[0xB42D64]; /*0x7b2130*/
  if ( !MEMORY[0xB42D64] ) /*0x7b2130*/
  {
    nullsub_return0_0arg(); /*0x7b2149*/
    v1 = MEMORY[0xB42D64]; /*0x7b214e*/
  }
  result = v1->members.super.m_flags & 1; /*0x7b215a*/
  if ( a1 ) /*0x7b2161*/
    v1->members.super.m_flags |= 1u; /*0x7b2163*/
  else
    v1->members.super.m_flags &= ~1u; /*0x7b2169*/
  return result; /*0x7b2168*/
}
