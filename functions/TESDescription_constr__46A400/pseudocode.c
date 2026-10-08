_DWORD *__thiscall TESDescription_constr(_DWORD *this)
{
  *this = &TESDescription::`vftable'; /*0x46a403*/
  FormHeapFree((unsigned int)MEMORY[0xB33C08].m_data); /*0x46a40f*/
  MEMORY[0xB33C08].m_data = 0; /*0x46a416*/
  word_B33C0E[0] = 0; /*0x46a41b*/
  word_B33C0C = 0; /*0x46a421*/
  MEMORY[0xB33C04] = 0; /*0x46a427*/
  *(this + 1) = 0; /*0x46a42c*/
  return this; /*0x46a434*/
}
