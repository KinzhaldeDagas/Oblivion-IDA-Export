// NiTPointerList allocator virtual that acquires a node from the global NiTList node pool.
int *sub_4F0F60()
{
  return NiTListNodePool_Acquire();
}
