LONG __thiscall NiExtraData_dtor(unsigned int *this)
{
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *(this + 2); /*0x721416*/
  *this = (unsigned int)&NiExtraData::`vftable'; /*0x721417*/
  FormHeapFree(v3); /*0x72141d*/
  *(this + 2) = 0; /*0x721425*/
  return NiRefObject_destr(this); /*0x72142e*/
}
