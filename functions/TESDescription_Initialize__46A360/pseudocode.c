int __thiscall TESDescription_Initialize(TESDescription *this)
{
  FormHeapFree((unsigned int)MEMORY[0xB33C08].m_data); /*0x46a369*/
  MEMORY[0xB33C08].m_data = 0; /*0x46a373*/
  word_B33C0E[0] = 0; /*0x46a378*/
  word_B33C0C = 0; /*0x46a37e*/
  MEMORY[0xB33C04] = 0; /*0x46a384*/
  this->formDiskOffset = 0; /*0x46a389*/
  return 0; /*0x46a38c*/
}
