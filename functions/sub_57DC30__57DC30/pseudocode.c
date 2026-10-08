unsigned int __thiscall sub_57DC30(_DWORD *this, int a2)
{
  unsigned int result; // eax

  result = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x57dc30*/
  *(this + 0x48) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x57dc39*/
  *(this + 0x49) = 0; /*0x57dc3f*/
  *(this + 0x47) = a2; /*0x57dc49*/
  return result; /*0x57dc4f*/
}
