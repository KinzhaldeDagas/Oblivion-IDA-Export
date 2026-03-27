size_t __stdcall MemoryHeap_Destruct(void *Memory)
{
  return _msize(Memory);
}
