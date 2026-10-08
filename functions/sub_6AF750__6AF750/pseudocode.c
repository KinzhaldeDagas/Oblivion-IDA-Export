unsigned int __thiscall sub_6AF750(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax

  ++*(this + 1); /*0x6af755*/
  if ( !*(this + 4) ) /*0x6af758*/
  {
    ++*(this + 2); /*0x6af75e*/
    *(this + 4) = 8; /*0x6af761*/
  }
  v1 = *(this + 4); /*0x6af76b*/
  v2 = *(_DWORD *)(*(this + 5) + 4 * v1--) & *(_DWORD *)(*(this + 3) + 4 * (*(this + 2) & 0xFFF)); /*0x6af77e*/
  *(this + 4) = v1; /*0x6af784*/
  return v2 >> v1; /*0x6af78d*/
}
