void __thiscall sub_573E70(unsigned int *this)
{
  MemoryHeap_Free_checked(dword_B3A6B4);
  dword_B3A6B8 = 0;
  dword_B3A6B4 = 0;
  sub_573950(this);
  FormHeapFree(*(this + 1));
  _LN21(this + 3, 4u, 8, (void (__thiscall *)(void *))sub_7016A0);
}
