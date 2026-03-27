int __thiscall MemoryHeap_RawFree2_CRTFree_(void *this)
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x14))(this);
}
