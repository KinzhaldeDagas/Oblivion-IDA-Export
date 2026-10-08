void __thiscall BSStringT_Clear(unsigned int *this)
{
  FormHeapFree(*this); /*0x402da6*/
  *this = 0; /*0x402db0*/
  *((_WORD *)this + 3) = 0; /*0x402db2*/
  *((_WORD *)this + 2) = 0; /*0x402db6*/
}
