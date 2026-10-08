int __thiscall sub_4329A0(unsigned int *this, unsigned int a2)
{
  int v2; // edi
  int result; // eax
  unsigned int v5; // edx

  v2 = *(_DWORD *)(a2 + 4); /*0x4329a7*/
  if ( v2 ) /*0x4329ae*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 8)) ) /*0x4329b4*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4329ca*/
    *(_DWORD *)(a2 + 4) = 0; /*0x4329cc*/
  }
  *(_DWORD *)(a2 + 4) = *(this + 4); /*0x4329d6*/
  result = ++*(this + 3); /*0x4329dd*/
  v5 = *this; /*0x4329e0*/
  *(this + 4) = a2; /*0x4329e2*/
  if ( result == *(_DWORD *)(v5 + 0xC) ) /*0x4329e8*/
    return sub_432740(this); /*0x4329ec*/
  return result; /*0x4329f1*/
}
