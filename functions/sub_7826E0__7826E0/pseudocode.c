void __thiscall sub_7826E0(unsigned int *this)
{
  unsigned int v1; // [esp-4h] [ebp-4h]

  v1 = *(this + 0xC); /*0x7826e3*/
  *(this + 0xB) = (unsigned int)&NiTArray<NiVBChip *>::`vftable'; /*0x7826e4*/
  FormHeapFree(v1); /*0x7826eb*/
}
