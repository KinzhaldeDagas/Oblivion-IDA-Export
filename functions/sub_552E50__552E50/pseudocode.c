void __thiscall sub_552E50(int *this)
{
  int v2; // eax

  v2 = *(this + 1); /*0x552e54*/
  if ( v2 ) /*0x552e59*/
  {
    sub_5522B0(v2, *(this + 2)); /*0x552e66*/
    FormHeapFree(*(this + 1)); /*0x552e6f*/
  }
  *(this + 1) = 0; /*0x552e77*/
  *(this + 2) = 0; /*0x552e7e*/
  *(this + 3) = 0; /*0x552e85*/
}
