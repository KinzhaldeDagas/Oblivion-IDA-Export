LONG __thiscall sub_738600(unsigned int *this)
{
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *(this + 2); /*0x738606*/
  *this = (unsigned int)&NiShader::`vftable'; /*0x738607*/
  FormHeapFree(v3); /*0x73860d*/
  *this = (unsigned int)&NiRefObject::`vftable'; /*0x73861a*/
  return InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x738626*/
}
