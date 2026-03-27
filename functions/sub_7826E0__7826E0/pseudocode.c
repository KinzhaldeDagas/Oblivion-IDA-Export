void __thiscall sub_7826E0(unsigned int *this)
{
  unsigned int v1; // [esp-4h] [ebp-4h]

  v1 = *(this + 0xC);
  *(this + 0xB) = (unsigned int)&NiTArray<NiVBChip *>::`vftable';
  FormHeapFree(v1);
}
