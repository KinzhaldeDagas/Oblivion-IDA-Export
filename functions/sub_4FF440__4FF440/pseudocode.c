void __thiscall sub_4FF440(unsigned int *this)
{
  sub_4FCC90(this);
  sub_4FD520(this);
  sub_4FD580(this);
  MemoryHeap_Free_checked((void *)*(this + 8));
  FormHeapFree(*(this + 3));
  *(this + 3) = 0;
  *((_WORD *)this + 9) = 0;
  *((_WORD *)this + 8) = 0;
}
