int __thiscall sub_452230(_DWORD *this, void *a2)
{
  int result; // eax

  result = MemoryHeap_Free_checked(a2);
  *(this + 5) = 0;
  return result;
}
