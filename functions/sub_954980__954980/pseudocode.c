int __thiscall sub_954980(unsigned int **this, unsigned int a2)
{
  unsigned int *v2; // ecx

  v2 = *(this + 4); /*0x954989*/
  if ( a2 < 0x100 ) /*0x95498d*/
    return sub_956580(v2, 9, a2); /*0x954991*/
  if ( a2 >= 0x10000 ) /*0x95499e*/
    return sub_9567C0(v2, 0xB, a2); /*0x9549ac*/
  return sub_9565E0(v2, 0xA, a2); /*0x954996*/
}
