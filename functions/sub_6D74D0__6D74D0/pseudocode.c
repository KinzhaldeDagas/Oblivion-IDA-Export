// Order-sensitive equality: requires base equality, identical count, and every corresponding 0x08-byte key to have exactly equal float time and case-sensitive text.
char __thiscall NiTextKeyExtraData_IsEqual(NiTriBasedGeomData *this, int a2)
{
  float x; // ebx
  unsigned int v5; // edi
  float y; // esi
  int v7; // ebp

  if ( !a2 || !sub_700670(this, a2) ) /*0x6d74e4*/
    return 0; /*0x6d74dd*/
  x = this->members.super.m_kBound.Center.x; /*0x6d74ee*/
  if ( LODWORD(x) != *(_DWORD *)(a2 + 0xC) ) /*0x6d74f4*/
    return 0; /*0x6d74f8*/
  v5 = 0; /*0x6d74ff*/
  if ( x == 0.0 ) /*0x6d7503*/
    return 1; /*0x6d7529*/
  y = this->members.super.m_kBound.Center.y; /*0x6d7505*/
  v7 = *(_DWORD *)(a2 + 0x10) - LODWORD(y); /*0x6d750b*/
  while ( !(unsigned __int8)NiTextKey_IsDifferent((const char **)LODWORD(y), LODWORD(y) + v7) ) /*0x6d751d*/
  {
    ++v5; /*0x6d751f*/
    LODWORD(y) += 8; /*0x6d7522*/
    if ( v5 >= LODWORD(x) ) /*0x6d7527*/
      return 1; /*0x6d7527*/
  }
  return 0; /*0x6d74dc*/
}
