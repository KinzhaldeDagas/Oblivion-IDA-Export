int __thiscall sub_8DE080(const void **this, int a2)
{
  const void **v3; // esi

  v3 = this + 0x17; /*0x8de08a*/
  if ( *(this + 0x18) == (const void *)((unsigned int)*(this + 0x19) & 0x3FFFFFFF) ) /*0x8de094*/
    sub_8A6EE0(this + 0x17, 4); /*0x8de099*/
  *((_DWORD *)*v3 + (_DWORD)*(this + 0x18)) = a2; /*0x8de0aa*/
  *(this + 0x18) = (char *)*(this + 0x18) + 1; /*0x8de0ad*/
  *(_DWORD *)(a2 + 0xC) = this; /*0x8de0b0*/
  return a2; /*0x8de0b3*/
}
