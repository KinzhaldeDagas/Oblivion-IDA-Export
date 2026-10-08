void __thiscall sub_5A9060(unsigned int *this)
{
  FormHeapFree(*(this + 6)); /*0x5a9089*/
  *(this + 6) = 0; /*0x5a9090*/
  *((_WORD *)this + 0xF) = 0; /*0x5a9093*/
  *((_WORD *)this + 0xE) = 0; /*0x5a9097*/
  FormHeapFree(*(this + 4)); /*0x5a909f*/
  *(this + 4) = 0; /*0x5a90a4*/
  *((_WORD *)this + 0xB) = 0; /*0x5a90a7*/
  *((_WORD *)this + 0xA) = 0; /*0x5a90ab*/
  FormHeapFree(*this); /*0x5a90b2*/
  *this = 0; /*0x5a90ba*/
  *((_WORD *)this + 3) = 0; /*0x5a90bc*/
  *((_WORD *)this + 2) = 0; /*0x5a90c0*/
}
