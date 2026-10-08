NiNode *sub_499E20()
{
  NiNode *result; // eax
  bool v1; // zf

  result = *(NiNode **)&MEMORY[0xB33E90][0x13A4]; /*0x499e20*/
  v1 = *(_DWORD *)&MEMORY[0xB33E90][0x13A4] == 0; /*0x499e25*/
  MEMORY[0xB33E90][0x1399] = 0; /*0x499e27*/
  if ( !v1 ) /*0x499e2e*/
    result->members.super.m_flags |= 1u; /*0x499e30*/
  return result; /*0x499e35*/
}
