int __thiscall sub_9548D0(unsigned int **this, char a2, signed int a3)
{
  if ( a3 < 0 ) /*0x9548da*/
    return sub_9567C0(*(this + 4), a2 + 0x68, a3); /*0x9548da*/
  if ( a3 < 0x100 ) /*0x9548f4*/
    return sub_956580(*(this + 4), a2 + 0x60, a3); /*0x954904*/
  if ( a3 >= 0x10000 ) /*0x95490e*/
    return sub_9567C0(*(this + 4), a2 + 0x68, a3); /*0x954931*/
  else
    return sub_9565E0(*(this + 4), a2 + 0x64, a3); /*0x95491e*/
}
