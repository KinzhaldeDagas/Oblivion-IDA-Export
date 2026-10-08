void __thiscall sub_4FF440(unsigned int *this)
{
  sub_4FCC90(this); /*0x4ff46f*/
  sub_4FD520(this); /*0x4ff476*/
  sub_4FD580(this); /*0x4ff47d*/
  MemoryHeap_Free_checked((void *)*(this + 8)); /*0x4ff48b*/
  FormHeapFree(*(this + 3)); /*0x4ff494*/
  *(this + 3) = 0; /*0x4ff49c*/
  *((_WORD *)this + 9) = 0; /*0x4ff49f*/
  *((_WORD *)this + 8) = 0; /*0x4ff4a3*/
}
